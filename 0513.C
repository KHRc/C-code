#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//ʵ��һ���������ж�һ�����ǲ���������
//
//��������ʵ�ֵĺ�����ӡ100��200֮���������

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

//ʵ�ֺ����ж�year�ǲ������ꡣ
//�١���ͨ���ܱ�4�����Ҳ��ܱ�100������Ϊ����.
//�ڡ��������ܱ�400������������
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

//ʵ��һ����������ӡ�˷��ھ������ھ����������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ��������12�����12 * 12�ĳ˷��ھ���
int Multiplication_table(int x)//�磺����9�����9 * 9�ھ��������12�����12 * 12�ĳ˷��ھ���
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