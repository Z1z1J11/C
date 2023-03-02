#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int sz = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - j; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//
//				int tmp = arr{ j };
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i]);
//	}	 return 0;
//}
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	again:
//	scanf("%d", &n);
//		for (x = 0; x <= n; x++)
//		{
//			for (y = 1; y <= n / 2; y++)
//			{
//				if (1 * x + 2 * y == n)
//					count += 2 ^ (x + y);
//				else break;
//			}	  
//		}
//	printf("%d\n", count);
//	goto again;
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	} return c;
//}						  TDD-测试驱动开发		 栈溢出
////int fib(int i)
////{
////	if (i <= 2)
////		return 1;
////	else
////		return fib(i - 1) + fib(i - 2);
////}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	again:
//	scanf("%d", &i);
//	n = fib(i);
//	printf("%d\n", n);
//	goto again;
//	return 0;
//}
//斐波那契数列
//int nn(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * nn(n - 1);
//}
////int nn(int n)
////{
////	int i = 0;
////	int c = 1;
////	for (i = n; i > 0; i--)
////	{
////		c = c * i;
////	} return c;
////}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	again:
//	scanf("%d", &n);
//	ret = nn(n);
//	printf("%d\n", ret);
//	goto again;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	again:
//	scanf("%d",&n);
//	int c = 1;
//	while (n > 0)
//	{
//		c = c * n;
//		n--;
//	}	printf("%d", c);
//	goto again;
//	return 0;
//}
//strlen 字符串长度
// strcpy 字符串拷贝 char* 指针（destination，source）
// memset memory set 内存
// int main()
// {
// char arr[]="bit";
// char arr2[]="*******";
// strcpy(arr2,arr);
// printf("%s\n,arr);
// return 0;
// }
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("60秒关机");
//		scanf("%s", &input);
//		if (strcmp(input, "zhu") == 0)
//		{
//			system("shutdown -a");
//		}
//		else goto again;
//
//	return 0;
//}
//void menu()
//{
//	printf("********************************\n");
//	printf("***    1.play   0.exit       ***\n");
//	printf("********************************\n");
//}
//void game()
//{
//			 //时间戳
//	//time_t time(time_t*timer)
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("猜");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("大\n");
//		else if (guess < ret)
//			printf("小\n");
//		else if (guess = ret)
//		{printf("猜对了\n");
//		break;
//	}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}