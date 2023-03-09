#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)	
//void (*signal(int, void(*)(int)))(int);//函数指针 =类型后置
//typedef void (*pf)(int);
//pf signal(int, pf);
//typedef unsigned int unit;
//int add(int a, int b)
//{
//	int dd = 0;
//	dd = a + b;
//	return dd;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int(* pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//						 }
//int add(int x, int y)
//{
//	return x + y;
//}
//int bdd(int x, int y)
//{
//	return x - y;
//}
//int cdd(int x, int y)
//{
//	return x * y;
//}
//int ddd(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = add;
//	int (*pr[4])(int, int) = { add,bdd,cdd,ddd };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pr[i](3, 5));
//	}
//	return 0;
//}	函数指针数组
//char* my_strcpy(char* dest, const char* src);
//char*(*pf)(char*,const char*) = my_strcpy;
//char*(*pp[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
//int add(int x, int y)
//{
//	return x + y;
//}
//int bdd(int x, int y)
//{
//	return x - y;
//}
//int cdd(int x, int y)
//{
//	return x * y;
//}
//int ddd(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("1.add ");
//	printf("2.bdd ");
//	printf("3.cdd ");
//	printf("4.ddd ");
//	printf("0.exit\n");
//}
////int main()
////{
////	int x = 0;
////	int y = 0;
////	int input = 1;
////	do
////	{
////		menu();
////		printf("选择");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 0:
////			printf("输入两个数");
////			scanf("%d %d", &x, &y);
////			printf("%d\n", add(x, y));
////			break;
////		case 2:
////			printf("输入两个数");
////			scanf("%d %d", &x, &y);
////			printf("%d\n", bdd(x, y));
////			break;
////		case 3:
////			printf("输入两个数");
////			scanf("%d %d", &x, &y);
////			printf("%d\n", cdd(x, y));
////			break;
////		case 4:
////			printf("输入两个数");
////			scanf("%d %d", &x, &y);
////			printf("%d\n", ddd(x, y));
////			break;
////		case 1:
////			printf("退出\n");
////			break;
////		default	:
////			break;
////		}
////	} while(input);
////		return 0;
////}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 1;
//	int (*pr[])(int, int) = { 0,add,bdd,cdd,ddd };
//	do
//	{
//		menu();
//		printf("选择");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("exit");
//		} else
//		printf("输入两个数");
//	    scanf("%d %d", &x, &y);
//		printf("%d\n", pr[input](x, y));
//	} while (input);
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}								return 0;
//}		冒泡排序