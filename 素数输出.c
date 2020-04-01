#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>               

void main()
{
	int a, b, c = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b<a; b++)
		{
			if (a%b == 0)
				break;
			else
			if (b == a - 1)
				c = 1;
		}
		if (c == 1)
		{
			printf("%d\n", a);
			c = 0;
		}
	}
}