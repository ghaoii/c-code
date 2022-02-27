#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.cpp"

void menu()
{
	printf("*****************************\n");
	printf("*****  1.play   0.exit  *****\n");
	printf("*****************************\n");
}

void game()
{
	printf("ɨ��\n");
	//׼�������׵�����
	char mine[ROWS][COLS] = { 0 };
	//׼���Ų��׵�����
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROWS, COLS);
	//DisplayBoard(mine, ROW, COL);
	//���ɨ��
	FindMine(mine, show, ROW, COL);
	DisplayBoard(mine, ROW, COL);
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
			printf("�˳���Ϸ \n");
			break; 
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);//ֻҪ��switch��û��ѡ��0�����½���ѭ��
}

int main()
{
	test();
	return 0;
}