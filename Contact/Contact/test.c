#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******   1.add     2.del    ******\n");
	printf("******   3.search  4.modify ******\n");
	printf("******   5.sort    6.show   ******\n");
	printf("******         0.exit       ******\n");
	printf("**********************************\n");

}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};

void test()
{
	Contact con = { 0 };

	int input = 0;
	do
	{
		menu();
		printf("��ѡ�� :>");
		scanf("%d", &input);

		switch (input)
		{
			case ADD:
				/*add_contact(date, &sz);
				//ע:�˴�Ӧ�ô���sz�ĵ�ַ, ����ַ���ã���Ȼ�޷���sz ��ֵ�����޸�*/
				//����������ͷ�ļ��ﴴ��һ������date��sz�Ľṹ��Contact
				add_contact(&con);
				//����ֱ�Ӵ�con ����1.�ṹ�崫�δ���ַ���� 2.������Ҫ��date��sz�����޸ģ���ֵ����������
				break;
			case DEL:
				del_contact(&con);
				break;
			case SORT:
				sort_contact(&con);
				break;
			case SHOW:
				show_contact(&con);
				break;
			case SEARCH:
				search_contact(&con);
				break;
			case MODIFY:
				modify_contact(&con);
				break;
			case EXIT:
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}