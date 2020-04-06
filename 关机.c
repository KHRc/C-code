#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<process.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("Shutdown -s -t 60");
	printf("    好奇心害死猫\n      ");
	printf("你的电脑在一分钟内关机\n");
again:
	printf("如果输入：我是猪 , 就取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		goto again;
	}
	else
	{
		goto again;
	}
	return 0;
}