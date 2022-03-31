#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'a';
//    printf("%c\n", *pc); // 'a'
//
//    char* p = "abcdef";
//    //本质是把首字符'a'的地址(起始地址)存到了p里，而非把整个字符串存进去
//    //"abcdef" - 常量字符串(不能改)
//    //*p = 'w'; //会报错
//    printf("%s\n", p);//"abcdef"
//    //%s,则会从首字符开始打印，直到遇到'\0'结束
//
//    //如果想对"abcdef"进行修改，怎么办？
//    //放到一个数组里，通过修改数组达到修改字符串的目的
//    char arr[10] = "abcdef"; 
//    char* p2 = arr;
//    *p2 = 'w';
//    printf("%s\n", p2);//"wbcdef"
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "abcdef";
//    const char* p1 = "abcdef";
//    const char* p2 = "abcdef";
//    if (arr1 == arr2)
//        printf("arr1 == arr2\n");
//    else
//        printf("arr1 != arr2\n");
//
//    if (p1 == p2)
//        printf("p1 == p2\n");
//    else
//        printf("p1 != p2\n");
//
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	
//	int* arr[3] = { &a, &b, &c };//指针数组 : 储存指针
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));//10 20 30
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);//arr[i]获得的是数组名，arr[i][j]表示选定数组的元素
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//
//	char* arr[] = { p1, p2, p3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//数组指针 - 指针

//整型指针 - 指向整型的指针
//字符指针 - 指向字符的指针
//数组指针 = 数组的地址

//int main()
//{
//	//整型指针 - 指向整型的指针
//	int a = 10;
//	int* p = &a;
//	//字符指针 - 指向字符的指针
//	char ch = 'w';
//	char* pc = &ch;
//	
//	//字符数组
//	char arr2[5]; 
//	char(*pb)[5] = &arr2;
//	
//	//指针数组
//	char* ch[5]; 
//	char* (*pd)[5] = &ch; //注意
//
//	//数组指针 = 数组的地址
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* pa)[10] = &arr1;
//	//&数组名拿到的是数组的地址
//	//pa就是数组指针，该指针指向了一个数组，数组10个元素，每个元素的类型都是int
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr;      //首元素的地址
//	//&arr;     //取出整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//三个输出结果是一样的
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
//	//把arr(首元素地址)赋给一个指针变量:
//	
//	int* p1 = arr;
//	//把整个数组的地址赋给一个变量:
//	//p1 + 1;//跳过一个数组元素(4字节)
//	
//	printf("p1 = %p\n", p1);          //00B3FA30
//	printf("p1 + 1 = %p\n", p1 + 1);  //00B3FA34 两者相差4个字节(一个数组元素)
//
//	int(*p2)[10] = &arr;//此时&arr的类型是 int(*)[10]
//	//如果用 int *p3 = &arr;会出现警告:int *和 int (*)[10]的间接级别不同
//	//p2 + 1;//跳过一个数组
//	
//	printf("p2 = %p\n", p2);         //00B3FA30
//	printf("p2 + 1 = %p\n", p2 + 1); //00B3FA58 两者相差40个字节 (一个数组)
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //把数组arr的地址赋值给数组指针变量p
//	//但是我们一般很少这样写代码,表示数组内元素还不如直接把首元素地址赋值给p
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//}

////打印一位数组
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);   //1 - 编译器自己也会把arr[i]翻译成 2
//		printf("%d ", *(arr + i)); //2 - 和1完全等价
//	}
//}
//
////打印二维数组
//void print1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//void print3(int(*p)[3][5], int row, int col)
//{
//	//代码与print1一致
//}
//
////以一维数组的使用作对比，便于理解
//int main()
//{
//	//一维数组
//	int arr2[] = { 1,2,3,4,5,6 };
//	print(arr2, 6);
//	
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);//arr首元素的地址
//	//写一个函数 打印arr数组的内容
//	//向函数传入数组(首元素地址)，行，列
//	//注:此时的首元素的地址是指什么？是1的地址，还是第一行的地址？
//	//在评论二维数组的时候,先想象二维数组是一维数组
//	//对于arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} }，看作一维数组时，相当于只有3个元素
//	//这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	
//	print3(&arr, 3, 5);//&arr取出的整个二维数组的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[5];           //arr是数组，数组有5个元素，每个元素的类型是int
//	int* parr1[10];       //parr1是一个指针数组,数组有10个元素，每个元素的类型是int*
//	int(*parr2)[10];      //parr2是一个数组指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int
//	int(*parr3[10])[5];
//	//parr3先和[]结合，是一个数组,数组名parr3和[10]结合，说明parr3中有10个元素
//	//对于int a[10];而言，拿掉数组名和[]，剩下的则是数组中每个元素的类型
//	//说明parr3[10]的类型是int(*)[5],即数组指针类型
//	//结论:parr3是一个有10个元素的数组,其中每个元素是指向了一个大小为5的数组指针，类型为int(*)[5]
//
//	return 0;
//}
	
