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
////int main()	 //ָ�����;��������ò����ܷ��ʿռ�Ĵ�С int*p 4���ֽ� char*p 1���ֽ� double*p 8���ֽ�
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}		ָ������ȷ����ָ����һ���仯ָ���ֽڳ��ȡ�
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
////		printf("��ѡ��");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("������\n");
////			break;
////		case 0:
////			printf("�˳�\n");
////			break;
////		default:
////			printf("ѡ���������ѡ��\n");
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
////	//sizeof(����������������ʾ�������飬sizeof��������������������Ĵ�С����λ�ֽ�
////	//&�����������������������飬&��������ȡ�����������ַ
////
////}
////���鴫��ʱ��ֱ�Ӵ���������λԪ�ص�ַ
