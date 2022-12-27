#include<stdio.h>
#include<math.h>
//int is_prime(int n)//判断是否为素数，是素数返回1，否则返回0
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)//素数只被1和自己整除；
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200的素数；
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数；
//		if (is_prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//int is_leap_year(int n)//判断是否为闰年
//{
//	if ((n % 4 == 0 && n % 100!=0) || (n % 400 == 0))
//		return 1;
//  //闰年分为 普通闰年 和·世纪闰年
//	//世纪闰年：公历年份是整百数的，必须是400的倍数
//	//普通闰年：公历年份是4的倍数，且不是100的倍数的
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("enter a year:");
//		scanf("%d", &year);
//		if (is_leap_year(year) == 1)
//			printf("%d is leap year", year);
//		else
//			printf("%d isn't leap year", year);
//}
//int binary_search(int arr[], int k,int sz)
//{
//	//找到返回0.找不到返回-1
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//在有序数组中用二分查找某个数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret =binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//}
//void Add(int* p)//每运行一次num+1
//{
//	(*p)++;
//}
//int main()
//{
//	int num=0;
//	while (num<100)
//	{
//		Add(&num);
//		printf("num:%d\n", num);
//	}
//	return 0;
//}