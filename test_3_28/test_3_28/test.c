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
//    //�����ǰ����ַ�'a'�ĵ�ַ(��ʼ��ַ)�浽��p����ǰ������ַ������ȥ
//    //"abcdef" - �����ַ���(���ܸ�)
//    //*p = 'w'; //�ᱨ��
//    printf("%s\n", p);//"abcdef"
//    //%s,�������ַ���ʼ��ӡ��ֱ������'\0'����
//
//    //������"abcdef"�����޸ģ���ô�죿
//    //�ŵ�һ�������ͨ���޸�����ﵽ�޸��ַ�����Ŀ��
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
//	int* arr[3] = { &a, &b, &c };//ָ������ : ����ָ��
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
//			printf("%d ", arr[i][j]);//arr[i]��õ�����������arr[i][j]��ʾѡ�������Ԫ��
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

//����ָ�� - ָ��

//����ָ�� - ָ�����͵�ָ��
//�ַ�ָ�� - ָ���ַ���ָ��
//����ָ�� = ����ĵ�ַ

//int main()
//{
//	//����ָ�� - ָ�����͵�ָ��
//	int a = 10;
//	int* p = &a;
//	//�ַ�ָ�� - ָ���ַ���ָ��
//	char ch = 'w';
//	char* pc = &ch;
//	
//	//�ַ�����
//	char arr2[5]; 
//	char(*pb)[5] = &arr2;
//	
//	//ָ������
//	char* ch[5]; 
//	char* (*pd)[5] = &ch; //ע��
//
//	//����ָ�� = ����ĵ�ַ
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* pa)[10] = &arr1;
//	//&�������õ���������ĵ�ַ
//	//pa��������ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص����Ͷ���int
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr;      //��Ԫ�صĵ�ַ
//	//&arr;     //ȡ����������ĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//������������һ����
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
//	//��arr(��Ԫ�ص�ַ)����һ��ָ�����:
//	
//	int* p1 = arr;
//	//����������ĵ�ַ����һ������:
//	//p1 + 1;//����һ������Ԫ��(4�ֽ�)
//	
//	printf("p1 = %p\n", p1);          //00B3FA30
//	printf("p1 + 1 = %p\n", p1 + 1);  //00B3FA34 �������4���ֽ�(һ������Ԫ��)
//
//	int(*p2)[10] = &arr;//��ʱ&arr�������� int(*)[10]
//	//����� int *p3 = &arr;����־���:int *�� int (*)[10]�ļ�Ӽ���ͬ
//	//p2 + 1;//����һ������
//	
//	printf("p2 = %p\n", p2);         //00B3FA30
//	printf("p2 + 1 = %p\n", p2 + 1); //00B3FA58 �������40���ֽ� (һ������)
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //������arr�ĵ�ַ��ֵ������ָ�����p
//	//��������һ���������д����,��ʾ������Ԫ�ػ�����ֱ�Ӱ���Ԫ�ص�ַ��ֵ��p
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//}

////��ӡһλ����
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);   //1 - �������Լ�Ҳ���arr[i]����� 2
//		printf("%d ", *(arr + i)); //2 - ��1��ȫ�ȼ�
//	}
//}
//
////��ӡ��ά����
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
//	//������print1һ��
//}
//
////��һά�����ʹ�����Աȣ��������
//int main()
//{
//	//һά����
//	int arr2[] = { 1,2,3,4,5,6 };
//	print(arr2, 6);
//	
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);//arr��Ԫ�صĵ�ַ
//	//дһ������ ��ӡarr���������
//	//������������(��Ԫ�ص�ַ)���У���
//	//ע:��ʱ����Ԫ�صĵ�ַ��ָʲô����1�ĵ�ַ�����ǵ�һ�еĵ�ַ��
//	//�����۶�ά�����ʱ��,�������ά������һά����
//	//����arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} }������һά����ʱ���൱��ֻ��3��Ԫ��
//	//���ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	
//	print3(&arr, 3, 5);//&arrȡ����������ά����ĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	int arr[5];           //arr�����飬������5��Ԫ�أ�ÿ��Ԫ�ص�������int
//	int* parr1[10];       //parr1��һ��ָ������,������10��Ԫ�أ�ÿ��Ԫ�ص�������int*
//	int(*parr2)[10];      //parr2��һ������ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int
//	int(*parr3[10])[5];
//	//parr3�Ⱥ�[]��ϣ���һ������,������parr3��[10]��ϣ�˵��parr3����10��Ԫ��
//	//����int a[10];���ԣ��õ���������[]��ʣ�µ�����������ÿ��Ԫ�ص�����
//	//˵��parr3[10]��������int(*)[5],������ָ������
//	//����:parr3��һ����10��Ԫ�ص�����,����ÿ��Ԫ����ָ����һ����СΪ5������ָ�룬����Ϊint(*)[5]
//
//	return 0;
//}
	
