#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("**********   1.play   **********\n");
	printf("**********   0.exit   **********\n");
	printf("********************************\n");
}

void game()
{
	char ret = 0; //用于接收CheckWin函数的返回值
	
	//设计三子棋游戏:数据存储用一个3*3的二维数组
    //定义时候别直接写[3][3],不方便改动
	char board[ROW][COL] = { 0 };
	
	//游戏开始时应让数组初始化为空格
	InitBoard(board, ROW, COL);//初始化棋盘 - 空格,函数声明在game.h,定义在game.c
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//分析发现：
	//在游戏过程中
	//1.玩家赢  CheckWin返回'*'
	//2.电脑赢  CheckWin返回'#'
	//3.平局    CheckWin返回'Q'
	//4.继续    CheckWin返回'C'
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		
		//电脑走
		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//打印棋盘
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else if (ret ==  'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);//赢了的界面也需要打印
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input); 
	return 0;
}