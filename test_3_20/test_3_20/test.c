#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void init(int *a, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(a + i) = 0;
//	}
//}
//
//void print(int* a, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(a + i));
//	}
//	printf("\n");
//}
//
//void reverse(int* a, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = a[left];
//		a[left] = a[right];
//		a[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	int brr[5] = { 1, 2, 3, 4, 5 };
//	reverse(brr,sz);
//	print(brr, sz);
//	return 0;
//}
//
//void SwapArr(int* arr1, int* arr2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	SwapArr(arr1, arr2, sz);
//	return 0;
//}

//11 - ʮ����
//00000000000000000000000000001011 - ������
//00000000000000000000000000000001 - ��1��λ��
//int get_diff_bit1(int m, int n)
//{
//	//һ������1��λ�룬��֪���������һλ��0����1
//	//eg:11 - ʮ����
//	//00000000000000000000000000001011 - ������
//	//00000000000000000000000000000001 - ��1��λ�� ���Ϊ1����������0������Ϊ1
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}

//Ҫ��m��n֮���ж���λ��ͬ�����൱���� m^n��������������ж��ٸ�1(��Ϊ�����ͬΪ0����Ϊ1)
//����֪a & (a - 1)����ʹa�������ҵ�һ��1���0�����Դ������£�
//int get_diff_bit2(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	
//	int count = get_diff_bit2(m, n);
//
//	printf("%d\n", count);
//}

int main()
{
	int m = 0;
	scanf("%d", &m);
	//eg:11
	//00000000000000000000000000001011

	//ż��λ
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	//����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}