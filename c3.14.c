#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define	_CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<assert.h>
//#if 0
//void union(List& La, List& Lb)
//{
//	La_len = ListLength(La);
//	Lb_Len = ListLength(Lb);//�����Ա���
//	for (i = 1; i <= Lb_len; i++)
//	{
//		Getelem(Lb, i, e);//ȡLb�е�i��Ԫ�ظ�ֵ��e
//		if (!LocateElem(La, E, equal())��
//			ListInsert(La, ++La_len, e);
//		//La�в����ںͶ���ͬ������Ԫ�أ������
//	}
//}
//#endif
//void purge(List& La, List Lb)
//{
//	InitList(LA);
//	La_len = ListLengrh(La);
//	Lb_len = ListLength(Lb);
//	for (i = 1; i <= Lb_len; i++)
//	{
//		if (ListEmpty(LA) || !equal(en, e))
//		{
//			GetElem(Lb, i, e);//ȡLb�е�i��Ԫ�ظ�ֵe
//			ListInsert(La, ++La_len, e);
//			en = e;
//		}
//	}		   //La�в����ں�e��ͬ������Ԫ�أ�����
//}
//int main()
//{
//	int i = 0;
//	/*for (i = 0; i < 9; i++)
//	{*/
//	int c = i++;
//	/*int d = ++i;*/
//		printf("%d %d", c,i);
/*void bubble_sort(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{	
		int j = 0;
		for (j = i+1; j > i && j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}			
		}

	}
}
int main()
{
	int arr[] = { 9,8,6,8,4,2,11,78,63,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
		int i=0;
		for (i = 0; i < sz; i++)
		{
			printf("%d\n", arr[i]);
		}
	return 0;
}*/			//ð������
	//��ŵ��
//int main()
//{
//	/*int Index()*/
//		strcpy ('abc'; 'abcnvh');
//	printf("%s");
//	return 0;
//}
//void get_next(SString &T, int& next)
//{
//	int i = 1;
//	next[1] = 0;
//	int j = 0;
//	while (i < T[0])
//	{
//		if (j = 0 || T[i] = T[j])
//		{
//			++i;
//			++j;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
/*nt main()
{
	int a = 1;
	int b = 2;
	if ( a==2 || a * b ==2)
	{
		printf("yy");
	}	
	else
	{
		printf("nn");
	}
    return 0;0111111
}			 abcdefg
			 abcnzvh*/
//int main()
//{
//	int i = 1;
//	int next[] = { 0 };
//	int T[10];
//	int j = 0;
//	while (i < 10)
//	{
//		if ( T[i] = T[j])
//		{
//			++i;
//			++j;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int Index(SString S, SString T, int pos) {
//	//����T��S�е�pos���ַ�֮���λ��  
//	i = pos; j = 1; k = 0;
//	while (i < = S[0] && j < = T[0]) {
//		if (S[i + k] = = T[j]) { ++k;  ++j; }   //�����ȽϺ����ַ�  
//		else { i = i + 1;   j = 1; k = 0; }      //ָ����ݵ� ��һ��λ�����¿�ʼ  
//	}
//	if (j > T[0]) return i;          //�Ӵ�������˵��ƥ��ɹ�  
//	else return  0;
//}
