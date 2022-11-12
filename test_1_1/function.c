#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//float volume(float x, float y, float z)
//{
//	float v = x * y * z;
//	return v;
//}
//int main()
//{
//	printf("Enter the length,width and height of the cuboid\n");
//	float a, b, c,d;
//	scanf("%f %f %f", &a, &b, &c);
//	d=volume(a, b, c);
//	printf("%f", d);
//	return 0;
//}
//int sum(int a, int b);
//int main()
//{
//	int a = 1, b = 3, c;
//	c = sum(a, b);
//	printf("%d %d %d\n", a, b, c);
//}
//int sum(int a, int b)
//{
//	a = a + b;
//	b = a + b;
//	return a;
//}
//void swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	for (int i = 0; i <= 10; i++)
//		putchar('*');
//	putchar('\n');
//	printf("%d %d\n", a, b);
//}
//int main()
//{
//	int x = 7, y = 11;
//	swap(x, y);
//	//printf("%d %d\n", x, y);
//	/*printf("%d\n", sizeof(float*));*/
//}

//int main()
//{
//	float a=8.0, b=4.0;
//	float x, y, z;
//	x = pow(a, b);
//	y = sqrt(b);
//	z = (a + b)/2;
//	printf("%f %f %f\n", x, y, z);
//}

//void pyramid(int n)
//{
//	for (int i = 1; i <=n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//			putchar(' ');
//		for (int k = 1; k <= i; k++)
//			printf("%d ", i);
//		putchar('\n');
//	}
//}
//int main()
//{
//	int row;
//	scanf("%d", &row);
//	pyramid(row);
//}

//int power(int a, int b)
//{
//	int p = a;
//	for (int i = 1; i < b; i++)
//		p *= a;
//	return p;
//}
//int total(int a, int b)
//{
//	int t = 0;
//	for (int i = 1; i <= a; i++)
//		t += power(i, b);
//	return t;
//}
//int main()
//{
//	int i, k;
//	puts("Enter the base number and exponent");
//	scanf("%d %d", &i, &k);
//	printf("sum=%d\n", total(i, k));
// return 0;
//}

//int fun(int n)
//{
	//int f;
	//if (n < 0)
	//	puts("error");
	//else
	//	if (n <= 1)
	//		f = 1;
	//	else
	//		f = n * fun(n - 1);
	//return f;
//}

//int power(int a, int b)
//{
//	int p;
//	if (b < 0)
//		puts("null");
//	else
//		if (b == 0)
//			p = 1;
//		else
//			p = a * power(a, b-1);
//	return p;
//}
//int main()
//{
//	//int n;
//	//puts("Please enter n");
//	//scanf("%d", &n);
//	//int sum;
//	//sum = fun(n);
//	//printf("n!=%d\n", sum);
//	/*int a, b, sum;*/
//	//scanf("%d %d", &a, &b);
//	//sum = power(a, b);
//	///*sum = pow(a, b);*/
//	//printf("sum=%d\n", sum);
//	//return 0;
//	int a, b, s=1;
//	scanf("%d %d",&a,&b);
//	for (int i = 0; i < b; i++)
//		s *= a;
//	printf("%d\n", s);
//}

//int judge(char c)
//{
//	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int sum=0	;
//	char str[100];
//	gets(str);
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (judge(str[i]))
//			sum++;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//void reverse(int p[], int n)
//{
//	int a, b, c;
//	for (a = 0, b = n - 1; a < b; a++, b--)
//	{
//		c = p[a];
//		p[a] = p[b];
//		p[b] = c;
//	}
//}
//int main()
//{
//	int arr[100];
//	puts("Please enter array length n");
//	int n;
//	scanf("%d", &n);
//	puts("Please enter n values of the array");
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	reverse(arr, n);
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	putchar('\n');
//
//	return;
//}

//int main()
//{
//	int count1 = 1;
//	do
//	{
//		int count2 = 0;
//		++count2;
//		printf("count1=%d count2=%d\n", count1, count2);
//	} while (++count1 <= 8);
//		printf("count1=%d\n", count1);
//	return 0;
//}

//float max,min;
//float average(float p[], int n)
//{
//	float  sum = 0;
//	max = min = p[0];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (p[i] > max)
//			max = p[i];
//		else
//			if (p[i] < min)
//				min = p[i];
//		sum += p[i];
//	}
//	return (sum / n);
//}
//
//int main()
//{
//	int n,i;
//	float ave,arr[100];
//	puts("Please enter the number n of numbers in the array");
//	scanf("%d", &n);
//	puts("Please enter n numbers in the array");
//	for (i = 0; i < n; i++)
//		scanf("%f", &arr[i]);
//	ave=average(arr, n);
//	printf("max=%.2f\n min=%.2f\n ave=%.2f\n", max, min, ave);
//}

//void swap();
//int main()
//{
//	extern int x, y;
//	x = 14;
//	y = 7;
//	printf("%d %d\n", x, y);
//	swap();
//	printf("%d %d\n", x, y);
//}
//
//int x, y;
//void swap()
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("%d %d\n", x, y);
//}

//#include "test.h"
//int x, y;
//int main()
//{
//	x = 14;
//	y = 7;
//	printf("%d %d\n", x, y);
//	swap();
//	printf("%d %d\n", x, y);
//	return 0;
//}

