#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
//struct s
//{
//	int a : 2;
//	int b : 20;
//	int c : 30;
//	int d : 40;	   4比特开辟内存
//};
//int main()
//{
//	struct s a;
//	printf("%d\n", sizeof(a));
//	return 0;
//}	   位段
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 8;
//};
//int main()
//{
//	struct s s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}		不跨平台
//enum sex
//{
//	male, //0
//	female,	 //1
//	securt		//2
//};
//enum sex
//{
//	male, //0
//	female=9,	 //1
//	securt		//2
//};
//int main()
//{
//	//enum sex s = male;
//	printf("%d %d %d", male, female, securt); 
//	return 0;
//}		枚举enum
//联合（共用体）
//struct s{};
//union ss
//{
//	char c;
//	int i;
//};
//enum sss{};	 
//int main()
//{
//	union ss u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &u);
//	printf("%p\n", (u.c));
//	return 0;
//}
//int cs()
//{
//	int i = 0x11223344;
//	return *(char*)&i;
//}
//int main()
//{
//	int a = 1;
//	int ret = cs();
//	if (1== ret)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//
//}
//int cs()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c ;
//}
//int main()
//{
//	int a = 1;
//	int ret = cs();
//	if (1== ret)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//
//}	   大小端存储
