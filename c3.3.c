#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)	

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa	  = 0;
//	printf("%p\n", pa);
//	return 0;
//}
////int main()	 //指针类型决定解引用操作能访问空间的大小 int*p 4个字节 char*p 1个字节 double*p 8个字节
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}		指针类型确定，指针走一步变化指针字节长度。
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short	*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%p\n", pa);
//	printf("%d\n",pa);
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int c = 0;
//	while (a <  2)
//	{
//		c++;
//		a++;
//	}  printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(a)/sizeof(a[0]);
//
//	for (i = 0; i <sz; i++)
//	{
//		
//		int count = 0;
//		while (count > 1)
//		{
//			int j = 0;
//			if (a[i] == a[j])
//			{
//				count++;
//			}
//			else j++;
//		}	if (count==1)
//				{
//					printf("%d\n", a[i]);
//				}
//		
//	}return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d", a, b);
//		return 0;
//}
////void menu()
////{
////	printf("********************\n");
////	printf("***1.play  0.exit**\n");
////	printf("********************\n");
////}
////void game()
////{
////	char arr[ROW][COL] = { 0 };
////	InitBoard(board, ROW, COL);
////	DisplayBoard(board, ROW, COL);
////}
////void test()
////{
////	int input = 0;
////	do
////	{
////		
////		menu();
////		printf("请选择：");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("三子棋\n");
////			break;
////		case 0:
////			printf("退出\n");
////			break;
////		default:
////			printf("选择错误，重新选择\n");
////			break;
////
////		}
////	} while (input);
////}
////
////int main()
////{
////	test();
////	return 0;
////}
//////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	printf("%p\n", arr);
////	printf("%p\n", &arr[0]);
////	printf("%d\n", arr[1]);
////	printf("%p\n", &arr);
////	//sizeof(数组名）数组名表示整个数组，sizeof（数组名计算整个数组的大小，单位字节
////	//&数组名数组名代表整个数组，&数组名，取出整个数组地址
////
////}
////数组传参时候直接传递数组首位元素地址
