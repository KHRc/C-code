#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main()
{
	int money = 0;
	int a=0,b = 0,count=0;
	//a为第一次买的汽水
	int all = 0;
	scanf("%d", &money);
	a = money;
	while (a>1)
	{
		count++;
		a = a - 2;
		a = a + 1;
			
	}
	all = money + count;
	printf("一共喝了%d瓶汽水\n", all);
	return 0;
}

//
//作业内容
//
//调整数组使奇数全部都位于偶数前面。
//
//
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。



int main()
{
	int arr[5] = { 0 };
	int a[5] = { 0 }, b[5] = { 0 };
	int i = 0, j = 0, k = 0;
	printf("请输入由五个数组成的数组:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	i = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			a[j] = arr[i];
			j++;
		}
		else
		{
			b[k] = arr[i];
			k++;
		}
	}
	//合并数组
	i = 0;
	j--;
	k--;
	for (; j >= 0; j--)
	{
			arr[i] = a[j];
			i++;
	}
	for (; k >= 0;k--)
	{
			arr[i] = b[k];
			i++;
	}
	printf("输出数组为:");
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


