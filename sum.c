#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a = 0;
	int i = 0;
	while (i <= 100){
		a = a + i;
		i = i + 1;
	}
	printf("%d\n", a);
		return 0;

}