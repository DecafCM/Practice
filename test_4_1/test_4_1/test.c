#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <search.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int* arr[4];//整型指针数组
//	
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//函数指针数组
//	//存放的是函数指针
//
//	//能否把Add和Sub的地址放到同一个数组中？ 可以，这样的数组就是函数指针数组
//	int (*pf[4])(int, int) = {Add, Sub};
//	//pf先与[4]结合，说明是个数组，去掉p[4]不看，可见该数组类型是int (*)(int, int)的函数指针类型
//	//此时的pf就是函数指针数组
//
//	return 0;
//}

//实现一个能实现加减乘除的计算器，且能多次计算
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//没有考虑除数为0的情况
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******1. add    2.sub*******\n");
//	printf("*******3. mul    4.div*******\n");
//	printf("*******    0. exit    *******\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				ret = Add(x, y);
//				printf("结果是 : %d\n", ret);
//				break;
//			case 2:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				ret = Sub(x, y);
//				printf("结果是 : %d\n", ret);
//				break;
//			case 3:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				ret = Mul(x, y);
//				printf("结果是 : %d\n", ret);
//				break;
//			case 4:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				ret = Div(x, y);
//				printf("结果是 : %d\n", ret);
//				break;
//			case 0:
//				printf("退出计算器\n");
//				break;
//			default:
//				printf("选择错误,请重新选择\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//没有考虑除数为0的情况
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******1. add    2.sub*******\n");
//	printf("*******3. mul    4.div*******\n");
//	printf("*******    0. exit    *******\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};//加0是为了让元素下标和元素对应起来
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//
//			ret = pfArr[input](x, y);
//			printf("结果是 : %d\n", ret);
//		}
//		else
//		{
//			printf("选则错误\n");
//		}
//	} while(input);
//	return 0;
//}

//int main()
//{
//	//引子 : 对于指针数组
//	int* arr[10];
//	int* pa = &arr; //取出指针数组的地址
//
//	int(*pf)(int, int);        //函数指针
//	int(*pfArr[5])(int, int);  //函数指针数组 - 存放函数指针的数组
//	
//	
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//	//&pfArr取出的函数指针数组的地址,ppFArr为指向函数指针数组的指针
//	//ppfArr先与*结合，说明是一个指针，再与[5]结合说明该指针指向一个有5个元素的数组
//	//此时去掉(*ppfArr)[5]，还剩下int(*)(int, int)，该类型即为该数组的元素类型
//
//	return 0;
//}




//实现一个能实现加减乘除的计算器，且能多次计算
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//没有考虑除数为0的情况
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("结果是 : %d\n", ret);
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******1. add    2.sub*******\n");
//	printf("*******3. mul    4.div*******\n");
//	printf("*******    0. exit    *******\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//}

//struct s
//{
//	char name[20];
//	int age;
//};
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}


//int main()
//{
//	//需要把数组排序成升序
//	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	bubble_sort(arr1, sz);
//	
//	float arr2[] = { 2.0, 1.0, 3.0, 0 };
//	int sz2 = sizeof(arr2) / sizeof(arr1[0]);
//	bubble_sort(arr2, sz2);
//	//对于arr2不能直接传给bubble_sort函数，因为参数类型不同，且sz也需要重新结算
//	//即, 此时写的bubble_sort并不支持多种类型, 该函数并不通用
//
//	return 0;
//}

//void qsort(void* base, 
//		   size_t num, 
//		   size_t width, 
//		   int (*compare)(const void* elem1, const void* elem2)); //elem1 和 elem2是两个待比较元素的地址
////qsort需要头文件<stdlib.h>和<search.h>
////四个参数分别为 : 目标数组起始位置, 该数组元素个数, 数组中一个元素占几个字节, 比较的方法

//int cmp_int(const void* e1, const void* e2) //void* 无类型指针，不能直接解引用操作的，需要强制类型转换
//{
//	return *(int*)e1 - *(int*)e2; //若e1 > e2,返回一个大于0的数字, 若e1 < e2, 返回一个小于0的数字, 若相等返回0
//}

//print_arr(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	printf("\n");
//}

