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
	//9*9��ɨ����Ϸ
	//����2��11*11������,(Ϊ����9*9��ɨ����Ϸ,������Խ�������)
	//��Ų��úõ���
	char mine[ROWS][COLS]; //��ʼ�������'0',�����׵�λ�ñ��'1'
	//����Ų�������׵���Ϣ
	char show[ROWS][COLS]; //��ʼ�������'#'
	//�����ʼ��
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//��ӡ���� ע��ֻ��Ҫ��ӡ 9*9������
	DisplayBoard(show, ROW, COL);
	
	//DisplayBoard(mine, ROW, COL);
	//���úõ��׵���Ϣ��Ӧ�����״�ӡ

	//1.������
	SetMine(mine, ROW, COL);
	  //�鿴��
	DisplayBoard(mine, ROW, COL);
	//2.ɨ��
	FindMine(mine, show, ROW, COL);
}   
	





int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while(input);
		return 0;
}