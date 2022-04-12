#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <stdio.h>

//添加通讯录成员
void add_contact(Contact* pc)
{

	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入电话:>"); 
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("请输入QQ:>"); 
		scanf("%s", pc->data[pc->sz].qq);
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入年龄:>");
		scanf("%hd", &(pc->data[pc->sz].age));//age作为一个变量，需要&才能输入

		pc->sz++;
		printf("添加成功\n");
	}
}


void show_contact(Contact* pc)
{
	int i = 0;
	printf("%20s %12s %30s %5s %12s %5s\n","名字","电话","地址","年龄","QQ", "性别");
	for (i = 0; i < pc->sz; i++) 
	{
		printf("%20s %12s %30s %5d %12s %5s\n", pc->data[i].name, pc->data[i].tele, pc->data[i].addr, pc->data[i].age, pc->data[i].qq, pc->data[i].sex);
	}
}

static int find_peo_by_name(Contact* pc, char name[])  //用static修饰，该函数只能在自己所在的源文件内部能看到
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i; //找到后，返回下标
		}
	}
	return -1;
	//如果循环结束都还没找到则说明查找失败，返回-1
}

void del_contact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("抱歉，通讯录为空");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除人的名字:>");
		scanf("%s", name);
		//1.找到指定的联系人的位置
		int pos = find_peo_by_name(pc, name);//找到了返回下标，没找到返回-1
		if (pos == -1)
		{
			printf("很遗憾，删除的人不存在\n");
		}
		//2.删除
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz - 1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}

void search_contact(Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%20s %12s %30s %5s %12s %5s\n", "名字", "电话", "地址", "年龄", "QQ", "性别");
		printf("%20s %12s %30s %5d %12s %5s\n", pc->data[pos].name, pc->data[pos].tele, pc->data[pos].addr, pc->data[pos].age, pc->data[pos].qq, pc->data[pos].sex);
	}
}

void modify_contact(Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改者的名字:>");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入新的名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入新的电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入新的地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("请输入新的QQ:>");
		scanf("%s", pc->data[pos].qq);
		printf("请输入新的性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入新的年龄:>");
		scanf("%hd", &(pc->data[pos].age));//age作为一个变量，需要&才能输入
		
		printf("添加成功\n");
	}
}

void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 1;//1表示假设已经有序
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;//只要发生了交换，把flag置为0
			}
		}
		if (1 == flag)//一趟中没有发生任何元素的交换，则已经有序, 不需要再循环了
		{
			break;
		}
	}
}
