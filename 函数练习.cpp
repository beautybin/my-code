#include<stdio.h>
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b;
	printf("enter tow num>");
		scanf("%d%d", &a, &b);
		int max=get_max(a, b);
		printf("the large num is>%d", max);

	return 0;
}
#include<stdio.h>
void Swap(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a, b;
	printf("please enter tow num to exchange>");
	scanf("%d%d",&a,&b);
	printf("a is %d,b is %d\n", a, b);
	Swap(&a, &b);
	printf("after exchange,a is %d,b is %d", a, b);
	return 0;
}