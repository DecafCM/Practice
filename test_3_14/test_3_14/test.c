#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1()
{
	int a = 2; //010
	int b = 5; //101
	int c = a & b;   //按(2进制)位与:000
 	int d = a && b; //逻辑与:1
	printf("c = %d d = %d\n", c, d);//0 1

	int e = a | b;   //按(2进制)位或:111
	int f = a || b;  //逻辑或:1
	printf("e = %d f = %d\n", e, f);//7 1
}

void test2()
{
	//程序输出的结果是什么？
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;       //a=1 b=2 c=3 d=4
	//i = a++||++b||d++;         //a=1 b=3 c=3 d=4
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
}

void test3()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = a > b ? a : b;
	printf("max = %d", max);
}

void test4()
{
	//代码1
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	int d = 0;
	printf("c = %d", c); //13

	//代码2
	if (a = b + 1, c = a / 2, d > 10);
	//该表达式最终以d>10的真假做判断

	//代码3
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}                   //该代码较为冗余
//	
//	//如果使用逗号表达式，改写：
//		while (a = get_val(), count_val(a), a > 0)
//		{
//			//业务处理
//		}
//		//判断条件仍是a>0,但前面的代码依旧会进行，该代码看起来更为简洁
}


void test5()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	arr[4]; //下标引用操作符
	//系统会把arr[4] ==> *(arr + 4)
	
	printf("%d\n", *(arr + 4));
	printf("%d\n", arr[4]);
	printf("%d\n", 4[arr]);//数组名和索引值可以互换位置
	
}

int test()
{
	//数组的不完全初始化
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char b[6] = { 'a','b','c','d','e','f' };
	//计算数组的元素个数
	int sz = sizeof(b) / sizeof(b[0]);
	int i;
	//输出数组元素的地址
	for (i = 0; i < sz; ++i)
	{
		printf("%p\n", &b[i]);
	}

	printf("%p\n", &b[4]);
	//printf("%p\n", arr + 4);
	printf("%p\n", b + 4);
	return 0;
}

void test6()
{
	printf("hehe"); //函数调用操作符，即便没有传参也不能省略( )
}

void test7()
{
	struct Book
	{
		char name[20];
		int price;
	};
	struct Book b = {"C语言程序设计", 35};
	//结构体变量.成员变量
	printf("书名:%s 定价:%d\n", b.name, b.price);

	struct Book* pb = &b;
	//结构体指针->成员变量
	printf("书名:%s 定价:%d\n", pb->name, pb->price);

}


void test8()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	//a和b要发生整型提升
	//3的二进制:      00000000000000000000000000000011
	//把3存入a中，此时的a:00000011，由于最高位为0，正数
	//所以a整形提升为:00000000000000000000000000000011   -提升后的a

	//127的二进制:    00000000000000000000000001111111
	//存入b中后:      01111111
	//整形提升后:     00000000000000000000000001111111   -提升后的b
	//           +    00000000000000000000000000000011  
	//a+b             00000000000000000000000010000010
	//存入c中:10000010
	//打印%d的c - 又要发生整形提升
	//此时打印的c:    11111111111111111111111110000010   -提升后的c - 补码
	//                11111111111111111111111110000001              - 反码
	//                10000000000000000000000001111110              - 原码 -126

	printf("c = %d\n", c); //-126
}

void test9()
{
	char a = 0xb6;       //10110110         
	short b = 0xb600;    //1011011000000000
	int c = 0xb6000000;  //101101100000000000000000
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");     
	//c
}  

void test10()
{
	char c = 1;
	printf("%u\n", sizeof(c));   //1 
	printf("%u\n", sizeof(+c));  //4 +c是表达式,会发生整形提升(变成int 4字节)
	printf("%u\n", sizeof(-c));  //4 与+c同理
}

void test11()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);  //12
	printf("%d\n", i);    //4
}

int main()
{
	test11();
	return 0;
}
