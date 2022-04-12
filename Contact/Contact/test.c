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
		printf("请选择 :>");
		scanf("%d", &input);

		switch (input)
		{
			case ADD:
				/*add_contact(date, &sz);
				//注:此处应该传入sz的地址, 即传址调用，不然无法对sz 的值进行修改*/
				//所以我们在头文件里创建一个包含date和sz的结构体Contact
				add_contact(&con);
				//不能直接传con 理由1.结构体传参传地址更好 2.我们需要对date和sz进行修改，传值调用做不到
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
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}