#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家下棋，请输入坐标：");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断该坐标是否已落子
			if (board[x - 1][y - 1] == ' ')
			{
				//玩家棋子为*
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已落子，请重新选择！\n");
			}
		}
		else
		{
			printf("坐标输入不合法，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	//生成随机值
	while (1)
	{
		int i = rand() % 3;
		int j = rand() % 3;
		//判断坐标是否落子
		if (board[i][j] == ' ')
		{
			//电脑棋子为#
			board[i][j] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//斜对角
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'P';
	}
	return 'C';
}