//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, 4, cmp_int);
//
//	print_arr(arr, sz); // 0 1 2 3 4 5 6 7 8 9
//}

//struct S
//{
//	char name[20];
//	int age;
//};

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}

//qsort 排序结构体数组
//void test2()
//{
//	struct S arr[] = { {"zhangsan", 20},{"lisi", 80},{"wangwu", 5} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}

//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//	//大于返回正数，相等返回0，小于返回负数
//}   

//void test3()
//{
//	struct S arr[] = { {"zhangsan", 20},{"lisi", 80},{"wangwu", 5} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}

//int main()
//{
//	test3();
//	return 0;
//}

////void* 的指针是无具体类型的指针
////其优点在于可以接受任意数据类型的地址
////但void*的指针不能直接+ -整数的操作
////且void*的指针不能直接解引用的操作
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a; //char* 和 int*不属于同一类型，会报警告
//
//	void* pv = &a;
//
//	return 0; 
//}

//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)(base) + (j+1) * width) > 0) 
//			//用char*强制类型转换的原因是,char类型指针，加1跳过的字节数也是1,加4则跳过4个字节
//			//如果比较的是int类型，用char*强制类型转换后，每加一次宽度width，则相当于跳过了一个int型元素
//			{
//				//交换，由于不知道待排序元素类型，故无法创建临时变量辅助交换,此时如何实现交换？
//				//交换待排序元素的每一个字节,每个元素共有width个字节
//				int k = 0;
//				for (k = 0; k < width; k++)
//				{
//					char tmp = *((char*)base + j * width + k);
//					*((char*)base + j * width + k ) = *((char*)(base)+(j + 1) * width + k);
//					*((char*)(base)+(j + 1) * width + k) = tmp;
//				}
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void* e1, const void* e2) //void* 无类型指针，不能直接解引用操作的，需要强制类型转换
//{
//	return *(int*)e1 - *(int*)e2; //若e1 > e2,返回一个大于0的数字, 若e1 < e2, 返回一个小于0的数字, 若相等返回0
//}
//
//print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//}
//
//void _Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)(base)+(j + 1) * width) > 0)
//				//用char*强制类型转换的原因是,char类型指针，加1跳过的字节数也是1,加4则跳过4个字节
//				//如果比较的是int类型，用char*强制类型转换后，每加一次宽度width，则相当于跳过了一个int型元素
//			{
//				//交换
//				_Swap((char*)base + j * width, (char*)(base)+(j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, 4, cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	print_arr(arr, sz); // 0 1 2 3 4 5 6 7 8 9
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//
//void test2()
//{
//	struct S arr[] = { {"zhangsan", 20},{"lisi", 80},{"wangwu", 5} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//	//大于返回正数，相等返回0，小于返回负数
//}   
//
//void test3()
//{
//	struct S arr[] = { {"zhangsan", 20},{"lisi", 80},{"wangwu", 5} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//
//int main()
//{
//	
//	test1();
//	test2();
//	test3();
//
//	return 0;
//}

//指针和数组笔试题解析

