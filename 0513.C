#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//实现一个函数，判断一个数是不是素数。
//
//利用上面实现的函数打印100到200之间的素数。

//int fx(int a)
//{
//	for (int i = 2; i <=sqrt(a); i++)
//	{
//		if (a%i==0 )
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int k = 101;k < 200; k++)
//	{
//		if (fx(k) == 1)
//		{
//			printf("%-5d", k);
//		}
//	}
//	return 0;
//}

//实现函数判断year是不是润年。
//①、普通年能被4整除且不能被100整除的为闰年.
//②、世纪年能被400整除的是闰年
//int  leap_year(int x)
//{
//	if (x%4==0&&x%100!=0)
//	{
//		return 1;
//
//	}
//	else if (x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for ( i = 0; i <= 1000; i++)
//	{
//		if (leap_year(i))
//		{
//			printf("%5d", i);
//		}
//	}
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
int Multiplication_table(int x)//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
{
	int i = 0, j = 0 ;
	int result = 0;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x;j++)
		{
			result = i*j;
			printf("%-2d*%-2d=%-5d", i, j, result);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	Multiplication_table(a);
	return 0;
}