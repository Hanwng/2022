#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "hanwang yyds!!!!";
	char arr2[] = "#################";
	int right = sizeof(arr1) / sizeof(arr1[0])-2;
	int left = 0;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1001);
		system("cls");
		left++;
		right--;
	}
	if(left>right)
	{
		printf("%s/n", arr1);
	}
	return 0;
}