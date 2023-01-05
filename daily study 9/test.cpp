#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//存放走出的棋盘信息
	initboard(board,ROW,COL);//初始化棋盘
	displayboard(board,ROW,COL);//打印棋盘
	while (1)//下棋
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		displayboard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		displayboard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("**********************\n");
	printf("****1.play**0.exit****\n");
	printf("**********************\n");

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("play\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	{

	}
}
int main()
{
	test();
	return 0;
}