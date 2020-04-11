#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;	
//	for (i = 0; i < 999999; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int t = i;
//		while (t / 10)
//		{
//			count++;
//			t = t / 10;
//		}
//
//		t = i;
//		while (t)
//		{
//			sum += pow(t % 10, count);
//			t = t / 10;
//		}
//	
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int x = 0;
	int count = 0;
	for (i = 101; i <= 199; i++)
	{
		for (x = 2; x <=sqrt(i); x++)
		{
			if (i%x == 0)
				break;	
		}
		if (x > sqrt(i))
		{
			printf("%d ", i);
				count++;

		}
	}
	printf("\n¸öÊýÊÇ£º%d\n", count);
	return 0;

}
