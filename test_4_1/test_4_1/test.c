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
//	int* arr[4];//����ָ������
//	
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//����ָ������
//	//��ŵ��Ǻ���ָ��
//
//	//�ܷ��Add��Sub�ĵ�ַ�ŵ�ͬһ�������У� ���ԣ�������������Ǻ���ָ������
//	int (*pf[4])(int, int) = {Add, Sub};
//	//pf����[4]��ϣ�˵���Ǹ����飬ȥ��p[4]�������ɼ�������������int (*)(int, int)�ĺ���ָ������
//	//��ʱ��pf���Ǻ���ָ������
//
//	return 0;
//}

//ʵ��һ����ʵ�ּӼ��˳��ļ����������ܶ�μ���
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
//int Div(int x, int y)//û�п��ǳ���Ϊ0�����
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				ret = Add(x, y);
//				printf("����� : %d\n", ret);
//				break;
//			case 2:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				ret = Sub(x, y);
//				printf("����� : %d\n", ret);
//				break;
//			case 3:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				ret = Mul(x, y);
//				printf("����� : %d\n", ret);
//				break;
//			case 4:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				ret = Div(x, y);
//				printf("����� : %d\n", ret);
//				break;
//			case 0:
//				printf("�˳�������\n");
//				break;
//			default:
//				printf("ѡ�����,������ѡ��\n");
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
//int Div(int x, int y)//û�п��ǳ���Ϊ0�����
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
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};//��0��Ϊ����Ԫ���±��Ԫ�ض�Ӧ����
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//
//			ret = pfArr[input](x, y);
//			printf("����� : %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while(input);
//	return 0;
//}

//int main()
//{
//	//���� : ����ָ������
//	int* arr[10];
//	int* pa = &arr; //ȡ��ָ������ĵ�ַ
//
//	int(*pf)(int, int);        //����ָ��
//	int(*pfArr[5])(int, int);  //����ָ������ - ��ź���ָ�������
//	
//	
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//	//&pfArrȡ���ĺ���ָ������ĵ�ַ,ppFArrΪָ����ָ�������ָ��
//	//ppfArr����*��ϣ�˵����һ��ָ�룬����[5]���˵����ָ��ָ��һ����5��Ԫ�ص�����
//	//��ʱȥ��(*ppfArr)[5]����ʣ��int(*)(int, int)�������ͼ�Ϊ�������Ԫ������
//
//	return 0;
//}




//ʵ��һ����ʵ�ּӼ��˳��ļ����������ܶ�μ���
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
//int Div(int x, int y)//û�п��ǳ���Ϊ0�����
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
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("����� : %d\n", ret);
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
//		printf("��ѡ��:>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
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
//	//��Ҫ���������������
//	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	bubble_sort(arr1, sz);
//	
//	float arr2[] = { 2.0, 1.0, 3.0, 0 };
//	int sz2 = sizeof(arr2) / sizeof(arr1[0]);
//	bubble_sort(arr2, sz2);
//	//����arr2����ֱ�Ӵ���bubble_sort��������Ϊ�������Ͳ�ͬ����szҲ��Ҫ���½���
//	//��, ��ʱд��bubble_sort����֧�ֶ�������, �ú�������ͨ��
//
//	return 0;
//}

//void qsort(void* base, 
//		   size_t num, 
//		   size_t width, 
//		   int (*compare)(const void* elem1, const void* elem2)); //elem1 �� elem2���������Ƚ�Ԫ�صĵ�ַ
////qsort��Ҫͷ�ļ�<stdlib.h>��<search.h>
////�ĸ������ֱ�Ϊ : Ŀ��������ʼλ��, ������Ԫ�ظ���, ������һ��Ԫ��ռ�����ֽ�, �Ƚϵķ���

//int cmp_int(const void* e1, const void* e2) //void* ������ָ�룬����ֱ�ӽ����ò����ģ���Ҫǿ������ת��
//{
//	return *(int*)e1 - *(int*)e2; //��e1 > e2,����һ������0������, ��e1 < e2, ����һ��С��0������, ����ȷ���0
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

