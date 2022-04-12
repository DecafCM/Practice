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
//	//执行结果为 hehe
//}

////size_t 就相当于unsigned int,定义无符号整型时可以直接使用
//size_t my_strlen1(const char* str) //用const修饰*str, 使该指针指向的内容不能被修改了
//{
//	assert(str != NULL);
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////不能使用计数器的版本(递归)
////my_strlen("hello");
////1 + my_strlen(ello);
////1+1+my_strlen(llo);
////1+1+1+my_strlen(lo);
////1+1+1+1+my_strlen(o);
////5+my_strlen('\0');
////5 + 0 = 5
//size_t my_strlen2(const char* str) //用const修饰*str, 使该指针指向的内容不能被修改了
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
////指针减指针的方法
//size_t my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str; //const的目的:把受保护的数据，交给一个"安全的"指针
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

////设置char*为返回类型，便于函数的链式访问(嵌套调用)
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
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
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
//①②③④⑤

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
//	//1.找目的地空间的'\0'
//	while (*dest) //当*dest != '\0'为真
//	{
//		dest++;
//	}
//	//2.拷贝数据
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

//追加自己
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
	
	/*if (*s1 > *s2) //vs的实现方式
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
//	strncpy(arr1, arr3, 3);//3 表示只拷贝3个字符进arr1
//	strncpy(arr2, arr3, 7);//7 超出了arr3的字符串长度，则会在后面补'\0'
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

//判断一个字符串是否为另一个字符串左旋转得来的
//abcdef
//bcdefa
//cdefab

////字符串左旋操作
//void left_move(char* str, int n)
//{
//	int i = 0;
//	int len = strlen(str);
//	char tmp = *str;
//	int j = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		//旋转一次操作:
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);//从第二个字符开始前移
//		}
//		*(str + len - 1) = tmp; //第一个字符放到最后去
//	}
//}
//
//////暴力方式 : 每一次旋转后都比较一次
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
////	if (i == len) //每一趟比较均不相等，则说明不是旋转得到的
////	{
////		printf("NO\n");
////	}
////	
////	return 0;
////}
//
////方法二 : 
////在arr1后再追加一次arr1 : abcdefabcdef
////那么所有左旋转的结果，都被包含在上述字符串的子串中
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab"; 
//	if (strlen(arr1) != strlen(arr2)) //如果两字符串长度都不等,则肯定无法通过旋转得到
//	{
//		printf("NO\n");
//		return 0;
//	}
//	
//	strncat(arr1, arr1, 6);//arr1追加自己
//	char* ret = strstr(arr1, arr2); //strstr : 寻找子字符串,若找到子串则返回子串的起始位置,若不是子串则返回空指针
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
//	int ret = strncmp(arr1, arr2, 5);//比较前5个字符
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
//	//由于strtok会修改原字符串，所以我们先拷贝，只对拷贝的内容进行修改
//	strcpy(tmp, arr1); 
//	
//	char* a = strtok(tmp, arr2);
//	//第一次调用
//	//由于tmp不为空指针, 则会开始向后找第一个标记'@'，并将其修改为'\0'
//	//同时: 1. 会返回: 首字符'z'的地址 2.会记住@的位置(作为下次调用的起始位置)
//	printf("%s\n", a); //z
//
//	char* b = strtok(NULL, arr2);
//	//第二次调用
//	//同一个字符串中被保存的位置开始，查找下一个标记
//	//返回q的地址，记住'.'的位置
//	printf("%s\n", b);
//
//	char* c = strtok(NULL, arr2);
//	printf("%s\n", c);
//	//第三次调用
//	//从被保存的位置开始，查找下一个标记，找到'\0'
//	//返回c的地址
//	//如果再调用也只能返回空指针了
//	//注 : 如果这样定义char arr1[] = "zqf@\0qq.com";
//	//找到第一个'\0'后，如果再调用strtok函数，该函数也不会继续访问内存中的剩余字符,而是返回空指针
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

////找到子串返回字串起始位置, 找不到返回空指针
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2); //保证str1和str2不为空指针
//
//	//建两个指针，分别指向起始位置，用于保存 下一次尝试匹配的位置
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	//用于保存 : 下一次开始匹配的位置
//	const char* cp = str1;
//
//	if (*s2 == '\0') //strstr函数规定如果str2为空字符串，则返回str1的地址
//	{
//		return (char*) str1;
//	}
//
//	while (*cp) //*cp != '\0'说明字符串中还有字符没进行查找
//	{
//		//匹配查找一次的操作
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 &&  *s1 == *s2) //*s1 != '\0'，*s2 != '\0'且s1 == s2时向后判断
//		{
//			s1++;
//			s2++;
//		}
//		//之后分别处理三种跳出循环的情况
//		if (*s2 == '\0') //说明匹配成功了//返回此时的cp地址
//		{
//			return (char*) cp; //co是由const char*修饰的，而该函数返回类型又是char*，即把安全的指针赋给了不安全的，会报警告。所以此时强制类型转换成char*
//		}
//		cp++; //s1 != s2时的处理
//	}
//	return NULL; //s1 == '\0'说明没找到子串返回空指针
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
//	//当调用库函数，发生错误的时候，就会有些错误码
//	//错误码会放在errno这个全局变量中(如果没有错误则errno默认为0)
//	//需要头文件 #include <errno.h>
//	
//	//正确的情况
//	printf("%d\n", errno);           // errno   没有错误默认为0
//	printf("%s\n", strerror(errno)); //No error 没有错误
//	
//	//错误的情况
//	//文件操作
//	//打开文件
//	FILE* pf = fopen("test.tst", "r"); 
//	//打开一个文件, 传参为1.文件名, 2.打开形式
//	// (此处为"读"的方式打开，如果文件不存在则会打开失败,如果是以"写"的方式打开，文件不存在时会创建一个该文件)
//	// 当打开成功，则会返回一个有效的指针，打开失败则返回空指针
//	//并且用FILE定义一个结构体变量接受fopen的返回值
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno)); //No such file or directory
//		perror("91班打印错误信息"); //
//	}
//	else
//	{
//		printf("打开成功\n");
//		fclose(pf); //关掉打开的文件
//		pf = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'A';//65 'a'为97
//	//printf("%c\n", ch + 32);
//	//
//	printf("%c\n", tolower(ch));
//	//注意 : tolower(ch)返回值是小写字母的ASCII码值,而不是把ch从大写改变成了小写
//	//需要头文件 #include <ctype.h>
//
//	//把一个字符串改成全小写
//	char str[] = "Test String.\n";
//	char c;
//	int i = 0;
//	while (str[i]) //没遇到'\0'就转换并打印
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
//	//对于整型数组，肯定不能用strcpy进行拷贝 : 
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 小端在内存中的存储
//	//strcpy遇到00就停止了
//	
//	//此时则需要内存拷贝
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	while (count--)
//	{
//		//拷贝一个字节
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
//	//对于整型数组，肯定不能用strcpy进行拷贝 : 
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 小端在内存中的存储
//	//strcpy遇到00就停止了
//
//	//此时则需要内存拷贝
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//此时我想把1 2 3 4 拷贝到3 4 5 6的位置上去
//	//如果此时用memcpy函数
//	my_memcpy(arr1 + 2, arr1, 16);
//
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//当两块空间未重叠的时候，怎样拷贝都无所谓
//	//只有空间重叠时需要考虑拷贝的方式:
//
//	if (dest < src)//当dest在src左边的时候，src应该从前向后开始拷贝
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//反之，src从后向前拷贝
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
//	//此时我想把1 2 3 4 拷贝到3 4 5 6的位置上去
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