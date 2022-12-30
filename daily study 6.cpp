#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("&arr[%d] = %p \n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	char ch[5][6];
//	double arr1[5][6];
//	return 0;
//}
int main()
{
	int arr[3][4] = { { 1,2,3 },{ 4, 5,} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	return 0;
}