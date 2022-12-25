
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game() 
{
	//1.产生随机数
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//生成1-100的随机数
	//2. 猜数字        
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess > ret) 
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
	
}
void menu()
{
	printf("**************************\n");
	printf("****1.game start 0.exit***\n");
	printf("**************************\n");
}
int main()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字
			break;
		case 0:
			printf("退出程序");
			break;
		default:
			printf("输入错误，请重新输入");
		}
	} while (input);
				return 0;
}