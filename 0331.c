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
	int n = 0;//����
	int n1 = 0;//����2������for�ڲ��ṹʹ��
	int b = 0;//��������ٸ�ͼ��
	int i = 0;//��������ո�
	int x = 0;//����������������
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
	//�������ϰ�����+���м���һ��
	b = b - 4;
	n1--;//�°�����һ��
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
	//�����������°���
	return 0;
}