#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	//�Ѿ����յ��ڴ濪�ٷ�ʽ:
//	int a = 10; //��ջ�ռ��Ͽ����ĸ��ֽ�
//	char c = 'w';
//	char arr[200] = { 0 };//��ջ�ռ��Ͽ���200���ֽڵ������ռ�
//	int arr2[5] = { 0 };
//
//	return 0;
//}

//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(100);
//	if (p == NULL)//�жϵĲ������Ҫ
//	//�������ֵ��һ����ָ��˵�����ٿռ�ʧ����
//	{
//		perror("malloc"); //������ٿռ���ֽ�������int�����ֵ �����ʾ: malloc: Not enough space
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
//		//���� - �ͷ� �ڴ�
//		free(p);
//		p = NULL; 
//		//�ͷſռ��p�ĵ�ַ��û��ģ�������Ҫ������ɿ�ָ��,��ֹ�Ƿ�����
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
//	//ʹ��malloc���ٵĿռ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//�����ÿռ�Ĵ�С
//	int *ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc"); 
//	}
//	else
//	{
//		p = ptr; //��pָ��ÿռ����ʼ��ַ
//		ptr == NULL;
//	}
//	//�ܷ�ֱ����p = (int*)realloc(p, 20 * sizeof(int));
//	//���������������ڴ濪��ʧ��ʱ��pֱ�ӱ���˿�ָ�룬ԭ���Ŀռ䶼�Ҳ�����
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
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	//�����ʱ�ڴ濪��ʧ�� ��pΪ��ָ��*p���ǶԿ�ָ��Ľ����ò���
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
//	for (i = 0; i <= 10; i++) //�ѿ��ٵ�10��int���͵Ŀռ���������Ժ�����������һ��int���͵Ŀռ�(Խ�����)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////�ԷǶ�̬�ڴ濪�ٵ��ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);// err
//	return 0;
//}

////�ͷŶ�̬�����ڴ�ռ��һ���� -err
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
//	//��ʱp�Ѿ�����ָ�򿪱ٿռ����ʼλ�ã�����ָ�򿪱ٵĵ��������Ϳռ�
//	free(p); //err
//	p == NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	//...
//	free(p);//�ظ��ͷ� err
//	
//	//�����ÿһ��free�󣬶���p��Ϊ��ָ�룬�����ٲ��ᱨ��(free(NULL)ʲô�����ᷢ��)
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(12);
//	if (p == NULL)
//		return;
//	if (1)
//		return;
//	//��pΪ��ָ���if��������ʱ��test�������Ѿ������ˣ��ռ䲢û�еõ��ͷ�
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
//	//����2 : ȱ��free
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//����1 : ��ʵ�δ����β�ʱ,�β�ʵ������ʵ�ε�һ����ʱ��������p�ĸ�ֵ������Ӱ��str
//	strcpy(str, "hello world"); 
//	printf(str); //ʲôҲ�����ӡ
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////��ȷ��д��
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

////����������ʲô���
//char* GetMemory(void)
//{
//	//�������� - ����ջ�ռ��ַ������
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	//����p��һ���ֲ����飬����øú���ʱ������������ʱ����������
//	//��ʱ��str��ס��ַ��û������ģ���һ��Ұָ��
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
//	//����Ψһ���������ڴ�й¶������
//	//���������str�ͷż���
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�޸�:
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
//	//free�ǰ�����Ŀռ仹������ϵͳ���������str�ÿ�
//	//str��ָ��֮ǰ�ĵ�ַ 
//	//�ͷź���ʹ�ã�������ǷǷ����ʣ������������ִ��Ҳ����˵������һ����ȷ�Ĵ���
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
//	char arr[]; //��������Ϊ��������
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S)); //4 
//	//�����Сʱ�����ÿ�����������Ĵ�С
//	
//	/*struct S s; //����������������Ϊ�����������ýṹ�Ĵ�С����4 */
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 6);
//	//"����"������: �������arr�ռ�С�ˣ���ô��realloc�Ըýṹ���е�����arr�Ĵ�С��Ӧ�ᷢ���仯
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
//	//�������arr�ռ䲻���ˣ���realloc����
//	struct S* ptr = (struct S*)realloc(p, 14);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//���ٳɹ�����ʼʹ��
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
//	//����
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
//	//����ʱ���Ȼ���arr�ٻ���ps
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}