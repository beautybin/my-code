#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//����߳���������Ϣ
	initboard(board,ROW,COL);//��ʼ������
	displayboard(board,ROW,COL);//��ӡ����
	while (1)//����
	{
		//�������
		PlayerMove(board,ROW,COL);
		displayboard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		displayboard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret=Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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