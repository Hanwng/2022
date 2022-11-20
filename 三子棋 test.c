#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****** 1.play   2.exit ****\n");
	printf("***************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	/*初始化键盘*/
	Initboard(board, ROW, COL);
	Display( board, ROW, COL);
	while (1)
	{
		//玩家走
		Playermove(board, ROW, COL);
		Display(board,ROW,COL);
		//判断玩家是否赢
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		Computermove(board, ROW, COL);
		Display(board, ROW, COL);
		//判断电脑是否赢
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'Q')
	{
		printf("平局!");
	}
	else if (ret == '#')
	{
		printf("电脑赢!");
	}
	else if (ret == '*')
	{
		printf("玩家赢!");
	}
}

void test()
{
	int input = 0;
	menu();
	srand((unsigned int)time(NULL));
	printf("请选择:>");
	do 
	{
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
