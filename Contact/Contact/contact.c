#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <stdio.h>

//����ͨѶ¼��Ա
void add_contact(Contact* pc)
{

	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("������绰:>"); 
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("������QQ:>"); 
		scanf("%s", pc->data[pc->sz].qq);
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("����������:>");
		scanf("%hd", &(pc->data[pc->sz].age));//age��Ϊһ����������Ҫ&��������

		pc->sz++;
		printf("���ӳɹ�\n");
	}
}


void show_contact(Contact* pc)
{
	int i = 0;
	printf("%20s %12s %30s %5s %12s %5s\n","����","�绰","��ַ","����","QQ", "�Ա�");
	for (i = 0; i < pc->sz; i++) 
	{
		printf("%20s %12s %30s %5d %12s %5s\n", pc->data[i].name, pc->data[i].tele, pc->data[i].addr, pc->data[i].age, pc->data[i].qq, pc->data[i].sex);
	}
}

static int find_peo_by_name(Contact* pc, char name[])  //��static���Σ��ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ��ܿ���
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i; //�ҵ��󣬷����±�
		}
	}
	return -1;
	//���ѭ����������û�ҵ���˵������ʧ�ܣ�����-1
}

void del_contact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("��Ǹ��ͨѶ¼Ϊ��");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);
		//1.�ҵ�ָ������ϵ�˵�λ��
		int pos = find_peo_by_name(pc, name);//�ҵ��˷����±꣬û�ҵ�����-1
		if (pos == -1)
		{
			printf("���ź���ɾ�����˲�����\n");
		}
		//2.ɾ��
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz - 1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}

void search_contact(Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%20s %12s %30s %5s %12s %5s\n", "����", "�绰", "��ַ", "����", "QQ", "�Ա�");
		printf("%20s %12s %30s %5d %12s %5s\n", pc->data[pos].name, pc->data[pos].tele, pc->data[pos].addr, pc->data[pos].age, pc->data[pos].qq, pc->data[pos].sex);
	}
}

void modify_contact(Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��ߵ�����:>");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("�������µ�����:>");
		scanf("%s", pc->data[pos].name);
		printf("�������µĵ绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������µĵ�ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�������µ�QQ:>");
		scanf("%s", pc->data[pos].qq);
		printf("�������µ��Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("�������µ�����:>");
		scanf("%hd", &(pc->data[pos].age));//age��Ϊһ����������Ҫ&��������
		
		printf("���ӳɹ�\n");
	}
}

void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 1;//1��ʾ�����Ѿ�����
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;//ֻҪ�����˽�������flag��Ϊ0
			}
		}
		if (1 == flag)//һ����û�з����κ�Ԫ�صĽ��������Ѿ�����, ����Ҫ��ѭ����
		{
			break;
		}
	}
}