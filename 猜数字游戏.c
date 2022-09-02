#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("*******************************\n");
	printf("*******1，play     2,exit******\n");
	printf("*******************************\n");
}

void game()
{
	printf("请猜数字");
	int ret = rand()%100+1;
	/*printf("%d", ret);*/
	do
	{
		printf("请输入数字:");
		int i = 0;
		scanf("%d",&i);
		if (i < ret)
			printf("猜小了");
		else if (i > ret)
			printf("猜大了");
		else
		{
			printf("恭喜你，猜对了！！！");
			break;
		}
	} while (1);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}