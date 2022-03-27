#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &a, &n);
//	int b = 0;
//	int sum = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		b = b * 10 + a;
//		sum += b;
//
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//int is_narcissus(int a)
//{
//	int b = a;
//	int sum = 1;
//	while (b / 10 != 0)
//	{
//		b /= 10;
//		sum++;
//	}
//	if(a == (a / ) )
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000 ; i++)
//	{
//		if (is_narcissus(i))
//			printf("%d\n", i);
//	}
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1. 计算i的位数 - n
//		int tmp = i;
//		int count = 1;
//		int sum = 0; //*易错点*，每次循环开始时sum要归0，不能写在循环外面
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		//2.获得i的每一位,计算其每一位的n次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);//pow为求幂的库函数,需要头文件math.h
//			tmp /= 10;
//		}
//		//3.比较并打印
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//打印一个菱形
//	int line = 0; //行数
//	int i = 0;
//
//	scanf("%d", &line); //假设为6
//	//菱形上半部分打印line行
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//先打印空格，再打印* 
//		//第一行打印line - 1个空格，第二行line - 2个空格...
//		int j = 0;
//		for (j = 0; j < (line - 1 - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分打印line - 1行
//	for (i = 0; i < line - 1; i++)
//	{
//		 //打印一行
//		//先打印空格，再打印*
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <(line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;  //总共换了多少瓶汽水
//	int empty = 0;  //现在手里有多少空瓶
//
//	scanf("%d", &money); //20
//	total += money; //用钱买汽水
//	empty = money;  //由汽水变空瓶
//
//	while (empty >= 2)
//	{
//		total += empty / 2;//空瓶换来的汽水
//		empty = empty / 2 + empty % 2;//*盘点手里的空瓶数
//	}
//	printf("total = %d\n", total);
//	
//	return 0;
//}

void move_arr1(int *arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		if (arr[left] % 2 == 0)
		{
			if (arr[right] % 2 == 1)
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
			}
			else
			{
				right--;
			}
		}
		else
		{
			left++;
		}
	}
}

//更易理解的版本，但更复杂
//该方法要单独考虑数组全为奇数或全为偶数的情况:
//若全是奇数,left会一直++,出现越界的情况
//void move_arr2(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//从左边找一个偶数
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边找一个奇数
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--; 
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_arr2(arr , sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

