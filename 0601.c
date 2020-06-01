#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Transposition()
//{
//	int arr[3][3] = { 0 };
//	int i = 0, j = 0, k = 0;
//	int tmp = 0;
//	for (i = 0; i < 3; i++)//输入数组
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//
//	}
//	for ( i = 0; i < 3; i++)//数组位置转置
//	{
//		for (j = k; j < 3; j++)
//		{
//			tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//		k++;
//	}
//	printf("结果\n");
//	for (i = 0; i < 3; i++)//打印数组
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%2d", arr[i][j]);
//			if (j==2)
//			{
//				printf("\n");
//			}
//		}
//	
//	}
//
//}
//int main()
//{
//
//	Transposition();
//}


//void Get_numbers(int nmb)
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 3; i>=0; i--)//将数字提取出来
//	{
//		arr[i] = nmb % 10;
//		nmb = nmb / 10;
//	}
//	printf("结果：\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%-2d", arr[i]);
//	}
//}
//int main()
//{
//	int nmb = 0;
//	scanf("%d", &nmb);
//	Get_numbers(nmb);
//	return 0;
//}


//int main()
//{
//	char *arr[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", " December" };
//	int i = 0;
//	scanf("%d", &i);
//	printf("结果：%s\n", arr[i-1]);
//	return 0;
//}


int main()
{
	char *arr[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		gets(arr[i]);
	}
}