#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL],int row,int col);//��������������Ϸ״̬�����Ӯ������Ӯ��ƽ�֣�������Ϸ
//���ء�*�����Ӯ�����ء�#������Ӯ������Qƽ�֣�����C����

