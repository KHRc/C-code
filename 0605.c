#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void sort()
{

}

int main()
{
	char name[7] = { "scanf" };
	char neme[7] = { '\0' };
	strcpy(neme, name);
	puts(neme);
	return 0;
}

//main�����в�����
//main�����в���
//3������

//�������
//argc
//argv
//envp-��������

//int main(int argc, char* argv[], char* envp[])
//{
//
//	return 0;
//}

//
//int main()
//{
//	//�ַ�ָ�������
//	char* str[3] = { "zhangsan", "lisi", "cuihua" };
//	char**p = str;//������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//
//	int***pppa = &ppa;//����ָ��
//
//	return 0;
//}

//void sort(char* str[], int n)
//{
//	int i = 0;
//	int j = 0;
//	//������ȷ��
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j<n-1-i; j++)
//		{
//			if (strcmp(str[j], str[j + 1])>0)
//			{
//				char* tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(char* str[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//}
//int main()
//{
//	//char* str = "abcdef";
//	//char* str1 = "zhangsan";
//	//char* str2 = "lisi";
//	//char* str3 = "cuihua";
//
//	//�ַ�ָ�������
//	char* str[3] = { "zhangsan", "lisi", "cuihua" };
//	print(str, 3);
//
//	sort(str, 3);
//	
//	print(str, 3);
//	return 0;
//}

//int main()
//{
//	int arr[10];//��������
//	char arr2[5];//�ַ�����
//	//ָ������-���ָ�������
//	int* arr3[6];
//
//	char* arr4[7];
//
//	return 0;
//}
//int* search(int score[3][4], int n)
//{
//	return score[n];
//}

//int* search(int (*p)[4], int n)
//{
//	return *(p + n);
//}
//
//int  main()
//{
//	int score[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };
//	int n = 0;
//	printf("������ѧ�������(0-2):>");
//	scanf("%d", &n);
//	int* p = search(score, n);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}



//char* string_copy(char* str1, char* str2)
//{
//	char* start = str2;
//	//��������
//	while (*str2++ = *str1++)
//		;
//	return start;//��ַ
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	char* ret = string_copy(arr1, arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}

//������
//void menu()
//{
//	printf("************************************\n");
//	printf("*****   1. add      2.  sub      ***\n");
//	printf("*****   3. mul      4.  div      ***\n");
//	printf("*****   0.exit                   ***\n");
//	printf("************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////���㺯��
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d%d", &x, &y);
//	ret = (*pf)(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1/2/3/4/
//		switch (input)
//		{
//		case 1://�ӷ�
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int Min(int x, int y)
//{
//	return x > y ? y : x;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	//����ָ��
//	int(*pf)(int, int) = NULL;
//
//	printf("��������������:>");
//	scanf("%d%d", &a, &b);
//	printf("��ѡ��1/2��:>");
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		//�ҳ��ϴ�ֵ
//		pf = Max;
//	}
//	else if (n == 2)
//	{
//		//�ҳ���Сֵ
//		pf = Min;
//	}
//	int ret =  (*pf)(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ӷ�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int sum = Add(a, b);	
//	//printf("sum = %d\n", sum);
//	//printf("%p\n", Add);
//	int (*pf)(int, int) = Add;//Add�Ǻ����ĵ�ַ��pf�Ǵ�ź����ĵ�ַ�ģ�����pf��ָ�����-����ָ��
//	int sum = (*pf)(3, 4);
//	int sum = Add(3, 4);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}