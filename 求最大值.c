#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int sz = 0;
	int i = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i=0;i<=sz-1;i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max=%d", max);
	return 0;
}