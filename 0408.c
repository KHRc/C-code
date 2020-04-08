#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//三个值比较最大 1
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int tmp1 = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//	}
//	else
//	{
//		tmp1 = a;
//		a = b;
//		b = tmp1;
//	}
//	if (a > c){}
//	else
//	{
//		tmp1 = a;
//		a = c;
//		c = tmp1;
//	}
//	if (b > c)
//	{
//	}
//	else
//	{
//		tmp1 = b;
//		b = c;
//		c = tmp1;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//
//}

//比较三个中最大值
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int x = 0;
//	x = (a > b) ? a : b;
//	x = (a > c) ? a : b;
//}

//对0-1000的数进行开平方
//int main()
//{
//	int a = 0,b=0;
//again:	
//	scanf("%d", &a);
//	if (a > 0 && a < 1000)
//	{
//	}
//	else
//	{
//		printf("输入值不是正数或大于1000，请重新输入");
//		goto again;
//	}
//	b = sqrt(a);
//	printf("%d\n", b);
//		return 0;
//}

//分段函数
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x < 10)
//	{
//		if (x < 1)
//		{
//			x = x;
//		}
//		else
//			x = 2 * x - 1;
//	}
//	else
//		x = 3 * x - 11;
//	printf("%d", x);
//	return 0;
//
//}

//成绩分类
//int main()
//{
//	double a = 0;
//	int b = 0;
//	scanf("%lf", &a);
//	b = a / 10;
//	switch (b)
//	{
//	case 6:
//		printf("He's grade is D"); break;
//	case 7:
//		printf("He's grade is C"); break;
//	case 8:
//		printf("He's grade is B"); break;
//	case 9:
//	case 10:
//		printf("He's grade is A"); break;
//	default:
//		printf("He's grade is E");
//		break;
//	}
//	return 0;
//}

