// #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void swap(int *a, int *b);

void print_a_b(int a, int b);

int main()
{
	int a = 1;
	int b = 2;

	print_a_b(a, b);

	swap(&a, &b);

	print_a_b(a, b);

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void print_a_b(int a, int b)
{
	printf("a = %d  b = %d\n", a, b);
}