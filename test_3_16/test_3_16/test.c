#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test1()
{
	int a = 10; //向内存申请四个字节的空间,存放10
	printf("%p\n", &a); //取地址 00AFFC8C
	int* pa = &a; //地址也是一个值，可以存储到pa变量中 - pa就是指针变量 
	              //此时的*是告诉读者pa是一个指针变量
				  //此时的int表示a的类型是int类型
	*pa= 20; //解引用操作符
	printf("a = %d\n", a);
	
	char ch = 'w'; //向内存申请一个字节的空间,存放'w'
	char* pc = &ch;
	*pc = 'a';
	printf("ch = %c\n", ch); //ch = a
}

//void test2()
//{
//	//指针类型的意义：
//	//1.指针类型解引用操作时，能一次性访问几个字节
//	//2.指针进行+ -整数的时候，指针的类型决定了指针向前或者向后走一步有多大（距离）。
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	*pa = 0;//访问4个字节
//	*pc = 0;//访问1个字节
//
//	//当使用int*pa定义时，*pa = 0让a的4个字节全部改成了0
//	// 而用char*pa定义时，*pa = 0只让a的1个字节变成了0
//
//	printf("%p\n", pa);    //010FFB60
//	printf("%p\n", pa + 1);//010FFB64 向后走了4个字节
//
//	printf("%p\n", pc);    //010FFB60
//	printf("%p\n", pc + 1);//010FFB61 向后走了1个字节
//}

//void test3()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	char* pb = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));//1 2 3 4 5 6 7 8 9 10
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pb + i));//1 0 0 0 2 0 0 0 3 0
//	}
//	//因为1 2 3在内存中为 01 00 00 00 02 00 00 00 03 00 00 00
//	//用char定义指针变量，pb每次+1，只向前走了一个字节
//
//	char arr1[] = "abcdef";
//	char* pc = arr1;
//	int* pd = arr1;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", *(pc + i));// a b c d e f
//	}
//}

void test4()
{
	/*int* p; */
	//p就是野指针
	//p是指针变量，也是局部变量。局部变量不主动初始化，默认是随机值
	//*p = 20;//内存中随机找了一个位置 放入20
}
void test5()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++) //循环11次时，越界访问了
	{
		*p = 0;
		p++;
	}
}

//int* test6()
//{
//	int a = 10;
//	return &a;
//}

void test7()
{
	int a = 10;
	int* p = &a;//初始化

	p = NULL;   //置空
}


void test8()
{
	char arr[] = { 'a', 'b', 'c', 'd' };
	char* p = arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%c\n", *p++);//++优先级高于*
	}
	/*int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%c\n", *(p+i)); // a b c d
	}*/
}

void test9()
{
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]); //9
	printf("%d\n", &arr[9] - &ch[0] ); //err
	//指针 - 指针 得到的是指针和指针之间的元素个数
	//前提条件：两个指针指同一块空间
}

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
	
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/
}

void test10()
{
	char arr[] = "abcdef";
	//int len = strlen(arr);
	int len = my_strlen(arr);
	
	printf("%d\n", len);

}

void test11()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void test12()
{
	#define N_VALUES 5
	float values[N_VALUES];
	float* vp;

	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
    /*for(vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
	{
		*vp = 0;
	}*/
}

void test13()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;//p存放的是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
}

void test15()
{
	int a = 10;

	int* pa = &a;

	int** ppa = &pa;//此时的ppa为二级指针
}

void test16()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr3[5] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *arr3[i]);//arr3存放a，b，c的地址，解引用即可访问
	}
}


int main()
{
	test16();
	return 0;
}