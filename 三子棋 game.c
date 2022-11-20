#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//函数的实现

void Initboard(char board[ROW][COL],int row,int col)
{
	for (int i=0;i<ROW;i++)
	{
		for (int m=0;m<COL;m++)
		{
			board[i][m] = ' ';
		}
	}
}

void Display(char board[ROW][COL], int row, int col)
{
	for (int i=0;i<ROW;i++)
	{
		int m = 0;
		for ( m=0;m<COL;m++)
		{
			printf(" %c ",board[i][m]);
			if (m < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<COL-1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入这个数的横纵坐标（以空格为界）\n");
		scanf("%d %d",&x,&y);
		if ((x > 0 && x <= ROW) && (y > 0 && y <= COL))
		{
			//就算输入合法，也要判定这个坐标是否重合
			if (board[x-1][y-1] == ' ')//区分正常人输入坐标与数组坐标的区别
			{
				board[x-1][y-1] = '*';//玩家落子
				break;//不能忘记
			}
			else
			{
				printf("输入坐标重合，请重新输入");
			}
		}
		else
		{
			printf("输入非法，请重新输入");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		//需要判断是否重复
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;//不能忘记哦 不然又是死循环！！
		}
	}
}

//返回1表示棋盘满了，返回0表示棋盘没满
int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
    }
	return 1;
}
//告诉我们游戏的四种状态
//玩家赢-----'*'
//电脑赢-----'#'
//继续------'C'
//平局------'Q'


//三子相等时，要考虑空格这个特殊元素
char Iswin(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i=0;i<ROW;i++)
	{
		//判断行
		if (board[i][0] == board[i][1] && board[i][2] == board[i][0] && board[i][0] != ' ')
		{
			return board[i][0];
			//返回值设置很巧妙！
		}
	}
	for (i=0;i<COL;i++)
	{
		//判断列
		if (board[0][i] == board[1][i] && board[2][i] == board[0][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//判断是否平局
	if (Isfull(board, row, col) == 1)
	{
		return 'Q';
	}
	else
		return 'C';
}