//qsort ����ṹ������
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
//	//���ڷ�����������ȷ���0��С�ڷ��ظ���
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

////void* ��ָ�����޾������͵�ָ��
////���ŵ����ڿ��Խ��������������͵ĵ�ַ
////��void*��ָ�벻��ֱ��+ -�����Ĳ���
////��void*��ָ�벻��ֱ�ӽ����õĲ���
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a; //char* �� int*������ͬһ���ͣ��ᱨ����
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
//			//��char*ǿ������ת����ԭ����,char����ָ�룬��1�������ֽ���Ҳ��1,��4������4���ֽ�
//			//����Ƚϵ���int���ͣ���char*ǿ������ת����ÿ��һ�ο��width�����൱��������һ��int��Ԫ��
//			{
//				//���������ڲ�֪��������Ԫ�����ͣ����޷�������ʱ������������,��ʱ���ʵ�ֽ�����
//				//����������Ԫ�ص�ÿһ���ֽ�,ÿ��Ԫ�ع���width���ֽ�
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
//int cmp_int(const void* e1, const void* e2) //void* ������ָ�룬����ֱ�ӽ����ò����ģ���Ҫǿ������ת��
//{
//	return *(int*)e1 - *(int*)e2; //��e1 > e2,����һ������0������, ��e1 < e2, ����һ��С��0������, ����ȷ���0
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
//				//��char*ǿ������ת����ԭ����,char����ָ�룬��1�������ֽ���Ҳ��1,��4������4���ֽ�
//				//����Ƚϵ���int���ͣ���char*ǿ������ת����ÿ��һ�ο��width�����൱��������һ��int��Ԫ��
//			{
//				//����
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
//	//���ڷ�����������ȷ���0��С�ڷ��ظ���
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

//ָ���������������

