#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY 10

void InitBoard(char mine[ROWS][COLS], int row, int col, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);