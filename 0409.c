#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��һ����������λ����������
//1.������Ǽ�λ��
//2.�ֱ����ÿһλ����
//3.�����������λ���֣���1234=1   2   3   4��
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//
	int x = 0;//
	int i = 1;
	int count = 0;
	int arr[5] = { 0 };
	scanf("%d", &a);
	//��������λ��
	b = a;
	while (b / i >= 1)
	{
		i = i * 10;
		count++;
	}
	printf("����λ���ǣ�%dλ\n", count);
	//���ÿһλ����
	c = a;
	i = 0;
	printf("����ÿһλ�ϵ����֣��Ӹ�λ��ʼ���ǣ�\n");
	while (c / 10 != 0)
	{
		x = c % 10;
		c = c / 10;
		arr[i] = x;
		i++;
		printf("%d\n", x);
	}
	x = c % 10;
	arr[i] = x;
	printf("%d\n", x);
	//˳����� (1234->1 2 3 4)
	//˼·������������ݴ���arr�У��ٰ�˳���ӡ
	printf("����ÿһλ�ϵ����֣��Ӵ����ҿ�ʼ���ǣ�\n");
	for (i = i; i >= 0; i--)
		printf("%d\n", arr[i]);
	
	return 0;
}