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
	//存放用户走出的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//游戏进行
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断玩家是否赢
		if (ret != 'C')
		{
			if (ret != 'Q')
			{
				printf("玩家赢了！\n");
			}
			else
			{
				printf("平局！\n");
			}
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断电脑是否赢
		if (ret != 'C')
		{
			if (ret != 'Q')
			{
				printf("电脑赢了！\n");
			}
			else
			{
				printf("平局！\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}