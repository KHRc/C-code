#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��Сдת��
int main()
{
	char ch = 0;
	scanf("%c", &ch);
	ch=(ch >= 65 && ch <= 90)? (ch+32):ch ;
	ch = (ch >= 'a'&&ch <= 'z') ? (ch - 32) : ch;
	printf("%c", ch);
	return 0;
}