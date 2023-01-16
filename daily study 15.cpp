////#include <stdio.h>
////int main()
////{
////	//int a = 6 / 5;//0.6
////	//printf("%d\n"，a)
////	// 
////	//float a = 6 / 5;
////	//printf("%f\n"，a)//1
////
////	float a = 6 / 5.0;
////	printf("%f\n"，a);
////
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	/*int a = 7 % 2;
//	printf("%d\n", a);
//	int b = a << 1;
//	printf("%d\n", b);
//	int c = a >> 1;
//	printf("%d", c);*/
//	int a = 3; int b = 5;
//	//& - 按 (2进制)位与
//	int c = a & b;
//	printf("c =%d\n",c);
//	
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	int d = a | b;
//	printf("%d\n", d);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	int e = a ^ b;
//	printf("%d\n", e);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d\n", a, b);
//}
#include<stdio.h>
struct book
{
	char name[20];
	char id[20];
	int price;
};

int main()
{
	struct book b = { "c语言","2022",55};
	struct book* pb = &b;
		printf("%s\n",b.name);
		printf("%s\n",b.id);
		printf("%d\n",b.price);
		printf("%s\n", pb->name);
		printf("%s\n", pb->id);
		printf("%d\n", pb->price);

	return 0;

}