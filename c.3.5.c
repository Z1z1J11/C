#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)	
#include<assert.h>
//#include <strlsh.h>
////int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		printf("%d\n", i);
//		printf("%d\t", i);
//		printf("%d\n", i);
//		printf("%d\t", i);
//		printf("%d\t", i);
//	}			   return 0;
////}
//
//	void test2()
//	{
//		printf("gh");
//	}
//	void test1()
//	{
//		test2();
//	}
//	void test()
//	{
//		test1();
//	}
//		int main()
//	{
//		test();
//		return 0;
//}					//入栈 压栈
//int main()
//{
//	int i = 0;
//	/*int sum = 0;*/
//	int n = 0;
//	int ret = 1;
//again:
//	int sum = 0;
//scanf("%d", &n);
//if (n == 0)
//{
//	sum = 1;
//}  else 
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}			sum += ret;
//	} printf("%d\n", sum);
//	goto again;
//	return 0;
//}
//int main()
//{
//	/*int i = 0;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12;i++)
//	{
//		printf("hhh\t");
//		arr[i] = 0;
//	}			 /*  system("pause");*/
//	return 0;
//}			//栈溢出毁坏i地址 内存布局差异，越界改变
//#include<assert.h>
//char* m_strcpy(char  * dest, const char* src)
//{
//	assert(dest != NULL, src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}			 return dest;
//}
//int main()
//{
//	char arr1[] = {wwpppwwppwpw}
//	char  arr2[] = { 123 };
//	m_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//
//	return 0;
//}			字符串“”  数字{ }
//char* m_strcpy(char  * dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL, src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}			 return ret;
//}
//int main()
//{
//	char arr1[] = "wwpppwwppwpw";
//	char  arr2[] = "123 ";
//	m_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//
//	return 0;
//}							 const保持    assert断言
