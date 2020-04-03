#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double x = 0.0;
//	double y = 0.0;
//	scanf("%lf", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else if (x >= 10)
//		y = 3 * x - 11;
//	printf("y=%lf\n", y);
//	return 0;
//
//}

//引用函数的方式
double f(double x, double y)
{
	if (x < 1)
	    y = x;
	else if (x >= 1 && x < 10)
		y = 2 * x - 1;
	else if (x >= 10)
		y = 3 * x - 11;
	return y;
}
int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	scanf("%lf",&a);
	c = f(a, b);
	printf("y=%lf", c); 
	return 0;
}