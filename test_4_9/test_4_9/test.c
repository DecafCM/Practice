#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

//学生类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1, s2; //s1,s2为全局变量，但并不建议这样定义
//
//int main()
//{
//	//s为局部变量
//	struct Stu s = {"张三", 20, "男"}; //
//	return 0;
//}

////匿名结构体类型
////创建了一个结构体类型s1
//struct 
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1; 
//
////创建了一个结构体指针ps
//struct
//{
//	char name[20];
//	short age;
//	char sex[5];
//}* ps;
////上面的两个结构在声明的时候省略掉了结构体标签
////虽然上述两种结构体成员一模一样，但编译器会认为这是两种不同的结构体类型
//
//int main()
//{
//	//局部变量
//	//struct  s = { "张三", 20, "男" }; //无法这样定义,因为没有结构体标签
//	
//	ps = &s1;//编译器会报警告 
//	return 0;
//}

////定义链表的一个结点
//struct Node
//{
//	int date; //数据域
//	//struct Node n; //这样嵌套是不行的，不然定义一个变量后，无法计算所占空间大小
//	struct Node* next; //指针域
//};
//
//int main()
//{
//	struct Node n; //请问n占了几个字节
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef struct Node
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2; //等价于上行代码
//
//	return 0;
//}

////声明一个结构体类型Point
//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//
//struct Point p2; //定义结构体变量p2
//
////定义一个结构体变量p3, 并初始化
//struct Point p3 = { 3, 5 };
//
//
////结构体嵌套
//struct Node
//{
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node n = { {5, 9},NULL };
//	printf("x = %d y = %d\n", n.p.x, n.p.y); //x = 5 y = 9
//	
//	return 0;
//}
//
//struct S
//{
//	char c; //占1字节
//	int i;  //占4字节
//};

//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n", sizeof(s)); //8
//	
//	printf("%d\n", offsetof(struct S, c));  //0
//	printf("%d\n", offsetof(struct S, i));  //4
//	//offsetof为计算偏移量的函数，参数为结构体名和参数名
//	//需要头文件<stddef.h>
//
//	return 0;
//}

//struct S
//{
//	char c; //占1字节
//	int i;  //占4字节
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));  //0
//	printf("%d\n", offsetof(struct S, i));  //4
//	//offsetof为计算偏移量的函数，参数为结构体名和参数名
//	//需要头文件<stddef.h>
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S)); //12
//	return 0;
//}

////练习1
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////练习4 - 结构体嵌套问题
////嵌套的结构体对齐到自己的最大对齐数的整数倍处 此时对齐到8的整数倍处即可
//struct S4
//{
//	char c1;        //从0开始 1-7浪费了
//	struct S3 s3;   //从8开始   占用了8 - 23
//	double d;       //从24开始 占用了24 - 31
//	//即从0到31，共占了32个字节
//	//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//	//即为8的整数倍 --> 32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); // 12
//	printf("%d\n", sizeof(struct S2)); // 8
//	printf("%d\n", sizeof(struct S3)); // 16
//	printf("%d\n", sizeof(struct S4)); // 32
//
//	return 0;
//}

////默认对齐数为8的时候
//struct S1
//{
//	char c1;//0
//	//1 - 7 被浪费
//	double d;//8 - 15
//	char c2;//16
//	//17 - 23 被浪费
//};
//
//#pragma pack(4)//设置默认对齐数为4,且对齐数一般设置为2^n这样的数字
//struct S2
//{
//	char c1;//0 
//	//1 - 3被浪费
//	double d;//4 - 11
//	
//	char c2;//12
//	//13 - 15被浪费
//	//结构体总大小为16个字节
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); //24
//	printf("%d\n", sizeof(struct S2)); //16
//	return 0;
//}

//struct S
//{
//	char arr[1024];
//	int i;
//};
//
////结构体传参
//void print1(struct S ss)
//{
//	printf("%s %d\n", ss.arr, ss.i);
//}
//
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%s %d\n", ps -> arr, ps -> i);
//}
//
//int main()
//{
//	struct S s = { "hello bit", 100 };
//	print1(s);    //传结构体
//	print2(&s);   //传地址
//
//	return 0;
//}

//struct A
//{
//	//变量的命名只能是由字母数字下划线组成，且数字不能在最前面
//	//冒号后的数字表示该变量占几个二进制位即几个bit
//	int _a : 2;
//	//由于是int类型，开辟了4个字节即32个bit位的空间，同时分配给_a两个bit位的空间
//
//	int _b : 5;
//	//剩下的30个bit中拿出5个分配给_b。还剩25个
//
//	int _c : 10;
//	//同理，还剩下15个
//	int _d : 30;
//	//此时需要30bit，不够分配了，所以再开辟一个int型的空间用于分配
//	//至于是先把15个用完，再用新开辟的空间；还是直接用新开辟的空间存储，取决于编译器
//
//};

//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3; 
	//还剩5bit
	char b : 4;
	//还剩1bit
	char c : 5;
	//情况1.如果不用剩下的1bit，直接新开辟一个字节，还剩3个bit(vs采用的方案)
	//情况2.先用剩下的1bit，再开辟空间，分配后还剩4个bit
	char d : 4;
	//情况1.重新开辟一个字节分配给d
	//情况2.用剩下的空间刚好分配完成
};

//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

////{}内部的是枚举类型所有可能的取值，也叫枚举常量
//enum Day//星期
//{
//	//以下均为枚举常量
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色(三原色)
//{
//	RED,   //此时可以赋初值 RED = 9，则GREEN自动变成10(需要赋别的初值也是可以的)，BLUE = 11
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED; //c的取值只能是RED,GREEN,BLUE 其中之一
//
//	printf("%d\n", RED);   //0
//	printf("%d\n", GREEN); //1
//	printf("%d\n", BLUE);  //2
//
//	//RED = 20; err，枚举常量不能被修改
//	return 0;
//}

////共用体：成员共用一块空间
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//联合体的定义和初始化
//	union Un u = { 0 };
//	
//	printf("%d\n", sizeof(u)); //4
//	
//	printf("%p\n", &u);   //00EFFEC8
//	printf("%p\n", &u.c); //00EFFEC8
//	printf("%p\n", &u.i); //00EFFEC8
//
//	return 0;
//}

//union Un1
//{
//	char c[5]; //虽然数组大小是5，但应该看每一个数组元素的对齐数
//	int i;
//	//最大对齐数为4
//};
//
//union Un2
//{
//	short c[7];
//	int i;
//	//最大对齐数为4
//};
//
//int main()
//{
//	//下面输出的结果是什么？
//	printf("%d\n", sizeof(union Un1)); //8
//	printf("%d\n", sizeof(union Un2)); //16
//
//	return 0;
//}

//// a = 0x11223344;
////低                    高
////小端:   44 33 22 11
////大端:   11 22 33 44
//
////方法一:
//int check_sys1()
//{
//	int a = 1; //01 00 00 00
//	int b = *(char*)&a;
//	
//	return b;
//}
//
////方法二:
//int check_sys2()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c; 
//	//u.c为i的第一个字节
//	//返回0，表示大端
//	//返回0，表示小端
//}
//
//
//int main()
//{
//	int ret = check_sys2();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}