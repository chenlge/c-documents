#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int a = 0;
//	int* p = arr;
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d ", arr[*p]); 
//		p++;
//	}
//
//	/*scanf("%lf", &a);
//	printf("%lf\n", a);*/
//	return 0;
//}


//int len(char* p)
//{
//	return strlen(p);
//}
//int main()
//{
//	char a[] = { "abcde" };
//    printf("%d\n", len(a));
//    printf("%d\n", strlen(a));
//    printf("%lld\n", sizeof(a));
//}



//void print(int n)
//{
//	int i=0,k=0,j=0;
//	for (i = 1; i <= n; i++)
//	{
//		for (k = 1; k <= n - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= n-i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}


//int soda(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		if (x == 0)
//			return 0;
//		else
//			/*return x + soda(x / 2) + soda(x % 2); */
//			return 2*x - 1;
//}
//
//int main()
//{
//	int n = 0, sum = 0;
//	scanf( "%d", &n);
//	sum = soda(n);
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int a = 5, b = 6;
//    const int* p = &a;
//	p = &b;
//
//	printf("%d", *p);
//	return 0;
//}


//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-5d", *(p + i));
//	}
//}
//void move(int* p, int sz)
//{
//	int* left = p, * right = p + sz - 1;
//	while (left < right)
//	{
//		int temp = 0;
//		while (left < right && *left % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		temp = *left;
//		*left = *right;
//		*right = temp;
//	}
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	move(a, sz);
//	print(a, sz);
//	return 0;
//}


