#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1()
{
	int a = 2; //010
	int b = 5; //101
	int c = a & b;   //��(2����)λ��:000
 	int d = a && b; //�߼���:1
	printf("c = %d d = %d\n", c, d);//0 1

	int e = a | b;   //��(2����)λ��:111
	int f = a || b;  //�߼���:1
	printf("e = %d f = %d\n", e, f);//7 1
}

void test2()
{
	//��������Ľ����ʲô��
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;       //a=1 b=2 c=3 d=4
	//i = a++||++b||d++;         //a=1 b=3 c=3 d=4
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
}

void test3()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = a > b ? a : b;
	printf("max = %d", max);
}

void test4()
{
	//����1
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	int d = 0;
	printf("c = %d", c); //13

	//����2
	if (a = b + 1, c = a / 2, d > 10);
	//�ñ��ʽ������d>10��������ж�

	//����3
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//ҵ����
//		a = get_val();
//		count_val(a);
//	}                   //�ô����Ϊ����
//	
//	//���ʹ�ö��ű��ʽ����д��
//		while (a = get_val(), count_val(a), a > 0)
//		{
//			//ҵ����
//		}
//		//�ж���������a>0,��ǰ��Ĵ������ɻ���У��ô��뿴������Ϊ���
}


void test5()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	arr[4]; //�±����ò�����
	//ϵͳ���arr[4] ==> *(arr + 4)
	
	printf("%d\n", *(arr + 4));
	printf("%d\n", arr[4]);
	printf("%d\n", 4[arr]);//������������ֵ���Ի���λ��
	
}

int test()
{
	//����Ĳ���ȫ��ʼ��
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char b[6] = { 'a','b','c','d','e','f' };
	//���������Ԫ�ظ���
	int sz = sizeof(b) / sizeof(b[0]);
	int i;
	//�������Ԫ�صĵ�ַ
	for (i = 0; i < sz; ++i)
	{
		printf("%p\n", &b[i]);
	}

	printf("%p\n", &b[4]);
	//printf("%p\n", arr + 4);
	printf("%p\n", b + 4);
	return 0;
}

void test6()
{
	printf("hehe"); //�������ò�����������û�д���Ҳ����ʡ��( )
}

void test7()
{
	struct Book
	{
		char name[20];
		int price;
	};
	struct Book b = {"C���Գ������", 35};
	//�ṹ�����.��Ա����
	printf("����:%s ����:%d\n", b.name, b.price);

	struct Book* pb = &b;
	//�ṹ��ָ��->��Ա����
	printf("����:%s ����:%d\n", pb->name, pb->price);

}


void test8()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	//a��bҪ������������
	//3�Ķ�����:      00000000000000000000000000000011
	//��3����a�У���ʱ��a:00000011���������λΪ0������
	//����a��������Ϊ:00000000000000000000000000000011   -�������a

	//127�Ķ�����:    00000000000000000000000001111111
	//����b�к�:      01111111
	//����������:     00000000000000000000000001111111   -�������b
	//           +    00000000000000000000000000000011  
	//a+b             00000000000000000000000010000010
	//����c��:10000010
	//��ӡ%d��c - ��Ҫ������������
	//��ʱ��ӡ��c:    11111111111111111111111110000010   -�������c - ����
	//                11111111111111111111111110000001              - ����
	//                10000000000000000000000001111110              - ԭ�� -126

	printf("c = %d\n", c); //-126
}

void test9()
{
	char a = 0xb6;       //10110110         
	short b = 0xb600;    //1011011000000000
	int c = 0xb6000000;  //101101100000000000000000
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");     
	//c
}  

void test10()
{
	char c = 1;
	printf("%u\n", sizeof(c));   //1 
	printf("%u\n", sizeof(+c));  //4 +c�Ǳ��ʽ,�ᷢ����������(���int 4�ֽ�)
	printf("%u\n", sizeof(-c));  //4 ��+cͬ��
}

void test11()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);  //12
	printf("%d\n", i);    //4
}

int main()
{
	test11();
	return 0;
}
