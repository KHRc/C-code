#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//给一个不多于五位的正整数：
//1.求出它是几位数
//2.分别输出每一位数字
//3.按逆序输出各位数字（如1234=1   2   3   4）
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//
	int x = 0;//
	int i = 1;
	int count = 0;
	int arr[5] = { 0 };
	scanf("%d", &a);
	//下面是算位数
	b = a;
	while (b / i >= 1)
	{
		i = i * 10;
		count++;
	}
	printf("它的位数是：%d位\n", count);
	//输出每一位数字
	c = a;
	i = 0;
	printf("它的每一位上的数字（从个位开始）是：\n");
	while (c / 10 != 0)
	{
		x = c % 10;
		c = c / 10;
		arr[i] = x;
		i++;
		printf("%d\n", x);
	}
	x = c % 10;
	arr[i] = x;
	printf("%d\n", x);
	//顺序输出 (1234->1 2 3 4)
	//思路：把上面的数据存入arr中，再按顺序打印
	printf("它的每一位上的数字（从从左到右开始）是：\n");
	for (i = i; i >= 0; i--)
		printf("%d\n", arr[i]);
	
	return 0;
}