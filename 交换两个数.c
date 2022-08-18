#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}




int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d  b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d  b=%d\n", a, b);


	return 0;
}