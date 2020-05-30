#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		int item = 1, j = 1;
//		while (j <= i)
//		{
//			item *= j;
//			j++;
//		}
//		sum += item;
//	}
//	printf("结果是：%d\n", sum);
//	return 0;
//}

//int Chicken_with_rabbit_cage(int x,int y)//x为头数，y为脚数
//{
//	int c = 0;//鸡数量
//	int sum = 0;
//	do
//	{
//		sum = 0;
//		sum = c * 2 + (x - c) * 4;
//		c++;
//	} 
//	while (sum!= y);
//	return c;
//}
//int main()
//{
//	int x = 35;
//	int	y = 94;
//	
//	int ch= Chicken_with_rabbit_cage(x, y)-1;//鸡的数量
//	int ra = x - ch;//兔子数量
//	if (ch == x + 1)
//	{
//		printf("没有结果\n");
//		return 0;
//	}
//	else
//		printf("鸡的数量：%d\n兔子的数量：%d\n",ch,ra);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0, j = 0, k = 0, tmp = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (i = 0;i < 10; i++)
//	{
//		for ( j = i+1; j <10; j++)
//		{
//
//			if (*(p + i) < *(p + j))
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = tmp;
//
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//	
//}



int main()
{
	int arr[15] = { 0 };
	int *p = arr;
	int i = 0, j = 0, k = 0, tmp = 0;
	for (i = 0; i < 15; i++)
	{
		scanf("%d", p + i);
	}
	for (i = 0; i < 15; i++)
	{
		for (j = i + 1; j <15; j++)
		{

			if (*(p + i) < *(p + j))
			{
				tmp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = tmp;

			}
		}
	}
	int source = 0;
	int half = 15 / 2;
again:
	scanf("%d", &source);
	if (source == arr[half])
	{
		printf("此为第%d个元素\n",half );
		goto again;
		return 0;
	}
	if (source >= arr[half])
	{
		for (i = 0; i < half; i++)
		{
			if (source == arr[i])
			{
				printf("此为第%d个元素\n", i);
				goto again;
				return 0;
			}
		}

	}
	else
	{
		for (i = half+1; i < 15; i++)
		{
			if (source == arr[i])
			{
				printf("此为第%d个元素\n", i);
				goto again;
				return 0;
			}
		}
	}
	printf("无此数\n");
	goto again;
		return 0;

}

