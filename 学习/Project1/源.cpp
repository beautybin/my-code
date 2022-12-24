#include<stdio.h>
int main()
{
	int i = 0, n = 0;
	int sum = 0;
	int ret = 1;
	printf("please enter a number: ");
		scanf("%d", &i);
		for (n= 1; n <= i; n++)
		{
			ret = ret * n;
			sum = sum + ret;
		}
		printf("n!=%d", sum);
	return 0;
}