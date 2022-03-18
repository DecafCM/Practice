#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h >

//声明了一个结构体类型 - 书
/*struct Book
{
	char name[20];//书名
	short price;  //定价
}b4,b5,b6;*/   //b4,b5,b6都是结构体变量 - 全局变量(尽量少使用全局变量)

//typedef struct Book
//{
//	char name[20];//书名
//	short price;  //定价
//}Book;  //这里的Book是一种类型，而不是变量
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
//	int a; //标量
//	char arr[20];//数组
//	int* p;//指针
//	struct B sb;//结构体
//};
//
//
//int main()
//{
//	int a = 0;//初始化
//
//	struct B b = { 20 , 'w' };
//	struct S s = { 100, "hehe", NULL, {33 , 'Q'} };
//
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.c);
//}

/*int main()
{
	//利用结构体类型创建结构体变量 - 局部变量
	struct Book b1; //创建了一本书
	struct Book b2;
	struct Book b3;
	Book b4;
	Book b5;

	//字符串拷贝
	//把"c语言"拷贝到name数组中。因为不能直接用b.name  = "c语言"来写
	strcpy(b1.name, "c语言");
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
//	printf("%s %d\n", (*ps).name, (*ps).age);//正确，但麻烦
//	printf("%s %d\n", ps->name, ps->age);//结构体指针->成员
//}
//
//int main()
//{
//	struct Stu s = { "张三", 20 };
//	
//	print1(s);  //传值调用 stu是s的一份临时拷贝
//	print2(&s); //传址调用
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
