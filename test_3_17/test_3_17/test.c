#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h >

//������һ���ṹ������ - ��
/*struct Book
{
	char name[20];//����
	short price;  //����
}b4,b5,b6;*/   //b4,b5,b6���ǽṹ����� - ȫ�ֱ���(������ʹ��ȫ�ֱ���)

//typedef struct Book
//{
//	char name[20];//����
//	short price;  //����
//}Book;  //�����Book��һ�����ͣ������Ǳ���
//
//
//struct B
//{
//	int a;
//	char c;
//};
//
//struct S
//{
//	int a; //����
//	char arr[20];//����
//	int* p;//ָ��
//	struct B sb;//�ṹ��
//};
//
//
//int main()
//{
//	int a = 0;//��ʼ��
//
//	struct B b = { 20 , 'w' };
//	struct S s = { 100, "hehe", NULL, {33 , 'Q'} };
//
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.c);
//}

/*int main()
{
	//���ýṹ�����ʹ����ṹ����� - �ֲ�����
	struct Book b1; //������һ����
	struct Book b2;
	struct Book b3;
	Book b4;
	Book b5;

	//�ַ�������
	//��"c����"������name�����С���Ϊ����ֱ����b.name  = "c����"��д
	strcpy(b1.name, "c����");
	b1.price = 55;

	printf("%s\n", b1.name);
	printf("%d\n", b1.price);

	return 0;
}*/

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print1(struct Stu stu)
//{
//	printf("%s %d\n", stu.name, stu.age);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%s %d\n", (*ps).name, (*ps).age);//��ȷ�����鷳
//	printf("%s %d\n", ps->name, ps->age);//�ṹ��ָ��->��Ա
//}
//
//int main()
//{
//	struct Stu s = { "����", 20 };
//	
//	print1(s);  //��ֵ���� stu��s��һ����ʱ����
//	print2(&s); //��ַ����
//	return 0;
//}

int Add(int c, int d)
{
	int z = 0;
	z = c + d;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);

	return 0;
}
