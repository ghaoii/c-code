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
		//���������Ƿ����ظ�
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
	//�����������Χ����,��չ��������ʾ��Χ�׵�����
	int count = count_mine(mine, i, j);
	if (count != 0)
	{
		show[i][j] = '0' + count;
	}
	else
	{
		//�����Χû���ף���ô��չ�������ж�������Χ�����ܷ�չ�������귶Χ��1-ROW/COL
		show[i][j] = ' ';
		if (i - 1 >= 1 && j - 1 >= 1 && show[i - 1][j - 1] == '*')//��֤��Ҫչ��������û��ɨ����
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
		printf("����������:>");
		scanf("%d%d", &i, &j);
		//�ж�����ĺϷ���
		if (i >= 1 && i <= row && j >= 1 && j <= col && show[i][j] == '*')
		{
			if (mine[i][j] == '1')
			{
				printf("���ź���������ˣ�\n");
				break;
			}
			else
			{
				//չ��
				Expend(mine, show, i, j);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("�������겻�Ϸ������������룡\n");
		}
		//ÿ����һ���ж���Ϸ��Ӯ
		if (IsWin(show, ROW, COL) == ROW*COL-EASY)
		{
			printf("��ϲ�㣬���׳ɹ���\n");
			break;
		}
	}
}