#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int T = 0;
//	int S = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	while (i<n)
//	{
//		b = 0;
//		while ( b <= i)
//		{
//			T = a*pow(10, b);
//			S += T;
//			b++;
//		}
//		i++;
//	}
//	printf("%d\n", S);
//	return 0;
//}
int main()
{
	int n = 0;//层数
	int n1 = 0;//层数2用来给for内部结构使用
	int b = 0;//用来打多少个图案
	int i = 0;//此用来打空格
	int x = 0;//此用来作层数变量
	char a = '*';
	scanf("%d", &n);
	n1 = n;
	for (x = 0; x < n1; x++)
	{
		n--;
		for (i = 1; i <= 2*n; i++)
		{
			printf(" ");
		}
		
		for (i = 0; i <= b; i++)
		{
			printf(" %c", a);
		}
		b = b + 2;
		printf("\n");
	}
	//此用来上半身构造+最中间那一排
	b = b - 4;
	n1--;//下半身少一行
	for (x = 0; x < n1; x++)
	{
		n++;
		for (i = 1; i <= 2*n; i++)
		{
			printf(" ");
		}

		for (i = 0; i <= b; i++)
		{
			printf(" %c", a);
		}
		b = b-2;
		printf("\n");
	}
	//此用来打造下半身
	return 0;
}