#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ret = 0;
	char password[] = {0};
	printf("请输入密码:\n");
	scanf("%s", &password);
	printf("请确认（Y/N）");
	getchar();
	ret = getchar();
	if (ret = 'Y')
		printf("确认成功");
	else
		printf("放弃确认");








	return 0;
}