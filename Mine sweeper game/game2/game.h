#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9 

#define ROWS ROW+2
#define COLS COL+2

//初始化数组
void InitBorad(char board[ROWS][COLS], int rows, int cols,char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);//数组还是11*11的只不过是只访问中间的9*9而已
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);