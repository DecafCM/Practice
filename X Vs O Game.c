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
	char ret = 0; //���ڽ���CheckWin�����ķ���ֵ
	
	//�����������Ϸ:���ݴ洢��һ��3*3�Ķ�ά����
    //����ʱ���ֱ��д[3][3],������Ķ�
	char board[ROW][COL] = { 0 };
	
	//��Ϸ��ʼʱӦ�������ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);//��ʼ������ - �ո�,����������game.h,������game.c
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//�������֣�
	//����Ϸ������
	//1.���Ӯ  CheckWin����'*'
	//2.����Ӯ  CheckWin����'#'
	//3.ƽ��    CheckWin����'Q'
	//4.����    CheckWin����'C'
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		
		//������
		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��ӡ����
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret ==  'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);//Ӯ�˵Ľ���Ҳ��Ҫ��ӡ
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while(input); 
	return 0;
}