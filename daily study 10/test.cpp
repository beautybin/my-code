#include<stdio.h>
#include"game.h"
void menu()
{
	printf("1.play 0.exit\n");
}
void game()
{
	//存储雷的位置为数组
	char mine[ROWS][COLS];//存放布置好雷的信息
	char show[ROWS][COLS];//存放排查出的信息
	//初始化棋盘
	Initborad(mine, ROWS, COLS,'0');
	Initborad(show, ROWS, COLS,'*');
	//打印棋盘
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);


}
void test()
{
	int input = 0;
	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}