//��������ʾ������Ԫ�صĵ�ַ
//������2������
//1. sizeof(������), ��������ʾ�������飬�������������ܴ�С����λ���ֽ�
//2. &������, ��������ʾ��������, &������ ȡ��������������ĵ�ַ
//����֮��, ������������������������ʾ������Ԫ�صĵ�ַ
//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));          //16 ���������С
//	printf("%d\n", sizeof(a + 0));      //4  ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));         //4  ��Ԫ��
//	printf("%d\n", sizeof(a + 1));      //4  2�ĵ�ַ
//	printf("%d\n", sizeof(a[1]));       //4  2
//	printf("%d\n", sizeof(&a));         //4  ����ĵ�ַ��������4���ֽ�
//	printf("%d\n", sizeof(*&a));        //16 ȡ��ַ�ͽ����õ�����,�൱��sizeof(a)
//	printf("%d\n", sizeof(&a + 1));     //4  ����һ�������ĵ�ַ
//	printf("%d\n", sizeof(&a[0]));      //4  ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0] + 1));  //4  2�ĵ�ַ
//	
//	return 0;
//}
//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));          //6  
//	printf("%d\n", sizeof(arr + 0));      //4  a�ĵ�ַ
//	printf("%d\n", sizeof(*arr));         //1  a
//	printf("%d\n", sizeof(arr[1]));       //1  b
//	printf("%d\n", sizeof(&arr));         //4  ����ĵ�ַ
//	printf("%d\n", sizeof(&arr + 1));     //4  ����һ��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));  //4  b�ĵ�ַ
//	
//	printf("%d\n", strlen(arr));          //���ֵ  ����ʱûд'\0'
//	printf("%d\n", strlen(arr + 0));      //���ֵ
//	printf("%d\n", strlen(*arr));         //err     ���a��ASCII��ֵ(97)������ַȥ����,��97������һ���Ϸ��ĵ�ַ������97�ĵ�ַ��һ������ֵ - Ұָ��
//	printf("%d\n", strlen(arr[1]));       //err     ͬ��
//	printf("%d\n", strlen(&arr));         //���ֵ  
//	printf("%d\n", strlen(&arr + 1));     //���ֵ  ��f��������'\0'
//	printf("%d\n", strlen(&arr[0] + 1));  //���ֵ  ��b��ʼ������
//	
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));          //7       '\0'ҲҪ��
//	printf("%d\n", sizeof(arr + 0));      //4       ��Ԫ��a�ĵ�ַ
//	printf("%d\n", sizeof(*arr));         //1       a
//	printf("%d\n", sizeof(arr[1]));       //1       a
//	printf("%d\n", sizeof(&arr));         //4       ����ĵ�ַҲ�ǵ�ַ
//	printf("%d\n", sizeof(&arr + 1));     //4       ������������(����'\0')��ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));  //4       b�ĵ�ַ
//	
//	printf("%d\n", strlen(arr));          //6    
//	printf("%d\n", strlen(arr + 0));      //6       ��Ԫ�ص�ַ
//	printf("%d\n", strlen(*arr));         //err
//	printf("%d\n", strlen(arr[1]));       //err
//	printf("%d\n", strlen(&arr));         //6
//	printf("%d\n", strlen(&arr + 1));     //���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));  //5       b�ĵ�ַ
//	
//	char* p = "abcdef";
//	
//	printf("%d\n", sizeof(p));            //4       ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));        //4       b�ĵ�ַ
//	printf("%d\n", sizeof(*p));           //1       a
//	printf("%d\n", sizeof(p[0]));         //1       a  p[0] = *(p + 0) = *p
//	printf("%d\n", sizeof(&p));           //4       p�ĵ�ַ
//	printf("%d\n", sizeof(&p + 1));       //4       p�ĵ�ַ����һ��char*��ĵ�ַ
//	printf("%d\n", sizeof(&p[0] + 1));    //4       b�ĵ�ַ
//	
//	printf("%d\n", strlen(p));            //6       
//	printf("%d\n", strlen(p + 1));        //5
//	printf("%d\n", strlen(*p));           //err
//	printf("%d\n", strlen(p[0]));         //err
//	printf("%d\n", strlen(&p));           //���ֵ  p�ĵ�ַ��������'\0'
//	printf("%d\n", strlen(&p + 1));       //���ֵ  p�ĵ�ַ����һ��char*��ĵ�ַ������'\0'
//	printf("%d\n", strlen(&p[0] + 1));    //5       b�ĵ�ַ
//	return 0;
//}
	
//	//��ά����
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
//	//�������4��˵��a[0] + 1��ʾ���ǵ�һ�еڶ���Ԫ��
//
//	printf("%d\n", sizeof(a));            //48       ��������Ԫ�صĴ�С12 * 4
//	printf("%d\n", sizeof(a[0][0]));      //4
//	printf("%d\n", sizeof(a[0]));         //16       ���ڶ�ά������ԣ�a[0]��������sizeof�ڲ���ʾ��һ�е�������
//	printf("%d\n", sizeof(a[0] + 1));     //4        �ص���� : a[0]��û�е�������sizeof�ڲ�����ʱ��ʾ���ǵ�һ�еĵ�һ��Ԫ�صĵ�ַ + 1
//	printf("%d\n", sizeof(*(a[0] + 1)));  //4        ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));        //4        �ڶ��еĵ�ַ��������ĵ�ַ��(��Ҫ�ŵ�һ������ָ����ȥ)
//	printf("%d\n", sizeof(*(a + 1)));     //16       ��ָ��ڶ��е�����ָ��Ľ�����
//	printf("%d\n", sizeof(&a[0] + 1));    //4        ��һ�е�������ȡ��ַ : ��һ�еĵ�ַ, �� + 1 => �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16       �ڶ��еĴ�С
//	printf("%d\n", sizeof(*a));           //16       �Ե�һ�еĵ�ַ������ : ����ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));         //16       ������Խ����,��sizeof����������ǿ�ռ�,���������С,������ö�ά�����е�����,�ǵ����л�ռ���ռ�
//
//	return 0;
//}

