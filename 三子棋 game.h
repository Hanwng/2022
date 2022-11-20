#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//函数的声明
void Initboard(char board[ROW][COL], int row,int col);
void Display(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL],int row ,int col);
void Computermove(char board[ROW][COL],int row ,int col );
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);
