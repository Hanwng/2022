#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	for (i = 1; i <=5; i++)
//	{
//		ret = ret *i;
//	}
//	printf("%d", ret);
//	return 0;
//}           n的阶乘
// 
// 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}     上面是阶乘的累加（两次循环），下面是进阶版（一次循环）。  

int main()
{
	int n = 0;
	int sum = 0;
	int ret = 1;
	for (n = 1; n <= 4; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}