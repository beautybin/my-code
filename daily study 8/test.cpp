#include<stdio.h>
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };//����߳���������Ϣ
	initboard(board,ROW,COL);//��ʼ������
	displayboard(board,ROW,COL);//��ӡ����
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
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�����������������\n");
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