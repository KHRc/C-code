#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void sort(char *arr[],int n)
//{
//	int i = 0;
//	int j = 0; 
//	char tmp[20] = { '\0' };
//	for (i = 0; i<n - 1; i++)
//	{
//		for (j = i + 1; j<n; j++)
//		{
//			if (strcmp(arr[i], arr[j])>0)
//			{
//				char *tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	char *arr[5] = { "zhansan","lisi","wanwu","Xiaomin","Lihua" };
//	int k = 0;
//	char**p = arr;
//	sort(arr, 5);
//	for (k = 0; k<5; k++)
//	{
//		printf("%s\n", *(p+k));
//	}
//	return 0;
//}
struct Date
{
	int year;
	int month;
	int day;
}date;
int main()
{
	int days = 0;
again:
	printf("请输入你的日期\n");
	scanf("%d %d %d", &(date.year), &(date.month), &(date.day));
    switch (date.month)
	{
	case 1:
		days = date.day;
		break;

	case 2:
		days = date.day + 31; 
		break;

	case 3:
		days = date.day + 59;
		break;

	case 4:
		days = date.day + 90;
		break;

	case 5:
		days = date.day + 120;
		break;

	case 6:
			days = date.day + 151;
			break;

	case 7:
			days = date.day + 181; 
			break;

	case 8:
			days = date.day + 212;
			break;

	case 9:
			days = date.day + 243; 
			break;

	case 10:
			days = date.day + 273; 
			break;

	case 11:
			days = date.day + 304; 
			break;

	case 12:
			days = date.day + 334; 
			break;
	default:
			printf("月份输入错误！");
			goto again;

	}
	if (date.year % 4 == 0 && date.year % 100 != 0 ||
		date.year % 400 == 0 && date.month>3)
	{
		printf("此年是闰年！");
		days++;
	}
	printf("总计天数是：%d", days);
	return 0;
}
