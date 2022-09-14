#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Bubble_sort(int arr[], int sz)
{
	int j = 0;
	int ret = 0;
	for (j = 0; j < sz - 1; j++)
	{
		int flag = 1;
		for (ret = 0; ret < sz-1 - j; ret++)
		{
			if (arr[ret] > arr[ret + 1])
			{
				int tmp = arr[ret];
				arr[ret] = arr[ret + 1];
				arr[ret + 1] = tmp;
				flag = 0;
			}
        }
		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[] = { 2,4,5,1,3,6,7,8,9,10 };
	int i = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}