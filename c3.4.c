#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#pragma warning(disable:4996)	
////调试	结构体标签 类型
////struct stu
////{
////	member - list;
////}variable - list;
////typedef struct stu
////{
////	char name[20];
////	short age;
////	char tele[12];
////	char sex[5];
////} /*s1, s2, s3;*/ stu;	//全局结构体变量
////int main()
////{
////	struct stu s1("张"，20，1222563，"男"）;	  // 局部变量
////struct stu s2;
////
////
////	return 0;
////  }
////struct s
////{
////	int a;
////	char c;
////	char arr[20];
////	double s;
////	char* pc;
////};
////int main()
////{
////	char arr[] = "heelo";
////	struct s = { "hh",(100,'m',"heeee",3.14),arr};
////	printf("%s\n", t, ch); //结构访问"."
////}				 结构体传参 传递数据
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1;
//void print1(struct stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(struct stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//struct stu s = { "李", 40, "1224536", "男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}				   内部定义
//结构体初始化	   .成员初始化