////������Щ��������ȷ�ģ�
//void test(int arr[])     //ok
//{}
//void test(int arr[10])   //ok
//{}
//void test(int* arr)      //ok
//{}
//void test2(int* arr[20]) //ok
//{}
//void test2(int** arr)    //ok �ص���� : int* �ĵ�ַ �ö���ָ��int **����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 }; //ָ������,ÿ��Ԫ�ص����Ͷ���int * => ��Ԫ��Ҳ��int *����
//	test(arr);
//	test2(arr2);//�������Ԫ�ص�ַ,��int *�ĵ�ַ
//
//	return 0;
//}

//void test(int arr[3][5]) //ok
//{}
//void test(int arr[][])  //err
//{}
//void test(int arr[][5]) //ok
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)    //err��������int* ���ն�ά����һ�еĵ�ַ
//{}
//void test(int* arr[5]) //err, int* arr[5]��һ��ָ�����飬ÿ��Ԫ��������int *
//{}
//void test(int(*arr)[5])//ok �ѵ�һ�еĵ�ַ���ȥ��
//{}
//
//void test(int** arr)  //��ȫ���󣬶���ָ�����ڴ��һ��ָ������ĵ�ַ
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��һ�еĵ�ַ - һά����ĵ�ַ
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
//	int* p = arr;   //p�д洢��arr��Ԫ�ص�ַ����int *p����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)  //���ε�ָ�� : ��Ҫ����һ�����͵ĵ�ַ
//{}
//void test2(char* p) //ͬ����Ҫ����һ���ַ��ĵ�ַ
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
////������ָ�����Աȣ���⺯��ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //pΪ����ָ�룬ȡ������ĵ�ַ:(*p)��ʾp��һ��ָ��,(*p)[10]��ʾpָ��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ������λint
//
//	//����ָ��:
//	//��һ��ָ������ָ�� - ��ź����ĵ�ַ
//	//��ô����õ������ĵ�ַ��
//	printf("%p\n", &Add); //00E013CA
//	printf("%p\n", Add);  //00E013CA
//	//�ɼ�: �������Ǻ����ĵ�ַ, &������ ���Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add;
//	//pfΪ����ָ��
//	//(*pf)��ʾpf��һ��ָ�룬����int�ֱ��Ӧ : �������ͣ��������ͣ���������
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
//	//����ζ���ps��
//	int (* ps)(const char*); 
//	ps = my_strlen; //�Ѻ�����,�������ĵ�ַ�ŵ�ps�У�ps = my_strlen
//	 
//	//���ʹ�ú���ָ�룿
//	int   ret2 = (*ps)(str);
//	//�Ա�ret1 = my_strlen(str);
//	int   ret3 = ps(str);
//
//	printf("%d\n", ret2); //6
//	printf("%d\n", ret3); //6
//	return 0;
//}

//ģ��ʵ��strcoy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest; // Ϊ�˼�¼dest����ʼ��ַ
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
//	//����ָ��
//	char (*pf)(char*, const char*) = &my_strcpy; //&��ʡ��
//	(*pf)(arr1, arr2);//(*pf)�ɸ�Ϊpf
//	printf("%s\n", arr1);
//
//	return 0;
//}

//          (*(void (*)())0)()
//���� void (*)()    �Ǻ���ָ�����ͣ�����������0��ǰ����ʾ��0ǿ������ת��Ϊ����ָ������,����ַ����
//*(void (*)())0,    ��ǰ��*���ǶԸõ�ַ���н����ò����������øú���
//(*(void (*)())0)() ����()˵���ú����޴���

////ʾ��
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p \n", test); //00E61253�õ�ַ��Ϊ�����ĵ�ַ,�����Ĵ��뱣�����Ըõ�ַΪ��ʼ��ַ�Ŀռ���ȥ��
//	(*test)(); //����test����,�Ӳ���*����
//	(*( void (*)() )(*test)) (); //��test��00E61253��int����ǿ������ת����void (*)()����,����*�����õ��øú�������������˵���޴���
//	return 0;
//}

//void (*signal(int , void(*)(int)))(int);
//û�к����壬�����ж��Ǻ���������(����,������������Ҫд������)
//����()���ȼ�����*��signal������()���,�������ڲ��ǲ�������: ����:int������ָ������:void(*)(int)
//ʣ�µĺ���ָ������void (*)(int) Ϊ�ú����ķ�������
//�ܽ�:������Ϊsignal����������Ϊ:����:int������ָ������:void(*)(int),��ָ��ָ��ĺ�������������int����������Ϊvoid��
//�ú����ķ�������Ҳ��һ������ָ�룬��ָ��ָ��ĺ�������������int����������Ϊvoid
//����˵ : �ú�������ʱ����һ�����κ�һ��������ַ������һ��������ַ

//�򻯰�:
typedef void(* pf_t )(int); //��void(*)(int)����������Ϊ pf_t
pf_t signal(int, pf_t); //�򻯰汾

//��typedef�Ĳ���:
typedef int* pi_t;   //��int *������Ϊpi_t
#define PINT_T int* 

int main()
{
	int*   p1, p2;//p1��ָ�룬p2������
	pi_t   p3, p4;//p3,p4����ָ��
	PINT_T p5, p6;//p5��ָ�룬p6������
	//�൱�� int* p5��p6;
}