#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,100 };
	int k = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz-1;
	int left = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]> k)
		{
			right = mid - 1;
		}
		else if(arr[mid]<k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("不存在");
	}
	return 0;
}