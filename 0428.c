#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//	int a = strlen(arr1);
//	int b = strlen(arr2);
//	size_t c = -3;//直接变为随机值
//	if (strlen(arr1) - strlen(arr2) > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//作业内容
//
//实现一个函数，可以左旋字符串中的k个字符。
//
//
//例如：
//
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

//void F(char a[], int k)
//
//{
//
//	gets(a);
//
//	int i = 0;
//
//	int j = strlen(a);
//
//	scanf("%d", &k);
//
//	strncat(a, a, k);
//
//	for (i = 0; i < j; i++)
//
//	{
//
//		if (k == j + k)
//
//			break;
//
//		a[i] = a[k];
//
//		k++;
//
//
//	}
//
//	a[j] = '\0';
//
//	puts(a);
//
//}
//void leftRound(char * src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //断开位置的下标
//	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
//
//	strcpy(tmp, src + pos); //先将后面的全部拷过来
//	strncat(tmp, src, pos); //然后将前面几个接上
//	strcpy(src, tmp); //最后拷回去
//}
//作业内容
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
int findRound(const char * src, char * find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return strstr(tmp, find) != NULL; //看看找不找得到
}


