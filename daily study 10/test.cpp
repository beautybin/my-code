#include<stdio.h>
#include"game.h"
void menu()
{
	printf("1.play 0.exit\n");
}
void game()
{
	//�洢�׵�λ��Ϊ����
	char mine[ROWS][COLS];//��Ų��ú��׵���Ϣ
	char show[ROWS][COLS];//����Ų������Ϣ
	//��ʼ������
	Initborad(mine, ROWS, COLS,'0');
	Initborad(show, ROWS, COLS,'*');
	//��ӡ����
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);


}
void test()
{
	int input = 0;
	do
	{
		
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}