//10.������
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);               //00000014
//	//0x100000 + 20 
//	//0x100014
//	
//	printf("%p\n", (unsigned long)p + 0x1);//00000001
//	//0x100001 ����+1����+1,ûʲô
//
//	printf("%p\n", (unsigned int*)p + 0x1);//00000004
//	//���͵�ַ + 1
//	//0x100000 + 4
//	//0x100004
//	return 0;
//}

////����Ľ����ʲô��
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);  
//    int* ptr2 = (int*)((int)a + 1);
//    //ע��: ��a�ӵ�ַǿ������ת����intʱ�ټ�1��ֻ��ǰ����һ���ֽ�(������+1��������ָ��+1)
//    //���� : ����a��ַΪ0x00000010ǿ��ת�������� => 16,16 + 1 =>17, 17ǿ��ת����int * => 0x00000011
//    //�ɼ�, ����ֻ�����һ���ֽ�
//    
//    //����ptr2��int*����, ��ʱ�����ý����ò���, �����4���ֽ�
//    //��������a[4]:���ڴ��� : (С���ֽ���)
//    //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//    //��ʱ���ʵ���00 00 00 02 �����ʵ���0x02000000   =>2000000
//    
//    printf("%x,%x", ptr1[-1], *ptr2);//4 , 2000000
//    //ptr1[-1] = *(ptr1 + (-1)) = *(ptr1 - 1) => 0x4 => 4
//
//    return 0;
//}

////����Ľ����ʲô��
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    //���Ҫ��(0��1) ��(2��3), (4 , 5)�ֱ�����ά����ĵ�һ���������У�Ӧ��������ʼ��:
//    // int a[3][2] = {{0 , 1}, {2 , 3}, {4 , 5}};
//    //��ʱ{}�����������ű��ʽ, �ȼ���{1 , 3 , 5};
//
//    //�������()��Ϊ{}��ô������Ϊ0
//
//    int* p;
//    p = a[0];
//    printf("%d", p[0]); //1
//   
//    return 0;
//}

////����Ľ����ʲô��
//
////ָ����ָ�����,�õ���������֮���Ԫ�ظ���
////Ҫѧ��Ѷ�ά���鿴��һλ���鴦��(��Ϊ����������ŵ�)
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc , -4
//
//    // &p[4][2] - &a[4][2] = -4
//    //10000000000000000000000000000100 - ԭ��
//    //11111111111111111111111111111011 - ����
//    //11111111111111111111111111111100 - ����
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

////����Ľ����ʲô��
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa); //at ��ͼ�ܺ÷���
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
//	//����++cpp, �����õõ�c+1, ��--  => c ,
//	//�ٽ�����=>�õ���ENTER������ĸE�ĵ�ַ �ټ�3 
//	//=>ָ��E������ӡ�ַ��� : ER
//	
//	printf("%s\n", *cpp[-2] + 3);    //ST
//	//*cpp[-2] = *(cpp - 2),(֮ǰcpp�����cp+2,��2���cp)
//	//�� : *cpp[-2] + 3 = **(cpp - 2) + 3 => *cp + 3 =>FIRST����Ԫ�ص�ַ + 3 =>��ӡ���ΪST
//
//	printf("%s\n", cpp[-1][-1] + 1); //EW
//	//cpp[-1][-1] + 1 = *(*(cpp - 1) - 1) + 1 (cpp֮ǰ�����cp + 2)
//	//*(cpp - 1)�൱�ڶ�(cp + 2 - 1)���н�����,�õ�����c+2
//	//ԭʽ����Ϊ : *(c + 2 - 1) => *(c + 1) =>NEW����Ԫ�ص�ַ + 1��ʼ��ӡ =>EW
//
//	return 0;
//}

