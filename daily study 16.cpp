#include<stdio.h>
int main()
{
	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//int* pa;
	//char* pc;
	//float* pf;
	//printf("%d\n", sizeof(pa));
	//printf("%d\n", sizeof(pc));
	//printf("%d\n", sizeof(pf));
	/*int arr[10] = {0};
;	int *p = arr; 
	char *pc = arr;
	printf("% p\n"£¬p); 
	printf("%p\n"£¬p + 1);
	printf("%p\n"£¬pc);
	printf("%p\n"£¬pc + 1);*/
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		*(p + i)=1;
	}
	return 0;
}