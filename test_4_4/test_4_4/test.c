#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//int main()
//{
//	char arr[] = "hello bit";
//	int len = strlen(arr); //string length
//	printf("len = %d", len); //len = 9
//	
//	return 0;
//}

//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//
//	if (strlen(p1) - strlen(p2) > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//
//	//ִ�н��Ϊ hehe
//}

////size_t ���൱��unsigned int,�����޷�������ʱ����ֱ��ʹ��
//size_t my_strlen1(const char* str) //��const����*str, ʹ��ָ��ָ������ݲ��ܱ��޸���
//{
//	assert(str != NULL);
//	int count = 0;//������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////����ʹ�ü������İ汾(�ݹ�)
////my_strlen("hello");
////1 + my_strlen(ello);
////1+1+my_strlen(llo);
////1+1+1+my_strlen(lo);
////1+1+1+1+my_strlen(o);
////5+my_strlen('\0');
////5 + 0 = 5
//size_t my_strlen2(const char* str) //��const����*str, ʹ��ָ��ָ������ݲ��ܱ��޸���
//{
//	assert(str != NULL);
//	
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////ָ���ָ��ķ���
//size_t my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str; //const��Ŀ��:���ܱ��������ݣ�����һ��"��ȫ��"ָ��
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen3(arr); 
//	printf("len = %d", len);
//	return 0;
//}

////����char*Ϊ�������ͣ����ں�������ʽ����(Ƕ�׵���)
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
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
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	strcat(arr, "world");
//
//	printf("%s\n", arr);
//	return 0;
//}
//�٢ڢۢܢ�

//int main()
//{
//	char arr[20] = "hello ";
//	strcat(arr, arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(*dest && *src);
//	
//	//1.��Ŀ�ĵؿռ��'\0'
//	while (*dest) //��*dest != '\0'Ϊ��
//	{
//		dest++;
//	}
//	//2.��������
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr[20] = "hello ";
//	
//	printf("%s\n", my_strcat(arr, "world"));
//	
//	return 0;
//}

//׷���Լ�
//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, arr1);
//
//	return 0;
//}

