#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	//已经掌握的内存开辟方式:
//	int a = 10; //在栈空间上开辟四个字节
//	char c = 'w';
//	char arr[200] = { 0 };//在栈空间上开辟200个字节的连续空间
//	int arr2[5] = { 0 };
//
//	return 0;
//}

//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(100);
//	if (p == NULL)//判断的步骤很重要
//	//如果返回值是一个空指针说明开辟空间失败了
//	{
//		perror("malloc"); //如果开辟空间的字节数大于int的最大值 则会显示: malloc: Not enough space
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 25; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 25; i++)
//		{
//			printf("%d ", *(p + i) = i);
//		}
//		//回收 - 释放 内存
//		free(p);
//		p = NULL; 
//		//释放空间后，p的地址是没变的，所以需要让他变成空指针,防止非法访问
//	}
//	return 0;
//}
//
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i)); //0 0 0 0 0 0 0 0 0 0
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	//使用malloc开辟的空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//调整该空间的大小
//	int *ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc"); 
//	}
//	else
//	{
//		p = ptr; //让p指向该空间的起始地址
//		ptr == NULL;
//	}
//	//能否直接用p = (int*)realloc(p, 20 * sizeof(int));
//	//不建议这样，当内存开辟失败时，p直接变成了空指针，原来的空间都找不到了
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	
//	//释放空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	//如果此时内存开辟失败 则p为空指针*p则是对空指针的解引用操作
//	*p = 0;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i <= 10; i++) //把开辟的10个int类型的空间访问完了以后，又向后访问了一个int类型的空间(越界访问)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////对非动态内存开辟的释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);// err
//	return 0;
//}

////释放动态开辟内存空间的一部分 -err
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//此时p已经不再指向开辟空间的起始位置，而是指向开辟的第六个整型空间
//	free(p); //err
//	p == NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	//...
//	free(p);//重复释放 err
//	
//	//但如果每一次free后，都把p置为空指针，则至少不会报错(free(NULL)什么都不会发生)
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(12);
//	if (p == NULL)
//		return;
//	if (1)
//		return;
//	//当p为空指针或if条件成立时，test函数就已经结束了，空间并没有得到释放
//	free(p);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	//问题2 : 缺乏free
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//问题1 : 当实参传给形参时,形参实际上是实参的一份临时拷贝，对p的赋值并不会影响str
//	strcpy(str, "hello world"); 
//	printf(str); //什么也不会打印
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////正确的写法
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////下面代码输出什么结果
//char* GetMemory(void)
//{
//	//经典问题 - 返回栈空间地址的问题
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//数组p是一个局部数组，进入该该函数时创建，出函数时，就销毁了
//	//此时用str记住地址是没有意义的，是一个野指针
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//	//代码唯一的问题是内存泄露的问题
//	//改正则需把str释放即可
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//修改:
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//free是把申请的空间还给操作系统，而不会把str置空
//	//str仍指向之前的地址 
//	//释放后再使用，本身就是非法访问，程序可以正常执行也不能说明这是一个正确的代码
//	if (str != NULL)
//	{
//		strcpy(str, "wolrd");
//		printf(str); //world
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//struct S
//{
//	int num;
//	char arr[]; //该数组则为柔型数组
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S)); //4 
//	//计算大小时，不用考虑柔型数组的大小
//	
//	/*struct S s; //不能这样创建，因为这样创建，该结构的大小就是4 */
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 6);
//	//"柔型"体现在: 如果觉得arr空间小了，那么用realloc对该结构进行调整，arr的大小相应会发生变化
//	p->num = 100;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		p->arr[i] = 'a' + i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", p->arr[i]); //a b c d e f
//	}
//	//如果觉得arr空间不够了，用realloc调整
//	struct S* ptr = (struct S*)realloc(p, 14);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//开辟成功，开始使用
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S2
//{
//	int num;
//	char* arr;
//};

//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	ps->num = 100;
//	ps->arr = (char*)malloc(6 * sizeof(char));
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		ps->arr[i] = 'a' + i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//增容
//	char* ptr = realloc(ps->arr, 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//回收时，先回收arr再回收ps
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}