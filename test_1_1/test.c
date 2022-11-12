//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>
//int main()
//{
//	int i, j, a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} }, b[4][3];
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%d ", a[i][j]);
//				b[j][i] = a[i][j];
//		}
//		putchar('\n');
//	}
//	printf("置换后：\n");
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", b[i][j]);
//		}	
//		putchar('\n');
//	}
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(unsigned long));
//
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	char b = 1;
//	char c = a + b;
//	printf("%d %d", c, a + b);
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//			printf("   ");
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1 /*&& a != b && a != c && a != d && a != e
//							&& b != c && b != d && b != e && c != d && c != e && d != e*/)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								A = a, B = b, C = c, D = d, E = e;
//								printf("a=%d b=%d c=%d d=%d e=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	puts("***************************");
//	puts("*****      1.add      *****");
//	puts("*****      2.subtract *****");
//	puts("*****    3.multiply   *****");
//	puts("*****     4.divide    *****");
//	puts("*****     0.exit      *****");
//	puts("***************************");
//}
//int main()
//{
//	int (*pa[5])(int, int) = { NULL,add,sub,mul,div };
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0, y = 0,count=0;
//		puts("输入执行->");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			puts("请输入两个数");
//			scanf("%d %d", &x, &y);
//			count = (pa[input])(x, y);
//			printf("%d\n", count);
//		}
//		else if (input == 0)
//		{
//			puts("exit");
//			break;
//		}
//		else
//			puts("error");
//	} while (input);
//
//	return 0;
//}



//int add(int a, int b)
//{
//	return a + b;
//}
//
//int fun(int (*p)(int, int))
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	return p(a, b);
//}
//
//int main()
//{
//	int ret = fun(add);
//	printf("%d\n", ret);
//	return 0;
//}

//int a(int x, int y)
//{
//	return x + y;
//}
//int b(int x, int y)
//{
//	return x - y;
//}
//int fun(int (*p)(int, int))
//{
//	int x = 5, y = 3;
//	return p(x,y);
//}
//
//int main()
//{
//	//int* p[5];
//	//int* (*pa)[5];
//	//pa = &p;
//	//int a[5]={1,2,3,4,5};
//	//int b[5]={2,3,4,5,6};
//	//int* ap[2] = { a,b };
//	//int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[5] = a;
//	//for (int i = 0; i < 2; i++)
//	//	for (int k = 0; k < 5; k++)
//	//		printf("%d ", p[i][k]);
//	//int sum = fun(b);
//	//printf("%d\n", sum);
//	//int (*p[2])(int, int) = { a,NULL };
//	//int j = 8, k = 3;
//	//
//	//int (*p1[2])(int, int) = { b,NULL };
//	//int (*(*p2)[2])(int, int)=&p;
//	//int n =  ( * p2)[0](j, k);
//	//	//*a[5] (*a)[5]
//	//printf("%d", n);
//	return 0;
//}


