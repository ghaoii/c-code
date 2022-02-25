#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.h"

void menu()
{
	printf("**********************************\n");
	printf("******* 1.play      0.exit *******\n");
	printf("**********************************\n");
}

//整个游戏的算法实现

void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
 	DisplayBoard(board, ROW, COL);
	//下棋
	char ret = 0;//接受IsWin的返回值
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n\n");
	}
	else
	{
		printf("平局了！\n\n");
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
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}