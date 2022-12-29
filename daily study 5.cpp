#include<stdio.h>
////求n的阶乘
//int Facl(int n)//循环方式实现求n的阶乘
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Facl2(int n)//用递归的方法求阶乘
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl2(n - 1);
//}
//int main()
//{
//	int n = 0;
//		int ret = 0;
//		scanf("%d", &n);
//		ret = Facl2(n);
//		printf("%d\n", ret);
//		return 0;
//	return 0;
//}
//求斐波那契数列
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count=%d/n", count);
//	return 0;
//}//浪费效能，计算冗杂，计算此数列不适合用递归，因此想到用迭代的循环方法计算
int Fib(int n)
{
	int a = 1, b = 1, c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}
