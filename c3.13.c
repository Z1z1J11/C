#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
#include <iostream>
using namespace std;
//#if 0;
//int main()
//{
//	int arr[3][5];
//	//int* parr[3][5] = &arr;
//	//int *(parr[3][5]) = &arr;
//	//int* parr[3][5] = &arr[3][5];
//	int (*parr)[3][5] = /*(int(*)[3][5])*/&arr;
//	//int* (*parr[5][3]) = &arr;
//	//int*(*parr) = &arr;
//	//int a = 0;
//	////int *arr[] = { 0 };
//	//int *pparr = (int*)parr;
//	return 0;
//}
//#endif 

//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
//int v = 200;
//int main()
//{
//	int v = 0;
//	cout << v << endl;
//	return 0;
//}  局部全局	作用域运算符::
//namespace Space
//{
//	int x;
//	void func()
//	{
//		printf("void func");
//	}
//	struct Stu
//	{
//		char name;
//		int age;
//	}stu;
//}
//int main()
//{
//	int x = 0;
//	Space::x = 200;
//	int m;
//	int n;
//	cin >> m >> n;
//	cout << m << n << endl;
//}
//namespace Space
//{
//	int x = 11;
//	namespace Sapace
//	{
//		int x = 10;
//	}
//};
//int main()
//{
//	using namespace Space::Sapace;
//	int c = x;
//	cout << c << endl;
//	return 0;
//}
////协作开发
//namespace Space
//{
//	int x;
//}
//namespace Space
//{
//	int y;
//}
//int main()
//{
//	/*string str("china");
//	string str = "china";*/
//	string s = "china";
//	string ss = "chinese .";
//	s += ss;
//	char sss[1000] = { 0 };
//	strcpy(sss, s.c_str());
//	//strcpy((char*)ss, s.c_str());
//	s.swap(ss);
//	int m=s.find("inn", 1);
//	cout << size(s)  << endl;
//	cout << s.size() << endl;
//	cout << sss << endl;
//	cout << m<< endl;
//}
//int main()
//{
//	//char* p = new char(200);
//	//	/*(int*)malloc(sizeof(int) * 100);*/
//	//delete p;
//	int i = 0;
//	int arr[10][9] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		if (i == 0 && j == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			for (j = 0; j < i; j++)
//			{
//				/*	if (i == 0 && j == 0)
//					{
//						printf("0\n");
//					}
//					else
//					{*/
//				arr[i][j] = i;
//				printf("%d", arr[i][j]);
//				/*}*/
//			}
//		/*	cout << arr[i][j] << endl;*/
//		}	printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	string sArray[10] = {
//		"0",
//		"1",
//		"22",
//		"333",
//		"4444",
//		"55555",
//		"666666",
//		"7777777",
//		"88888888",
//		"999999999"
//	};
//	for(int i = 0; i < 10; i++)
//	{
//		cout << sArray[i] << endl;
//	}
//}
int main() 
{
	char buf[100] = "xxxx:yyyyx:zzzz:aaaa:bbbb";
	while(buf)
	{
		int i = 0;
		int c = buf.find(":", i);
}