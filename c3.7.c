#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)	
//int main()
//{
//	int arr[] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];
//	char* pch[5];
//	return 0;
//}
//int main()
//
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* arrr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d\n", *(arrr[i] + j));
//		}								  printf("\n");
//	}														  return 0;
//}							//Ö¸ÕëÊý×é