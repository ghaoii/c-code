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
	printf("扫雷\n");
	//准备布置雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	//准备排查雷的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROWS, COLS);
	//DisplayBoard(mine, ROW, COL);
	//玩家扫雷
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏 \n");
			break; 
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);//只要在switch中没有选择0就重新进入循环
}

int main()
{
	test();
	return 0;
}