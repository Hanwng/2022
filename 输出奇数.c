#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 1;
	printf("开始输出1到100的奇数\n");

	//while (i <= 100)
	//{
	//	if (i % 2 == 1)
	//		printf("%d\n", i);
	//	i++;
	//}

	while (i <= 100)
	{
		printf("%d  ", i);
		i += 2;

	}
	return 0;
}