#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�,��������ҵ�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);  //��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");
}

//������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1.��������겼����
	//���ö��ٸ��� - 10
	int count = 10;
	while (count)
	{
		//���óɹ�һ���ף�count--
		//1.�����������(��9*9�ķ�Χ��)
		int x = rand() % row + 1;      //1-9
		int y = rand() % col + 1;      //1-9
		//������
		//�жϸ�λ���Ƿ��ù�����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//ͳ����Χ�м����� : ѡ���������ΧһȦ���ּ����������׵ĸ���(��Ϊ����Ϊ'0'������Ϊ'1')
//�ַ�'1'-'0' = 1
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1]
		+ mine[x][y - 1] + mine[x + 1][y - 1] 
		+ mine[x + 1][y] + mine[x + 1][y + 1]  
		+ mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}


//ɨ����Ϸ��ô������
//1.ը����
//2.�����Ų������в����׵�λ��

//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//�����ж� �Ų������в����׵�λ�õ����
	while (win < ROW * COL - 10)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж�x,y���괦�Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//���x,y����0����ͳ����Χ�м�����
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//�����ֱ��ַ�,����show����
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�!\n");
		}
	}
	if (win == ROW * COL - 10)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}