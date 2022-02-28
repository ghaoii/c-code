#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.h"

void menu()
{
	printf("*******************************\n");
	printf("************ 1.play ***********\n");
	printf("************ 0.exit ***********\n");
	printf("*******************************\n");
}

void game()
{
	//����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//���������Χ�׵ĸ���������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//���õ���
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//�������
	Play(mine, show, ROW, COL);
	DisplayBoard(mine, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
