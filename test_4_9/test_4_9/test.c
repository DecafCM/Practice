#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

//ѧ������
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1, s2; //s1,s2Ϊȫ�ֱ�����������������������
//
//int main()
//{
//	//sΪ�ֲ�����
//	struct Stu s = {"����", 20, "��"}; //
//	return 0;
//}

////�����ṹ������
////������һ���ṹ������s1
//struct 
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1; 
//
////������һ���ṹ��ָ��ps
//struct
//{
//	char name[20];
//	short age;
//	char sex[5];
//}* ps;
////����������ṹ��������ʱ��ʡ�Ե��˽ṹ���ǩ
////��Ȼ�������ֽṹ���Աһģһ����������������Ϊ�������ֲ�ͬ�Ľṹ������
//
//int main()
//{
//	//�ֲ�����
//	//struct  s = { "����", 20, "��" }; //�޷���������,��Ϊû�нṹ���ǩ
//	
//	ps = &s1;//�������ᱨ���� 
//	return 0;
//}

////���������һ�����
//struct Node
//{
//	int date; //������
//	//struct Node n; //����Ƕ���ǲ��еģ���Ȼ����һ���������޷�������ռ�ռ��С
//	struct Node* next; //ָ����
//};
//
//int main()
//{
//	struct Node n; //����nռ�˼����ֽ�
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//typedef struct Node
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2; //�ȼ������д���
//
//	return 0;
//}

////����һ���ṹ������Point
//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//
//struct Point p2; //����ṹ�����p2
//
////����һ���ṹ�����p3, ����ʼ��
//struct Point p3 = { 3, 5 };
//
//
////�ṹ��Ƕ��
//struct Node
//{
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node n = { {5, 9},NULL };
//	printf("x = %d y = %d\n", n.p.x, n.p.y); //x = 5 y = 9
//	
//	return 0;
//}
//
//struct S
//{
//	char c; //ռ1�ֽ�
//	int i;  //ռ4�ֽ�
//};

//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n", sizeof(s)); //8
//	
//	printf("%d\n", offsetof(struct S, c));  //0
//	printf("%d\n", offsetof(struct S, i));  //4
//	//offsetofΪ����ƫ�����ĺ���������Ϊ�ṹ�����Ͳ�����
//	//��Ҫͷ�ļ�<stddef.h>
//
//	return 0;
//}

//struct S
//{
//	char c; //ռ1�ֽ�
//	int i;  //ռ4�ֽ�
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));  //0
//	printf("%d\n", offsetof(struct S, i));  //4
//	//offsetofΪ����ƫ�����ĺ���������Ϊ�ṹ�����Ͳ�����
//	//��Ҫͷ�ļ�<stddef.h>
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S)); //12
//	return 0;
//}

////��ϰ1
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////��ϰ2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////��ϰ3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////��ϰ4 - �ṹ��Ƕ������
////Ƕ�׵Ľṹ����뵽�Լ��������������������� ��ʱ���뵽8��������������
//struct S4
//{
//	char c1;        //��0��ʼ 1-7�˷���
//	struct S3 s3;   //��8��ʼ   ռ����8 - 23
//	double d;       //��24��ʼ ռ����24 - 31
//	//����0��31����ռ��32���ֽ�
//	//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
//	//��Ϊ8�������� --> 32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); // 12
//	printf("%d\n", sizeof(struct S2)); // 8
//	printf("%d\n", sizeof(struct S3)); // 16
//	printf("%d\n", sizeof(struct S4)); // 32
//
//	return 0;
//}

////Ĭ�϶�����Ϊ8��ʱ��
//struct S1
//{
//	char c1;//0
//	//1 - 7 ���˷�
//	double d;//8 - 15
//	char c2;//16
//	//17 - 23 ���˷�
//};
//
//#pragma pack(4)//����Ĭ�϶�����Ϊ4,�Ҷ�����һ������Ϊ2^n����������
//struct S2
//{
//	char c1;//0 
//	//1 - 3���˷�
//	double d;//4 - 11
//	
//	char c2;//12
//	//13 - 15���˷�
//	//�ṹ���ܴ�СΪ16���ֽ�
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); //24
//	printf("%d\n", sizeof(struct S2)); //16
//	return 0;
//}

