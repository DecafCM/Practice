#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test1()
{
	int a = 10; //���ڴ������ĸ��ֽڵĿռ�,���10
	printf("%p\n", &a); //ȡ��ַ 00AFFC8C
	int* pa = &a; //��ַҲ��һ��ֵ�����Դ洢��pa������ - pa����ָ����� 
	              //��ʱ��*�Ǹ��߶���pa��һ��ָ�����
				  //��ʱ��int��ʾa��������int����
	*pa= 20; //�����ò�����
	printf("a = %d\n", a);
	
	char ch = 'w'; //���ڴ�����һ���ֽڵĿռ�,���'w'
	char* pc = &ch;
	*pc = 'a';
	printf("ch = %c\n", ch); //ch = a
}

//void test2()
//{
//	//ָ�����͵����壺
//	//1.ָ�����ͽ����ò���ʱ����һ���Է��ʼ����ֽ�
//	//2.ָ�����+ -������ʱ��ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩��
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	*pa = 0;//����4���ֽ�
//	*pc = 0;//����1���ֽ�
//
//	//��ʹ��int*pa����ʱ��*pa = 0��a��4���ֽ�ȫ���ĳ���0
//	// ����char*pa����ʱ��*pa = 0ֻ��a��1���ֽڱ����0
//
//	printf("%p\n", pa);    //010FFB60
//	printf("%p\n", pa + 1);//010FFB64 �������4���ֽ�
//
//	printf("%p\n", pc);    //010FFB60
//	printf("%p\n", pc + 1);//010FFB61 �������1���ֽ�
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
//	//��Ϊ1 2 3���ڴ���Ϊ 01 00 00 00 02 00 00 00 03 00 00 00
//	//��char����ָ�������pbÿ��+1��ֻ��ǰ����һ���ֽ�
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
	//p����Ұָ��
	//p��ָ�������Ҳ�Ǿֲ��������ֲ�������������ʼ����Ĭ�������ֵ
	//*p = 20;//�ڴ����������һ��λ�� ����20
}
void test5()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++) //ѭ��11��ʱ��Խ�������
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
	int* p = &a;//��ʼ��

	p = NULL;   //�ÿ�
}


void test8()
{
	char arr[] = { 'a', 'b', 'c', 'd' };
	char* p = arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%c\n", *p++);//++���ȼ�����*
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
	//ָ�� - ָ�� �õ�����ָ���ָ��֮���Ԫ�ظ���
	//ǰ������������ָ��ָͬһ��ռ�
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
	int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ
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

	int** ppa = &pa;//��ʱ��ppaΪ����ָ��
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
		printf("%d\n", *arr3[i]);//arr3���a��b��c�ĵ�ַ�������ü��ɷ���
	}
}


int main()
{
	test16();
	return 0;
}