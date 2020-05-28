#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
int main()
{
	int arr[4] = { 0 };
	int i = 0,j=0,k=1, tmp = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = k; i < 4; i++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		k++;
	}
	printf("½á¹û£º");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}