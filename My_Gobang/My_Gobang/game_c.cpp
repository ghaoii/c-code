#define _CRT_SECURE_NO_WARNINGS 1

#include "game_c.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		//检查该坐标是否有重复
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}

int count_mine(char board[ROWS][COLS], int i, int j)
{
	return board[i - 1][j - 1] +
		board[i - 1][j] +
		board[i - 1][j + 1] +
		board[i][j - 1] +
		board[i][j + 1] +
		board[i + 1][j - 1] +
		board[i + 1][j] +
		board[i + 1][j + 1] - 8 * '0';
}

void Expend(char mine[ROWS][COLS],char show[ROWS][COLS], int i, int j)
{
	//如果是坐标周围有雷,则不展开，并显示周围雷的数量
	int count = count_mine(mine, i, j);
	if (count != 0)
	{
		show[i][j] = '0' + count;
	}
	else
	{
		//如果周围没有雷，那么先展开，并判断坐标周围坐标能否展开，坐标范围在1-ROW/COL
		show[i][j] = ' ';
		if (i - 1 >= 1 && j - 1 >= 1 && show[i - 1][j - 1] == '*')//保证需要展开的坐标没有扫过雷
		{
			Expend(mine, show, i - 1, j - 1);
		}
		if (i - 1 >= 1 && show[i - 1][j] == '*')
		{
			Expend(mine, show, i - 1, j);
		}
		if (i - 1 >= 1 && j + 1 <= COL && show[i - 1][j + 1] == '*')
		{
			Expend(mine, show, i - 1, j + 1);
		}
		if (j - 1 >= 1 && show[i][j - 1] == '*')
		{
			Expend(mine, show, i, j - 1);
		}
		if (j + 1 <= COL && show[i][j + 1] == '*')
		{
			Expend(mine, show, i, j + 1);
		}
		if (i + 1 <= ROW && j - 1 >= 1 && show[i + 1][j - 1] == '*')
		{
			Expend(mine, show, i + 1, j - 1);
		}
		if (i + 1 <= ROW && show[i + 1][j] == '*')
		{
			Expend(mine, show, i + 1, j);
		}
		if (i + 1 <= ROW && j + 1 <= COL && show[i + 1][j + 1] == '*')
		{
			Expend(mine, show, i + 1, j + 1);
		}
	}
}

int IsWin(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != '*')
			{
				count++;
			}
		}
	}
	return count;
}

void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &i, &j);
		//判断坐标的合法性
		if (i >= 1 && i <= row && j >= 1 && j <= col && show[i][j] == '*')
		{
			if (mine[i][j] == '1')
			{
				printf("很遗憾，你踩雷了！\n");
				break;
			}
			else
			{
				//展开
				Expend(mine, show, i, j);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入！\n");
		}
		//每走完一步判断游戏输赢
		if (IsWin(show, ROW, COL) == ROW*COL-EASY)
		{
			printf("恭喜你，排雷成功！\n");
			break;
		}
	}
}