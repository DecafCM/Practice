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
//		//�ж�i�Ƿ�Ϊ������
//		//1. ����i��λ�� - n
//		int tmp = i;
//		int count = 1;
//		int sum = 0; //*�״��*��ÿ��ѭ����ʼʱsumҪ��0������д��ѭ������
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		//2.���i��ÿһλ,������ÿһλ��n�η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);//powΪ���ݵĿ⺯��,��Ҫͷ�ļ�math.h
//			tmp /= 10;
//		}
//		//3.�Ƚϲ���ӡ
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//��ӡһ������
//	int line = 0; //����
//	int i = 0;
//
//	scanf("%d", &line); //����Ϊ6
//	//�����ϰ벿�ִ�ӡline��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ȴ�ӡ�ո��ٴ�ӡ* 
//		//��һ�д�ӡline - 1���ո񣬵ڶ���line - 2���ո�...
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
//	//�°벿�ִ�ӡline - 1��
//	for (i = 0; i < line - 1; i++)
//	{
//		 //��ӡһ��
//		//�ȴ�ӡ�ո��ٴ�ӡ*
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
//	int total = 0;  //�ܹ����˶���ƿ��ˮ
//	int empty = 0;  //���������ж��ٿ�ƿ
//
//	scanf("%d", &money); //20
//	total += money; //��Ǯ����ˮ
//	empty = money;  //����ˮ���ƿ
//
//	while (empty >= 2)
//	{
//		total += empty / 2;//��ƿ��������ˮ
//		empty = empty / 2 + empty % 2;//*�̵�����Ŀ�ƿ��
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

//�������İ汾����������
//�÷���Ҫ������������ȫΪ������ȫΪż�������:
//��ȫ������,left��һֱ++,����Խ������
//void move_arr2(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//�������һ��ż��
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//���ұ���һ������
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

