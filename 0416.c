#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
int main()
{
	int money = 0;
	int a=0,b = 0,count=0;
	//aΪ��һ�������ˮ
	int all = 0;
	scanf("%d", &money);
	a = money;
	while (a>1)
	{
		count++;
		a = a - 2;
		a = a + 1;
			
	}
	all = money + count;
	printf("һ������%dƿ��ˮ\n", all);
	return 0;
}

//
//��ҵ����
//
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�



int main()
{
	int arr[5] = { 0 };
	int a[5] = { 0 }, b[5] = { 0 };
	int i = 0, j = 0, k = 0;
	printf("���������������ɵ�����:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	i = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			a[j] = arr[i];
			j++;
		}
		else
		{
			b[k] = arr[i];
			k++;
		}
	}
	//�ϲ�����
	i = 0;
	j--;
	k--;
	for (; j >= 0; j--)
	{
			arr[i] = a[j];
			i++;
	}
	for (; k >= 0;k--)
	{
			arr[i] = b[k];
			i++;
	}
	printf("�������Ϊ:");
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


