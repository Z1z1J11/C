#include <stdio.h>  
#include <string.h>
#include<math.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
void menu()
{
    printf("***************************\n");
    printf("**    1.play    0.exit   **\n");
    printf("***************************\n");
}
void game()
{
    printf("猜数字\n");
}
int main()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择");
        scanf ("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出");
            break;
        default :
            printf("选择错误");
            break;
        }
    } while (input);
    return 0;
}
//int main()
//{
//    int i = 1;
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 1;
//        for (j = 1; j <=i; j++)
//        {
//            printf("%d*%d=%-2d ", i, j, i * j);
//        }   printf("\n");
//    }
//  
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    int j = 1;
//    int c = 1;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= 9; j++)
//        {
//            if (i > j)
//                continue;
//            else
//                c = i * j;
//
//            printf("%d*%d=%d  ", i, j, c);
//        }  printf("\n");
//    } return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,5,6,8,7,9,66,55,1,22 };
//    int max = arr[0];
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 1; i < sz; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int arr[] = { 1, 3, 5, 7, 8, 9, 666, 2, 21, 33, 555, 10 }; 
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int max = arr[0];
//    
//    for (i = 1; i < sz; i++)
//    {
//        if (arr[i] > max)
//
//            max = arr[i];
//
//    }
//      
//    printf("%d", max);
//    return 0;
//}
//int main()
//{
//    int j = 0;
//    int k = 1;
//    double sum=0.0;
//    for(j = 1; j <= 100; j++)
//    {
//        sum += 1.0 / j * k;
//        k = -k;
//    }  
//    printf("%lf", sum);
//    return 0;
//}
//int  main()
//{
//    int  j = 1;    
//    double  sum = 0.0;
//    int k = 1;
//    while (j < 101)
//    {
//        j++;
//     
//      sum = (1.0 / j) * k;
//      k = -k;
//    }   printf("%lf\n", sum);
//    return 0;
////}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i <= 100; i++)
//    {
//        if (i % 10 == 9)
//        
//
//            count++;
//
//        else if (i / 10 == 9)
//
//                count++;
//        } printf("%d", count);
//  return 0;
//  }
/*nt main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20)

			break;

		if (b % 3 == 1)

		{
			b = b + 3;
			continue;
		}			 b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}*/
//{
//	int i = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//
//		for (j = 3; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}if (j = i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}if (j > sqrt(i))
//			{printf("%d\n", i);  }
//		}
//			return 0;
//}
 //算法优化	 算法次数减少
/*int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <=200; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)  break; 
        }
           

            if (j == i)

            {
                count++;
                printf("%d\n", i);
               
            }
        }
        printf("%d\n", count);
    return 0;
}	*/		  
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//            if (j == i)
//
//            {
//                count++;
//                printf("%d\n", i);
//            }
//        
//    }    printf("%d\n", count);
//    return 0;
//}		素数查找计数	   for嵌套
////int sum(int a)
////{
////    int c = 0;
////    static int b = 3;
////    c += 1;
////    b += 2;
////        return (a + b + c);   
////}
//int main()
//{
//    int i;
//    int a = 2;
//    for(i=0;i<5;i++)
//    {
//     printf("%d,", sum(a));
//    }
//}
//#include <stadio.h>
//int main
//{
//   internal 
//    for (i=0; i<10; i++)
//        {
//        if (i = 5)
//            printf (% d, i);
//    }
////    return 0;
////}   int i  = 0;

//#include <stdio.h>
//int main()
//{
//    int x = 3;
//    int y = 3;
//    switch (x % 2)
//    {
//        case 1:
//            switch (y)
//            {
//                case 0:
//                    printf("first");
//                case 1:
//                    printf("second");
//                    break;
//                default: printf("hello");

//            }
//        case 2:
//            printf("third");
//    }
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNING 1
//#include<stdio.h>
//int main()
//{
//    int a =0;
//    int b =0;
//    int c =0;
//    scanf ("%d %d %d\n",&a,&b,&c);
//    printf("")
//}

//void scanf(int a, int b, int c)
//{
//    throw new NotImplementedException();
//}
// int main()
//{
//    printf("==",2);
//    return 0;
//}