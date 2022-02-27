#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h.h"
void menu()
{
	printf("*******************************\n");
	printf("*****  1.play     0.exit  *****\n");
	printf("*******************************\n");
}

void game()
{
	int ret = 0;
	//����û��߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//��Ϸ����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			if (ret != 'Q')
			{
				printf("���Ӯ�ˣ�\n");
			}
			else
			{
				printf("ƽ�֣�\n");
			}
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			if (ret != 'Q')
			{
				printf("����Ӯ�ˣ�\n");
			}
			else
			{
				printf("ƽ�֣�\n");
			}
			break;
		}
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{	
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�����忪ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}