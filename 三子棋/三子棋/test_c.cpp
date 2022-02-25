#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.h"

void menu()
{
	printf("**********************************\n");
	printf("******* 1.play      0.exit *******\n");
	printf("**********************************\n");
}

//������Ϸ���㷨ʵ��

void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
 	DisplayBoard(board, ROW, COL);
	//����
	char ret = 0;//����IsWin�ķ���ֵ
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n\n");
	}
	else
	{
		printf("ƽ���ˣ�\n\n");
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
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}