#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("+++++++++++++++++++++++++++++++++\n");
	printf("         ������ �ȴ�С\n");
	printf("        �������Ӧ������\n");
	printf("         1-----��ʼ��Ϸ\n");
	printf("         2-----�˳���Ϸ\n");
	printf("+++++++++++++++++++++++++++++++++\n");
}
void game()
{
	int ret = rand()%10+1;
	int gue = 0;
	printf("���ǿ�ʼ��!\n");
	do
	{
		scanf("%d", &gue);
		if (gue>ret)
		{
			printf("��´�ඣ�\n");
		}
		else if (gue<ret)
		{
			printf("û�������ôС��\n");
		}
		else if (gue==ret)
		{
			printf("��ϲ�㣬��׼��!\n");
			printf("���ڷ������˵�......\n");
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
		printf("�����˳���Ϸ�����Ժ�.....\n");
		break;
	default:
		printf("����ʧ�ܣ�������\n");
		goto again;
	}
	return 0;
}