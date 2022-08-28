#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "wh123456") == 0)
		{
			printf("登录成功！\n");
			break;
		}
		else
			printf("输入错误，请重新输入\n");
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序！\n");
	}
	return 0;
}