//struct S
//{
//	char arr[1024];
//	int i;
//};
//
////�ṹ�崫��
//void print1(struct S ss)
//{
//	printf("%s %d\n", ss.arr, ss.i);
//}
//
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%s %d\n", ps -> arr, ps -> i);
//}
//
//int main()
//{
//	struct S s = { "hello bit", 100 };
//	print1(s);    //���ṹ��
//	print2(&s);   //����ַ
//
//	return 0;
//}

//struct A
//{
//	//����������ֻ��������ĸ�����»�����ɣ������ֲ�������ǰ��
//	//ð�ź�����ֱ�ʾ�ñ���ռ����������λ������bit
//	int _a : 2;
//	//������int���ͣ�������4���ֽڼ�32��bitλ�Ŀռ䣬ͬʱ�����_a����bitλ�Ŀռ�
//
//	int _b : 5;
//	//ʣ�µ�30��bit���ó�5�������_b����ʣ25��
//
//	int _c : 10;
//	//ͬ����ʣ��15��
//	int _d : 30;
//	//��ʱ��Ҫ30bit�����������ˣ������ٿ���һ��int�͵Ŀռ����ڷ���
//	//�������Ȱ�15�����꣬�����¿��ٵĿռ䣻����ֱ�����¿��ٵĿռ�洢��ȡ���ڱ�����
//
//};

//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3; 
	//��ʣ5bit
	char b : 4;
	//��ʣ1bit
	char c : 5;
	//���1.�������ʣ�µ�1bit��ֱ���¿���һ���ֽڣ���ʣ3��bit(vs���õķ���)
	//���2.����ʣ�µ�1bit���ٿ��ٿռ䣬�����ʣ4��bit
	char d : 4;
	//���1.���¿���һ���ֽڷ����d
	//���2.��ʣ�µĿռ�պ÷������
};

//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

////{}�ڲ�����ö���������п��ܵ�ȡֵ��Ҳ��ö�ٳ���
//enum Day//����
//{
//	//���¾�Ϊö�ٳ���
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ(��ԭɫ)
//{
//	RED,   //��ʱ���Ը���ֵ RED = 9����GREEN�Զ����10(��Ҫ����ĳ�ֵҲ�ǿ��Ե�)��BLUE = 11
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED; //c��ȡֵֻ����RED,GREEN,BLUE ����֮һ
//
//	printf("%d\n", RED);   //0
//	printf("%d\n", GREEN); //1
//	printf("%d\n", BLUE);  //2
//
//	//RED = 20; err��ö�ٳ������ܱ��޸�
//	return 0;
//}

////�����壺��Ա����һ��ռ�
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//������Ķ���ͳ�ʼ��
//	union Un u = { 0 };
//	
//	printf("%d\n", sizeof(u)); //4
//	
//	printf("%p\n", &u);   //00EFFEC8
//	printf("%p\n", &u.c); //00EFFEC8
//	printf("%p\n", &u.i); //00EFFEC8
//
//	return 0;
//}

//union Un1
//{
//	char c[5]; //��Ȼ�����С��5����Ӧ�ÿ�ÿһ������Ԫ�صĶ�����
//	int i;
//	//��������Ϊ4
//};
//
//union Un2
//{
//	short c[7];
//	int i;
//	//��������Ϊ4
//};
//
//int main()
//{
//	//��������Ľ����ʲô��
//	printf("%d\n", sizeof(union Un1)); //8
//	printf("%d\n", sizeof(union Un2)); //16
//
//	return 0;
//}

//// a = 0x11223344;
////��                    ��
////С��:   44 33 22 11
////���:   11 22 33 44
//
////����һ:
//int check_sys1()
//{
//	int a = 1; //01 00 00 00
//	int b = *(char*)&a;
//	
//	return b;
//}
//
////������:
//int check_sys2()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c; 
//	//u.cΪi�ĵ�һ���ֽ�
//	//����0����ʾ���
//	//����0����ʾС��
//}
//
//
//int main()
//{
//	int ret = check_sys2();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}