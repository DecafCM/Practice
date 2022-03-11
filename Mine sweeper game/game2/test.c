#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("***       1.play       ***\n");
	printf("***       0.exit       ***\n");
	printf("**************************\n");

}

void game()
{
	//9*9的扫雷游戏
	//创建2个11*11的数组,(为了让9*9的扫雷游戏,不存在越界的问题)
	//存放布置好的雷
	char mine[ROWS][COLS]; //初始化里面放'0',放置雷的位置变成'1'
	//存放排查出来的雷的信息
	char show[ROWS][COLS]; //初始化里面放'#'
	//数组初始化
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//打印棋盘 注意只需要打印 9*9的棋盘
	DisplayBoard(show, ROW, COL);
	
	//DisplayBoard(mine, ROW, COL);
	//布置好的雷的信息不应该轻易打印

	//1.布置雷
	SetMine(mine, ROW, COL);
	  //查看雷
	DisplayBoard(mine, ROW, COL);
	//2.扫雷
	FindMine(mine, show, ROW, COL);
}   
	





int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while(input);
		return 0;
}