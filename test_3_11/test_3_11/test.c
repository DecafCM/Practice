#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void test1()
{
	//6.0 % 2.0; //不是整型,err
	int a= 6 / 2;
	int b = 7 / 2;  
	double c = 7 / 2.0;
	printf("a = %d b = %d c = %lf", a, b,c);//a=3 b=3 c=3.500000 
}


void test2()
{
	int a = 7;//a是一个int变量,4个字节,32个bit位 
	int b = a << 1;
	//a从0111 => 1110 (前面的0忽略不计)
	//   7         14
	printf("b = %d\n", b); //14
}

void test3()
{
	int a = 1; 
	int b = -1;
	int c = a >> 1;
	int d = b >> 1;
	//b从11111111111111111111111111111111
	//=> 11111111111111111111111111111111
	printf("c = %d d = %d\n", c, d); //c = 0,d = -1 说明此时编译器用的是算数右移
}

void test4()
{
	int a = 3;
	int b = 5;
	int c = a & b; // & - 按(二进制)位与 - 有0结果就是0,全为1时结果为1
	//a:011 
	//b:101
	//c:001
	int d = a | b; // | - 按(二进制)位或 - 有1结果就是1,全为0时结果为0
	//a:011
	//b:101
	//d:111
	int e = a ^ b; // ^ - 按(二进制)位异或 - 对应的二进制位，相同为0相异为1
	//a:011
	//b:101
	//e:110
	printf("c = %d d = %d e = %d", c, d, e); //c = 1 d = 7 e = 6
}

void test5()
{
	int a = 3;  //011
	int b = 5;  //101

	a = a ^ b;  // a = 110
	b = a ^ b;  // b = 011
	a = a ^ b;  // a = 101

	printf("a = %d b = %d\n", a, b); //a = 5 b =3
}

//方法一
int count_one1(int n)//该方法存在缺陷,计算负数会出错
{
	int count = 0;
	while (n) //只要不是0 二进制序列中就会有1
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

//方法二
//当a与1按位与:
//11111111111111111111111111111111
//00000000000000000000000000000001 
//00000000000000000000000000000001 
//可见:1的最后一位数字与a的最后一位保持一致
//所以判断一次就右移一次a,每次都与1相与 总共右移32次
int count_one2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ( ( (n >> i) & 1 ) == 1 )
		{
			count++;
		}
	}
	return count;
	
}

//方法三(最好的办法)
//n = n & (n-1)  假设n = 7
//   111 & 110 = 110
//再来一次:
//n = n & (n-1)
//   110   100 = 100
//结论：n = n & (n-1) 把n的二进制中从右向左的第一个1变成了0
//方法三的具体步骤为 : 在n = 0之前，不停地用n = n & (n-1)，执行了几次，则有多少个1
int count_one3(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n & n - 1;
		count++;
	}
	return count;
}

void test6()
{
	int a = -1; 
	
	int ret = count_one3(a);
	printf("%d\n", ret);
}

void test7()
{
	int a = 0;
	a = 3;//赋值操作符
}

void test8()
{
	int a = 10;
	int x = 0;
	int y = 20;
	a = x = y + 1;//连续赋值
	printf("a = %d\n", a); //a = 21
}
		
void test9()
{
	3 + 5; // +有两个操作数 双目操作符
	//单目操作符：只有一个操作数的操作符
	//!操作符
	int a = 10;
	printf("a = %d\n", a); //10非0 - 真
	printf("!a = %d\n", !a);//0
	
	int flag = 1;
	if (!flag)
	{
		//表示当flag为假的时候执行if语句
	}
	//&与*操作符 取地址与解引用
	int b = 10;
	int* pb = &b; //pb为指针变量，b的地址存在pa中
	*pb = 20; //解引用操作 通过*pb访问或修改b的值
	printf("b = %d\n", b); //20 

	//sizeof操作符 而不是函数！ 还可以计算数组总大小
	int c = 10;
	int arr[10] = { 0 };
	printf("sizeof(c) = %d\n", sizeof(c)); //4
	printf("sizeof(int) = %d\n", sizeof(int)); //4
	printf("sizeof(arr) = %d\n", sizeof(arr)); //40
	printf("sizeof(int[10]) = %d\n", sizeof(int[10]) ); //40

	// ~操作符 按位取反
	int d = 0;
	printf("d = %d\n", ~d); //-1
	//00000000000000000000000000000000 //d的补码
	//11111111111111111111111111111111 //按位取反后的补码
	//11111111111111111111111111111110 //反码 (补码-1)
	//10000000000000000000000000000001 //源码 (符号位不变，其他按位取反)
	//-1

	//(强制类型转换)
	double e = 3.14;
	printf("e = %d\n", (int)e); // e = 3

}

void test10()
{
	int a = 14;
	a |= (1 << 4);
	printf("%d\n", a); //30

	a &= (~(1 << 4));

	printf("%d\n", a); //14
}

void test11()
{
	int a = 10;
	int b = 10;
	int c = a++; //后置++:先使用再自增1
	int d = ++b; //前置++ 先自增1后使用
	printf("c = %d d = %d a = %d b = %d \n", c, d, a, b);//10 11 11 11

	/*int e = 10;
	int f = e + 1; //1
	f = ++e; //带有副作用 - e变成了12*/

	int g = 1;
	printf("%d\n", g++); // 1
	printf("%d\n", ++g); // 3

}

int main()
{
	test9();
}