//int main()
//{
//	int ret1 = strcmp("abc", "awe");
//	int ret2 = strcmp("abc", "abc");
//	int ret3 = strcmp("abc", "abb");
//
//	printf("%d %d %d\n", ret1, ret2, ret3); //-1 0 1
//
//	return 0;
//}

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1 - *s2;
	
	/*if (*s1 > *s2) //vs��ʵ�ַ�ʽ
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
		
}

//int main()
//{
//	printf("%d\n", my_strcmp("abc", "abb"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	char arr3[] = "hello";
//
//	strncpy(arr1, arr3, 3);//3 ��ʾֻ����3���ַ���arr1
//	strncpy(arr2, arr3, 7);//7 ������arr3���ַ������ȣ�����ں��油'\0'
//
//	printf("%s\n", arr1); //hel
//	printf("%s\n", arr2); //hello
//
//	return 0;
//}


//int main()
//{
//	char arr[10] = "aaaaaaaaa";
//	strncpy(arr, "hello", 7);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncat(arr1, arr2, 4);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������ת������
//abcdef
//bcdefa
//cdefab

////�ַ�����������
//void left_move(char* str, int n)
//{
//	int i = 0;
//	int len = strlen(str);
//	char tmp = *str;
//	int j = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		//��תһ�β���:
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);//�ӵڶ����ַ���ʼǰ��
//		}
//		*(str + len - 1) = tmp; //��һ���ַ��ŵ����ȥ
//	}
//}
//
//////������ʽ : ÿһ����ת�󶼱Ƚ�һ��
////int main()
////{
////	char arr1[] = "abcdef";
////	char arr2[] = "cdefab";
////	int i = 0;
////	int len = strlen(arr1);
////
////	for (i = 0; i < len; i++)
////	{
////		left_move(arr1, 1);
////		if (strcmp(arr1, arr2) == 0)
////		{
////			printf("YES\n");
////			break;
////		}
////	}
////	if (i == len) //ÿһ�˱ȽϾ�����ȣ���˵��������ת�õ���
////	{
////		printf("NO\n");
////	}
////	
////	return 0;
////}
//
////������ : 
////��arr1����׷��һ��arr1 : abcdefabcdef
////��ô��������ת�Ľ�������������������ַ������Ӵ���
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab"; 
//	if (strlen(arr1) != strlen(arr2)) //������ַ������ȶ�����,��϶��޷�ͨ����ת�õ�
//	{
//		printf("NO\n");
//		return 0;
//	}
//	
//	strncat(arr1, arr1, 6);//arr1׷���Լ�
//	char* ret = strstr(arr1, arr2); //strstr : Ѱ�����ַ���,���ҵ��Ӵ��򷵻��Ӵ�����ʼλ��,�������Ӵ��򷵻ؿ�ָ��
//	if (ret == NULL)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = strncmp(arr1, arr2, 5);//�Ƚ�ǰ5���ַ�
//	printf("%d\n", ret); //0
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* ret = strstr(arr, "cd");
//	if (ret != NULL)
//	{
//		printf("%s\n", ret); //cdefabcdef
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "zqf@qq.com";
//	char arr2[] = "@."; 
//
//	char tmp[30] = { 0 }; 
//	//����strtok���޸�ԭ�ַ��������������ȿ�����ֻ�Կ��������ݽ����޸�
//	strcpy(tmp, arr1); 
//	
//	char* a = strtok(tmp, arr2);
//	//��һ�ε���
//	//����tmp��Ϊ��ָ��, ��Ὺʼ����ҵ�һ�����'@'���������޸�Ϊ'\0'
//	//ͬʱ: 1. �᷵��: ���ַ�'z'�ĵ�ַ 2.���ס@��λ��(��Ϊ�´ε��õ���ʼλ��)
//	printf("%s\n", a); //z
//
//	char* b = strtok(NULL, arr2);
//	//�ڶ��ε���
//	//ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//	//����q�ĵ�ַ����ס'.'��λ��
//	printf("%s\n", b);
//
//	char* c = strtok(NULL, arr2);
//	printf("%s\n", c);
//	//�����ε���
//	//�ӱ������λ�ÿ�ʼ��������һ����ǣ��ҵ�'\0'
//	//����c�ĵ�ַ
//	//����ٵ���Ҳֻ�ܷ��ؿ�ָ����
//	//ע : �����������char arr1[] = "zqf@\0qq.com";
//	//�ҵ���һ��'\0'������ٵ���strtok�������ú���Ҳ������������ڴ��е�ʣ���ַ�,���Ƿ��ؿ�ָ��
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "zqf@XJTU.com";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr1);
//	char arr2[] = "@.";
//	char* p = NULL;
//	for (p = strtok(tmp, arr2); p != NULL; p = strtok(NULL, arr2))
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}

////�ҵ��Ӵ������ִ���ʼλ��, �Ҳ������ؿ�ָ��
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2); //��֤str1��str2��Ϊ��ָ��
//
//	//������ָ�룬�ֱ�ָ����ʼλ�ã����ڱ��� ��һ�γ���ƥ���λ��
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	//���ڱ��� : ��һ�ο�ʼƥ���λ��
//	const char* cp = str1;
//
//	if (*s2 == '\0') //strstr�����涨���str2Ϊ���ַ������򷵻�str1�ĵ�ַ
//	{
//		return (char*) str1;
//	}
//
//	while (*cp) //*cp != '\0'˵���ַ����л����ַ�û���в���
//	{
//		//ƥ�����һ�εĲ���
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 &&  *s1 == *s2) //*s1 != '\0'��*s2 != '\0'��s1 == s2ʱ����ж�
//		{
//			s1++;
//			s2++;
//		}
//		//֮��ֱ�����������ѭ�������
//		if (*s2 == '\0') //˵��ƥ��ɹ���//���ش�ʱ��cp��ַ
//		{
//			return (char*) cp; //co����const char*���εģ����ú���������������char*�����Ѱ�ȫ��ָ�븳���˲���ȫ�ģ��ᱨ���档���Դ�ʱǿ������ת����char*
//		}
//		cp++; //s1 != s2ʱ�Ĵ���
//	}
//	return NULL; //s1 == '\0'˵��û�ҵ��Ӵ����ؿ�ָ��
//}
//
//int main()
//{
//	char* str1 = "abcdef";
//	char* str2 = "cde";
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	
//	return 0;
//}

//int main()
//{
//	//�����ÿ⺯�������������ʱ�򣬾ͻ���Щ������
//	//����������errno���ȫ�ֱ�����(���û�д�����errnoĬ��Ϊ0)
//	//��Ҫͷ�ļ� #include <errno.h>
//	
//	//��ȷ�����
//	printf("%d\n", errno);           // errno   û�д���Ĭ��Ϊ0
//	printf("%s\n", strerror(errno)); //No error û�д���
//	
//	//��������
//	//�ļ�����
//	//���ļ�
//	FILE* pf = fopen("test.tst", "r"); 
//	//��һ���ļ�, ����Ϊ1.�ļ���, 2.����ʽ
//	// (�˴�Ϊ"��"�ķ�ʽ�򿪣�����ļ�����������ʧ��,�������"д"�ķ�ʽ�򿪣��ļ�������ʱ�ᴴ��һ�����ļ�)
//	// ���򿪳ɹ�����᷵��һ����Ч��ָ�룬��ʧ���򷵻ؿ�ָ��
//	//������FILE����һ���ṹ���������fopen�ķ���ֵ
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno)); //No such file or directory
//		perror("91���ӡ������Ϣ"); //
//	}
//	else
//	{
//		printf("�򿪳ɹ�\n");
//		fclose(pf); //�ص��򿪵��ļ�
//		pf = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'A';//65 'a'Ϊ97
//	//printf("%c\n", ch + 32);
//	//
//	printf("%c\n", tolower(ch));
//	//ע�� : tolower(ch)����ֵ��Сд��ĸ��ASCII��ֵ,�����ǰ�ch�Ӵ�д�ı����Сд
//	//��Ҫͷ�ļ� #include <ctype.h>
//
//	//��һ���ַ����ĳ�ȫСд
//	char str[] = "Test String.\n";
//	char c;
//	int i = 0;
//	while (str[i]) //û����'\0'��ת������ӡ
//	{
//		c = str[i];
//		if (isupper(c))
//		{
//
//			c = tolower(c);
//		}
//		putchar(c);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	//�����������飬�϶�������strcpy���п��� : 
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 С�����ڴ��еĴ洢
//	//strcpy����00��ֹͣ��
//	
//	//��ʱ����Ҫ�ڴ濽��
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	while (count--)
//	{
//		//����һ���ֽ�
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char* )src + 1;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	//�����������飬�϶�������strcpy���п��� : 
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 С�����ڴ��еĴ洢
//	//strcpy����00��ֹͣ��
//
//	//��ʱ����Ҫ�ڴ濽��
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//��ʱ�����1 2 3 4 ������3 4 5 6��λ����ȥ
//	//�����ʱ��memcpy����
//	my_memcpy(arr1 + 2, arr1, 16);
//
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//������ռ�δ�ص���ʱ����������������ν
//	//ֻ�пռ��ص�ʱ��Ҫ���ǿ����ķ�ʽ:
//
//	if (dest < src)//��dest��src��ߵ�ʱ��srcӦ�ô�ǰ���ʼ����
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//��֮��src�Ӻ���ǰ����
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//��ʱ�����1 2 3 4 ������3 4 5 6��λ����ȥ
//	
//	my_memmove(arr1 + 2, arr1, 16);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[] = { 1, 2, 3, 3, 3};
//	int ret = memcmp(arr1, arr2, 20);
//	
//	printf("%d\n", ret); // 1
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0, sizeof(arr));
//
//	return 0;
//}