#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//	int a = strlen(arr1);
//	int b = strlen(arr2);
//	size_t c = -3;//ֱ�ӱ�Ϊ���ֵ
//	if (strlen(arr1) - strlen(arr2) > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//��ҵ����
//
//ʵ��һ�����������������ַ����е�k���ַ���
//
//
//���磺
//
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

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
//	int pos = time % len; //�Ͽ�λ�õ��±�
//	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
//
//	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
//	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
//	strcpy(src, tmp); //��󿽻�ȥ
//}
//��ҵ����
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
int findRound(const char * src, char * find)
{
	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src); //�ȿ���һ��
	strcat(tmp, src); //������һ��
	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
}


