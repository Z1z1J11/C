#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int len1 = strlen(str2);
//	if (len != len1)
//		return 0;
//	strncat(str1, str1,6);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else 
//	{
//		return 1;
//	}
//	/*strcat(arr1, arr1);*/
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}						  return 0;
//}
//int find(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y]>k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else {
//			return 1;
//		}
//	}  return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 8;
//	int ret=find(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到");
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int len = strlen("acbvdfg0");
//	printf("%d\n", len);
//	return 0;
//}	  计数器 递归 指针-指针
//int mm(const char* str)
//{
//	int count = 0;
//	assert(*str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//
//	}	return count;
//}
/*int main()
{
	char szz = "abccc";
	int sz = sizeof(szz);
	printf("%d\n",sz );
	return 0;
}	*/	/* strlen返回类型unsigned */
//char* mstrcpy(char* dest, const char* src)
//{
//	char* a = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	} return a;
//}
//int main()
//{
//	char arr1[] = "abcdeffghui";
//	char arr2[] = "nit";
//	mstrcpy(arr1, arr2);
//	return 0;
//}