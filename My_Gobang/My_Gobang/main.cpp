#define _CRT_SECURE_NO_WARNINGS 1

#include "game_c.h"

void menu()
{
	printf("*************************\n");
	printf("****  1.play  0.exit ****\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//�������
	Play(mine, show, ROW, COL);
	DisplayBoard(mine, ROW, COL);

}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default :
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