//数组名表示数组首元素的地址
//但是有2个例外
//1. sizeof(数组名), 数组名表示整个数组，计算的是数组的总大小，单位是字节
//2. &数组名, 数组名表示整个数组, &数组名 取出的是整个数组的地址
//除此之外, 其他所有遇到的数组名都表示数组首元素的地址
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));          //16 整个数组大小
//	printf("%d\n", sizeof(a + 0));      //4  首元素地址
//	printf("%d\n", sizeof(*a));         //4  首元素
//	printf("%d\n", sizeof(a + 1));      //4  2的地址
//	printf("%d\n", sizeof(a[1]));       //4  2
//	printf("%d\n", sizeof(&a));         //4  数组的地址，但还是4个字节
//	printf("%d\n", sizeof(*&a));        //16 取地址和解引用抵消了,相当于sizeof(a)
//	printf("%d\n", sizeof(&a + 1));     //4  跳过一个数组后的地址
//	printf("%d\n", sizeof(&a[0]));      //4  首元素地址
//	printf("%d\n", sizeof(&a[0] + 1));  //4  2的地址
//	
//	return 0;
//}
//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));          //6  
//	printf("%d\n", sizeof(arr + 0));      //4  a的地址
//	printf("%d\n", sizeof(*arr));         //1  a
//	printf("%d\n", sizeof(arr[1]));       //1  b
//	printf("%d\n", sizeof(&arr));         //4  数组的地址
//	printf("%d\n", sizeof(&arr + 1));     //4  跳过一个数组后的元素的地址
//	printf("%d\n", sizeof(&arr[0] + 1));  //4  b的地址
//	
//	printf("%d\n", strlen(arr));          //随机值  定义时没写'\0'
//	printf("%d\n", strlen(arr + 0));      //随机值
//	printf("%d\n", strlen(*arr));         //err     会从a的ASCII码值(97)当做地址去访问,而97并不是一个合法的地址，访问97的地址是一个随便的值 - 野指针
//	printf("%d\n", strlen(arr[1]));       //err     同理
//	printf("%d\n", strlen(&arr));         //随机值  
//	printf("%d\n", strlen(&arr + 1));     //随机值  从f后往后找'\0'
//	printf("%d\n", strlen(&arr[0] + 1));  //随机值  从b开始往后走
//	
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));          //7       '\0'也要算
//	printf("%d\n", sizeof(arr + 0));      //4       首元素a的地址
//	printf("%d\n", sizeof(*arr));         //1       a
//	printf("%d\n", sizeof(arr[1]));       //1       a
//	printf("%d\n", sizeof(&arr));         //4       数组的地址也是地址
//	printf("%d\n", sizeof(&arr + 1));     //4       跳过整个数组(包括'\0')后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));  //4       b的地址
//	
//	printf("%d\n", strlen(arr));          //6    
//	printf("%d\n", strlen(arr + 0));      //6       首元素地址
//	printf("%d\n", strlen(*arr));         //err
//	printf("%d\n", strlen(arr[1]));       //err
//	printf("%d\n", strlen(&arr));         //6
//	printf("%d\n", strlen(&arr + 1));     //随机值
//	printf("%d\n", strlen(&arr[0] + 1));  //5       b的地址
//	
//	char* p = "abcdef";
//	
//	printf("%d\n", sizeof(p));            //4       指针变量p的大小
//	printf("%d\n", sizeof(p + 1));        //4       b的地址
//	printf("%d\n", sizeof(*p));           //1       a
//	printf("%d\n", sizeof(p[0]));         //1       a  p[0] = *(p + 0) = *p
//	printf("%d\n", sizeof(&p));           //4       p的地址
//	printf("%d\n", sizeof(&p + 1));       //4       p的地址跳过一个char*后的地址
//	printf("%d\n", sizeof(&p[0] + 1));    //4       b的地址
//	
//	printf("%d\n", strlen(p));            //6       
//	printf("%d\n", strlen(p + 1));        //5
//	printf("%d\n", strlen(*p));           //err
//	printf("%d\n", strlen(p[0]));         //err
//	printf("%d\n", strlen(&p));           //随机值  p的地址往后走找'\0'
//	printf("%d\n", strlen(&p + 1));       //随机值  p的地址跳过一个char*后的地址往后找'\0'
//	printf("%d\n", strlen(&p[0] + 1));    //5       b的地址
//	return 0;
//}
	
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);//009FF918
//	printf("%p\n", a[0] + 1);//009FF91C
//	//两者相差4，说明a[0] + 1表示的是第一行第二个元素
//
//	printf("%d\n", sizeof(a));            //48       整个数组元素的大小12 * 4
//	printf("%d\n", sizeof(a[0][0]));      //4
//	printf("%d\n", sizeof(a[0]));         //16       对于二维数组而言，a[0]单独放在sizeof内部表示第一行的数组名
//	printf("%d\n", sizeof(a[0] + 1));     //4        重点理解 : a[0]并没有单独放在sizeof内部，此时表示的是第一行的第一个元素的地址 + 1
//	printf("%d\n", sizeof(*(a[0] + 1)));  //4        第一行第二个元素
//	printf("%d\n", sizeof(a + 1));        //4        第二行的地址，即数组的地址。(需要放到一个数组指针中去)
//	printf("%d\n", sizeof(*(a + 1)));     //16       对指向第二行的数组指针的解引用
//	printf("%d\n", sizeof(&a[0] + 1));    //4        第一行的数组名取地址 : 第一行的地址, 再 + 1 => 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16       第二行的大小
//	printf("%d\n", sizeof(*a));           //16       对第一行的地址解引用 : 算的是第一行的大小
//	printf("%d\n", sizeof(a[3]));         //16       看起来越界了,但sizeof并不会访问那块空间,仅仅计算大小,即如果该二维数组有第四行,那第四行会占多大空间
//
//	return 0;
//}

