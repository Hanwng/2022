#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 4);
	printf("%s\n", arr);



	return 0;
}