#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char password[10] = {0};
	int ret = 0;
		printf("请输入密码\n");
	scanf("%s", password);
	while((ret=getchar())!='\n')
	{
		;
	}
	printf("请确认(Y/N)\n");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功");
	else
		printf("放弃确认");

	return 0;
}