#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<process.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("Shutdown -s -t 60");
	printf("    �����ĺ���è\n      ");
	printf("��ĵ�����һ�����ڹػ�\n");
again:
	printf("������룺������ , ��ȡ���ػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		goto again;
	}
	else
	{
		goto again;
	}
	return 0;
}