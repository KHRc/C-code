#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求一个3×3的整型矩阵对角线元素之和。 
//int main()
//{
//	int a[3][3] = { 0 };
//	int i = 0, j = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3;j++)
//		{
//			if (i == j)
//				sum += a[i][j];
//		}
//	}
//	printf("\n sum=%d", sum);
//	return 0;
//}

//将一个数组中的值按逆序重新存放。例如，原来顺序为8，6，5，4，1。要求改为1，4，5, 6, 8。
//int main()
//{
//	int a[5] = { 0 };
//	int i = 0,j=0;
//	int tmp = 0;
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	i = 0;
//	for (j = 0; j < 5 ;j++)
//	for (i = 0; i < 4-j; i++)
//	{
//		tmp = a[i];
//		a[i] = a[i+1];
//		a[i + 1] = tmp;
//	}
//	return 0;
//}


//输出以下的杨辉三角形（要求输出10行）。
//
//1
//
//1  1
//
//1  2  1
//
//1  3  3   1
//
//1  4  6   4   1
//
//1  5  10  10  5  1


int main()
{
	int a[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][j] = 1;
		j++;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i][j]!=0)
			printf("%5d", a[i][j]);
			if (i == j)
				printf("\n");
		}
	}
	return 0;
}