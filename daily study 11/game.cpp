#include"game.h"
#include<stdio.h>
void Initborad(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]=set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("------扫雷游戏------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");

}
void Setmine(char mine[ROWS][COLS], int  row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int	y = rand() % col + 1;//生成随机下标
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//检查坐标是不是雷
	//（1）如果是雷，炸死
	//（2）不是雷,统计坐标周围几个雷
	int x = 0, y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查雷的坐标:>");
		scanf("%d%d", &x, &y);//x:1-9,y:1-9
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标合法性
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Displayboard(mine, row, col);
				break;
			}
			else
			{
				//不是雷的情况，统计xy坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
					show[x][y] = count+'0';
					Displayboard(show, ROW, COL);
					win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		Displayboard(mine, ROW, COL);

	}
}