////下面哪些传参是正确的？
//void test(int arr[])     //ok
//{}
//void test(int arr[10])   //ok
//{}
//void test(int* arr)      //ok
//{}
//void test2(int* arr[20]) //ok
//{}
//void test2(int** arr)    //ok 重点理解 : int* 的地址 用二级指针int **接收
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 }; //指针数组,每个元素的类型都是int * => 首元素也是int *类型
//	test(arr);
//	test2(arr2);//传入的首元素地址,即int *的地址
//
//	return 0;
//}

//void test(int arr[3][5]) //ok
//{}
//void test(int arr[][])  //err
//{}
//void test(int arr[][5]) //ok
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)    //err，不能用int* 接收二维数组一行的地址
//{}
//void test(int* arr[5]) //err, int* arr[5]是一个指针数组，每个元素类型是int *
//{}
//void test(int(*arr)[5])//ok 把第一行的地址存进去了
//{}
//
//void test(int** arr)  //完全错误，二级指针用于存放一级指针变量的地址
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//第一行的地址 - 一维数组的地址
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;   //p中存储的arr首元素地址，用int *p接收
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)  //整形的指针 : 需要传入一个整型的地址
//{}
//void test2(char* p) //同理，需要传入一个字符的地址
//{}
//
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10];
//
//	test1(&a);   //ok
//	test1(ptr);  //ok
//	test1(arr);  //ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	char arr2[5];
//	
//	test2(&ch);  //ok
//	test2(pc);   //ok
//	test2(arr2); //ok
//
//	return 0;
//}

//void test(char** p)
//{}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	
//	test(arr);
//	
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
////与数组指针作对比，理解函数指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //p为数组指针，取出数组的地址:(*p)表示p是一个指针,(*p)[10]表示p指向一个数组，该数组有10个元素，每个元素类型位int
//
//	//函数指针:
//	//是一个指向函数的指针 - 存放函数的地址
//	//那么如何拿到函数的地址？
//	printf("%p\n", &Add); //00E013CA
//	printf("%p\n", Add);  //00E013CA
//	//可见: 函数名是函数的地址, &函数名 还是函数的地址
//
//	int (*pf)(int, int) = &Add;
//	//pf为函数指针
//	//(*pf)表示pf是一个指针，三个int分别对应 : 返回类型，参数类型，参数类型
//
//	return 0;
//}

//assert(str != NULL);
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[7] = "abcdef";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	const char str[7] = "abcdef";
//	int ret1 = my_strlen(str);
//	printf("%d\n", ret1); //6
//
//	//该如何定义ps？
//	int (* ps)(const char*); 
//	ps = my_strlen; //把函数名,即函数的地址放到ps中，ps = my_strlen
//	 
//	//如何使用函数指针？
//	int   ret2 = (*ps)(str);
//	//对比ret1 = my_strlen(str);
//	int   ret3 = ps(str);
//
//	printf("%d\n", ret2); //6
//	printf("%d\n", ret3); //6
//	return 0;
//}

//模拟实现strcoy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest; // 为了记录dest的起始地址
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	
//	//函数指针
//	char (*pf)(char*, const char*) = &my_strcpy; //&可省略
//	(*pf)(arr1, arr2);//(*pf)可改为pf
//	printf("%s\n", arr1);
//
//	return 0;
//}

//          (*(void (*)())0)()
//其中 void (*)()    是函数指针类型，括起来放于0的前方表示把0强制类型转换为函数指针类型,即地址类型
//*(void (*)())0,    在前用*则是对该地址进行解引用操作，即调用该函数
//(*(void (*)())0)() 最后的()说明该函数无传参

////示例
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p \n", test); //00E61253该地址即为函数的地址,函数的代码保存在以该地址为起始地址的空间里去了
//	(*test)(); //调用test函数,加不加*都行
//	(*( void (*)() )(*test)) (); //把test从00E61253的int类型强制类型转换成void (*)()类型,再用*解引用调用该函数，最后的括号说明无传参
//	return 0;
//}

//void (*signal(int , void(*)(int)))(int);
//没有函数体，首先判断是函数声明。(另外,函数声明不需要写参数名)
//由于()优先级高于*，signal会先与()结合,该括号内部是参数类型: 整型:int、函数指针类型:void(*)(int)
//剩下的函数指针类型void (*)(int) 为该函数的返回类型
//总结:函数名为signal，函数参数为:整型:int、函数指针类型:void(*)(int),该指针指向的函数参数类型是int，返回类型为void，
//该函数的返回类型也是一个函数指针，该指针指向的函数参数类型是int，返回类型为void
//简单来说 : 该函数调用时传入一个整形和一个函数地址，返回一个函数地址

//简化版:
typedef void(* pf_t )(int); //把void(*)(int)类型重命名为 pf_t
pf_t signal(int, pf_t); //简化版本

//对typedef的补充:
typedef int* pi_t;   //把int *重命名为pi_t
#define PINT_T int* 

int main()
{
	int*   p1, p2;//p1是指针，p2是整型
	pi_t   p3, p4;//p3,p4都是指针
	PINT_T p5, p6;//p5是指针，p6是整型
	//相当于 int* p5，p6;
}