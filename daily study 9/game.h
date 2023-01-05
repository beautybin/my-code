#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL],int row,int col);//告诉我们四种游戏状态，玩家赢，电脑赢，平手，继续游戏
//返回‘*’玩家赢，返回‘#’电脑赢，返回Q平局，返回C继续