//10.笔试题
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);               //00000014
//	//0x100000 + 20 
//	//0x100014
//	
//	printf("%p\n", (unsigned long)p + 0x1);//00000001
//	//0x100001 整型+1就是+1,没什么
//
//	printf("%p\n", (unsigned int*)p + 0x1);//00000004
//	//整型地址 + 1
//	//0x100000 + 4
//	//0x100004
//	return 0;
//}

////程序的结果是什么？
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);  
//    int* ptr2 = (int*)((int)a + 1);
//    //注意: 当a从地址强制类型转换成int时再加1，只向前走了一个字节(是整数+1而非整型指针+1)
//    //例如 : 假设a地址为0x00000010强制转换成整数 => 16,16 + 1 =>17, 17强制转换成int * => 0x00000011
//    //可见, 两者只相差了一个字节
//    
//    //由于ptr2是int*类型, 此时对其用解引用操作, 会访问4个字节
//    //对于数组a[4]:在内存中 : (小端字节序)
//    //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//    //此时访问的是00 00 00 02 即访问的是0x02000000   =>2000000
//    
//    printf("%x,%x", ptr1[-1], *ptr2);//4 , 2000000
//    //ptr1[-1] = *(ptr1 + (-1)) = *(ptr1 - 1) => 0x4 => 4
//
//    return 0;
//}

////程序的结果是什么？
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    //如果要把(0，1) ，(2，3), (4 , 5)分别放入二维数组的第一、二、三行，应该这样初始化:
//    // int a[3][2] = {{0 , 1}, {2 , 3}, {4 , 5}};
//    //此时{}内是三个逗号表达式, 等价于{1 , 3 , 5};
//
//    //如果三个()改为{}那么输出结果为0
//
//    int* p;
//    p = a[0];
//    printf("%d", p[0]); //1
//   
//    return 0;
//}

////程序的结果是什么？
//
////指针与指针相减,得到的是他们之间的元素个数
////要学会把二维数组看作一位数组处理(因为都是连续存放的)
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc , -4
//
//    // &p[4][2] - &a[4][2] = -4
//    //10000000000000000000000000000100 - 原码
//    //11111111111111111111111111111011 - 反码
//    //11111111111111111111111111111100 - 补码
//    //1111 1111 1111 1111 1111 1111 1111 1100
//    //f    f    f    f    f    f    f    c
//    return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); //10 , 5
//    return 0;
//}

////程序的结果是什么？
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa); //at 画图很好分析
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);         //POINT
//
//	printf("%s\n", *-- * ++cpp + 3); //ER
//	//先算++cpp, 解引用得到c+1, 再--  => c ,
//	//再解引用=>拿到了ENTER的首字母E的地址 再加3 
//	//=>指向E，向后打印字符串 : ER
//	
//	printf("%s\n", *cpp[-2] + 3);    //ST
//	//*cpp[-2] = *(cpp - 2),(之前cpp存的是cp+2,减2后得cp)
//	//即 : *cpp[-2] + 3 = **(cpp - 2) + 3 => *cp + 3 =>FIRST的首元素地址 + 3 =>打印结果为ST
//
//	printf("%s\n", cpp[-1][-1] + 1); //EW
//	//cpp[-1][-1] + 1 = *(*(cpp - 1) - 1) + 1 (cpp之前存的是cp + 2)
//	//*(cpp - 1)相当于对(cp + 2 - 1)进行解引用,拿到的是c+2
//	//原式化简为 : *(c + 2 - 1) => *(c + 1) =>NEW的首元素地址 + 1开始打印 =>EW
//
//	return 0;
//}

