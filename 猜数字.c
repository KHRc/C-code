#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("+++++++++++++++++++++++++++++++++\n");
	printf("         猜数字 比大小\n");
	printf("        请输入对应的数字\n");
	printf("         1-----开始游戏\n");
	printf("         2-----退出游戏\n");
	printf("+++++++++++++++++++++++++++++++++\n");
}
void game()
{
	int ret = rand()%10+1;
	int gue = 0;
	printf("我们开始吧!\n");
	do
	{
		scanf("%d", &gue);
		if (gue>ret)
		{
			printf("你猜大喽！\n");
		}
		else if (gue<ret)
		{
			printf("没你想的这么小！\n");
		}
		else if (gue==ret)
		{
			printf("恭喜你，猜准了!\n");
			printf("正在返回主菜单......\n");
		}
	}
	while (gue!=ret);
}
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
again:
	menu();
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		game();
		goto again;
	case 2:
		printf("正在退出游戏，请稍后.....\n");
		break;
	default:
		printf("输入失败，请重试\n");
		goto again;
	}
	return 0;
}