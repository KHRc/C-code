#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double x1 = 0.0;
	double x2 = 0.0; 
	double p = 0.0;
	double  q = 0.0;
	double dis = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a<=1e-6)
	{
		printf("不是二元一次方程！");
	}
	dis = pow(b, 2) - 4 * a*c;
	
	if (abs(dis)< 1e-6)
	{
		printf("方程有两个相等的实根\n");
		x1 = (-b) / (2 * a);
		x2 = (-b) / (2 * a);
		printf("x1=%7.2f,x2=%7.2f", x1, x2);
	}
	else 
	if (dis < 1e-6)
	{
		printf("方程有两个共轭复根\n");
		p = -b / (2 * a);
		q = sqrt(-dis) / (2 * a);
		printf("x1=%7.2lf+%7.2lf i\n", p, q);
		printf("x2=%7.2lf-%7.2lf i\n", p, q);
	}
	else
	{
		printf("方程有两个不相等的实根\n");
		x1 = (-b + sqrt(dis)) / (4 * a);
		x2 = (-b - sqrt(dis)) / (4 * a);
		printf("x1=%7.2f,x2=%7.2f", x1, x2);
	}
	return 0;
}


//int prime(int m)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(m); i++)
//	{
//		if (m%i == 0)
//		{
//			
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int m = 0;
//again:	scanf("%d", &m);
//	if (prime(m))
//	{
//		printf("此数是素数！\n");
//	}
//	else
//	{
//		printf("此数不是素数！\n");
//	}
//	goto again;
//	return 0;
//}

//int main()
//{
//	int i =0,k=0,j=0;
//	for (i = 1; i < 1000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		int count = 0;
//		int arr[12] = { 0 };
//		for (k = 1;k < i; k++)
//		{
//			if (i%k == 0)
//			{
//				arr[j] = k;
//				j++;
//				count++;
//			}
//		}
//		for (j = 0; j <= count; j++)
//		{
//			sum += arr[j];
//		}
//		if (sum == i)
//		{
//			printf("%d: its factors are", i);
//			for (j = 0; j <count; j++)
//			{
//				printf("%d，", arr[j]);
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	char c1 = getchar();
//	char c2 = getchar();
//	char c3 = getchar();
//	char c4 = getchar();
//	char c5 = getchar();
//
//	putchar(c1 + 4);
//	putchar(c2 + 4);
//	putchar(c3 + 4);
//	putchar(c4 + 4); 
//	putchar(c5 + 4);
//	printf("\n%c%c%c%c%c", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
//	return 0;
//}
//

//int main()
//{
//	int grade = 0;
//again:	
//	scanf("%d", &grade);
//	switch (grade / 10)
//	{
//	case 9:
//		printf("You grade is A\n");
//		break;
//	case 8:
//		printf("You grade is B\n");
//		break;
//	case 7:
//		printf("You grade is C\n");
//		break;
//	case 6:
//		printf("You grade is D\n");
//		break;
//	default:
//		printf("You grade is E\n");
//		break;
//	}
//		goto again;
//		return 0;
//}