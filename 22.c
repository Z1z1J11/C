#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>	
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	return 0;
//}
////int	 binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}  return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int k = 2;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ�����%d\n", ret);
//	}
//	return 0;
//}
//int main()	  {
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 &&year % 400 != 0)
//			printf("%d\n", year);
//	}	return 0;
//}
//int is(int n)
//{
//	int k = 0;
//	for (k = 2; k < n; k++)
//	{
//		if (n % k == 0)
//			return 0;
//
//	}	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is(i) == 1)
//			printf("%d", i);
//	} return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//				return 0;
//			else
//				return 1;
//		}
//		if (i % n == 1)
//			printf("%d\n", i);
//		}
//	} 
//void sw(int* p1, int* p2)
//{
//	int c = *p1;
//		* p1 = *p2;
//		*p2 = c;
//}
////void sw(int* p1, int* p2)
////{
////	int c = 0;
////	c = *p1;
////	*p1 = *p2;
////	*p2 = c;
////}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	sw(&a, &b);
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;

//}	 ��ֵ���� ��ַ����
/*void jh(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c; 
}
int main()
{
	int a = 10;
	int b = 20;
	jh(&a, &b);
	printf("a=%d\n b=%d\n", &a,&b);
	return 0;
}	*/				  /* ָ�뽻����ַ*/
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    *pa = 20;
//    printf("%d\n", a);
//    return 0;
//}
//void jh(int a, int b)
//{
//	int c = a;
//	 a = b;
//	 b = c;
//}		ʵ�ʲ�������ʽ����	     ��ʽ�������ı�ʵ�ʲ���
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d\n y=%d\n", x, y);
//	jh( x,  y);
//	//printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
////int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\nb=%d\n", a, b);
//		return 0;
//}
//int main()
//int get_max(int x, int y) 
//{					
//	if (x > y)
//		return  x;
//	else
//		return  y;
//}
//int main()
//{
//	int a = 10;
//    int b = 20;	
//    int max = get_max( a, b);
//    printf("max=%d\n",max);
//	return 0;
//}	�Զ��庯��
//ret_type fun_name(paral, *)
//{
//	statement;//�����
//}
//ret_type //��������
//fun_name //������
//paral   //��������
//{
//	char arr[] = "hello world";
//	memset(arr, 's', 5);
//	printf("%s\n", arr);
//	return 0;
//}	   ����	   sssss world
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, "s", 5);
//	printf("%s\n", arr);
//	return 0;
//}	���� 00000 world
//memset memory set �洢����
//{
//	//strlen-string length-�ַ�������
//	//strcpy-string copy-�ַ�������
//	char arr1[] = "bit\n";
//	char arr2[20] = "######";  //\0��ӡ������־
//	strcpy(arr2, arr1);
//	printf ("%s\n",arr2);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//		int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}