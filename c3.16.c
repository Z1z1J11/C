#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define	_CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <assert.h>
using namespace std;
//int  main()
//{
	/*char a = 'zbc';*/
	/*char* const q = "abc";
	*q  = 'c';
	const char* p = "abcd";*/
	//*p = 'b';
	//const char* a = "p";
	//char *p[] = { a };
	/*char a[] = { 1,2 };
	char* p = { &a[2]};数组指针*/
//typedef char person;
//int main()
//{	
//	person p1('fre');
//	////person p1 ;
//	//const person* pa = &p1;
//	//const person **pd = &pa;
//	//person* qa = (person*)1;
//	//*pd = qa;	   对象是const
//	//person const* pb = &p1;
//	//person c = 1;
//	//pb = &c;  对象是const
//	//person* const pc = &p1;	  指针是const
//	//char* s = ;
//}
//int* f(int* x)
//{
//	(*x)++;
//	return x;
// }
//int x;
//int& h()
//{
//	return x;
//}
//int main()
//{
//	h() = 16;
//}
class A 
{
public:
	int i = 0;
public:
	A():i(10){}
};
class B:public A
{
private:
	int j;
public:
	B() :j(30) {}
	void f() { cout << j << endl; }
};
int main()
{
	A a;
	B b;
	cout << a.i << " " << b.i << endl;
	cout << sizeof(a) << " " << sizeof(b) << endl;
	int* p = (int*)&a;
	cout << p << " " << *p << endl;
	return 0;
}