#define _CRT_SECURE_NO_WARNINGS 1

#include "game_h.h"

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
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT_EASY;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void Expend(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int m = get_mine_count(mine, x, y);
	if (m != 0)
	{
		show[x][y] = m + '0';
	}
	else
	{
		show[x][y] = ' ';
		if (x - 1 >= 1 && y - 1 >= 1 && show[x - 1][y - 1] == '*')
		{
			Expend(mine, show, x - 1, y - 1);
		}
		if (x - 1 >= 1 && show[x - 1][y] == '*')
		{
			Expend(mine, show, x - 1, y);
		}
		if (x - 1 >= 1 && y + 1 <= 9 && show[x - 1][y + 1] == '*')
		{
			Expend(mine, show, x - 1, y + 1);
		}
		if (y - 1 >= 1 && show[x][y - 1] == '*')
		{
			Expend(mine, show, x, y - 1);
		}
		if (y + 1 <= 9 && show[x][y + 1] == '*')
		{
			Expend(mine, show, x, y + 1);
		}
		if (x + 1 <= 9 && y - 1 >= 1 && show[x + 1][y - 1] == '*')
		{
			Expend(mine, show, x + 1, y - 1);
		}
		if (x + 1 <= 9 && show[x + 1][y] == '*')
		{
			Expend(mine, show, x + 1, y);
		}
		if (x + 1 <= 9 && y + 1 <= 9 && show[x + 1][y + 1] == '*')
		{
			Expend(mine, show, x + 1, y + 1);
		}
	}
}

int Compute(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] != '*')
			{
				count++;
			}
		}
	}
	return count;
}

void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	//int win = 0;
	int sum = 0;
	while (sum<row*col-COUNT_EASY)//win<row*col-COUNT_EASY
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź���������ˣ���Ϸ������\n");
				break;
			}
			else//û�в���
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Expend(mine, show, x, y);//չ��
				sum = Compute(show, ROW, COL);//ͳ��ɨ�׸���
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (sum == row*col-COUNT_EASY)//row*col-COUNT_EASY
	{
		printf("��ϲ�㣬���е��׾���ɨ����\n");
	}
}