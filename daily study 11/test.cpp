#include<stdio.h>
#include"game.h"
void menu()
{
	printf("1.play 0.exit\n");
}
void game()
{
	//�洢�׵�λ��Ϊ����
	char mine[ROWS][COLS] = { 0 };//��Ų��ú��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų������Ϣ
	//��ʼ������
	Initborad(mine, ROWS, COLS,'0');
	Initborad(show, ROWS, COLS,'*');
	//��ӡ����

	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//�Ų���
	Findmine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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