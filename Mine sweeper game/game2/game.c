#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化数组
void InitBorad(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号,便于玩家找到
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);  //打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");
}

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1.随机找坐标布置雷
	//布置多少个雷 - 10
	int count = 10;
	while (count)
	{
		//布置成功一个雷，count--
		//1.生成随机坐标(在9*9的范围内)
		int x = rand() % row + 1;      //1-9
		int y = rand() % col + 1;      //1-9
		//布置雷
		//判断该位置是否布置过雷了
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//统计周围有几个雷 : 选定坐标的周围一圈数字加起来就是雷的个数(因为无雷为'0'，有雷为'1')
//字符'1'-'0' = 1
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1]
		+ mine[x][y - 1] + mine[x + 1][y - 1] 
		+ mine[x + 1][y] + mine[x + 1][y + 1]  
		+ mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}


//扫雷游戏怎么结束？
//1.炸死了
//2.正常排查了所有不是雷的位置

//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//用于判断 排查了所有不是雷的位置的情况
	while (win < ROW * COL - 10)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断x,y坐标处是否是雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//如果x,y不是0，就统计周围有几个雷
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//把数字变字符,传入show数组
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法!\n");
		}
	}
	if (win == ROW * COL - 10)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}