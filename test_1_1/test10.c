#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//#include"test.h"
//void sign()
//{
//	puts("****************");
//}
//float ave(float num1, float num2)
//{
//	float average;
//	average = (num1 + num2) / 2;
//	return average;
//}
//int ns()
//{
//	float nums[100];
//	int i, sum = 0, word = 0;
//	for (i = 0; nums[i] != '\n'; i++)
//	{
//		scanf("%f", &nums[i]);
//	}
//	for (i = 0; nums[i] != '\n'; i++)
//	{
//		if (nums[i] == ' ')
//			word = 0;
//		else
//			if (word ==0)
//			{
//				word = 1;
//				sum++;
//			}
//	}
//	return sum;
//}

//#include "test.h"
//extern x, y;
//void swap()
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("%d %d\n", x, y);
//}


//void sort(int n, int* p1)
//{
//	int i,k,temp;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (k = 0; k < n - i - 1; k++)
//		{
//			if (*(p1 + k) > *(p1 + k + 1))
//			{
//				temp = *(p1 + k);
//				*(p1 + k) = *(p1 + k + 1);
//				*(p1 + k + 1) = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n,nu;	
//	int a[100];
//	puts("请输入数字个数n");
//	scanf("%d", &n);
//	getchar();
//	printf("请输入%d个数\n", n);
//	for (nu = 0; nu < n; nu++)
//	{
//		scanf("%d", &a[nu]);
//	}
//	sort(n, a);
//	for (nu = 0; nu < n; nu++)
//	{
//		printf("%d  ", a[nu]);
//	}
//	return 0;
//}

//int main()
//{
//	char str[100];
//	sscanf("abcd&Hello$why", " % [^ ]", str);
//	printf("%s\n", str);
//
//}
//#include <time.h>
//int main()
//{
//	srand(time(NULL));
//	//srand(getpid(NULL));
//	int num1, num2;
//	num1 = 10 + (int)rand() % 11;
//	num2 = 10 + (int)(11.0 * rand() / (RAND_MAX + 1.0));
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	//float a,b;
//	//b = 5.6;
//	//a = (int)b;
//	//printf("%d\n", (int)a);
//}

//int main()
//{
//	int i = 0;
//	//char a[5]={'\0'};
//	/*a[3] = 'b';
//	*(a + 2) = 'c';*/
//	//scanf("%s", a);
//	//for (i = 0; i < 5; i++)
//	//{
//	//	a[i] = 1;
//	//}
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%c", a[i]);
//	//}
//	//printf("\n");
//	//printf("%s\n", a);
//	char a[10];
//	while (1)
//	{
//		a[i] = 1 + '0';
//		i++;
//		if (i == 10)
//			break;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c", a[9]);
//	}
//
//}


//int main()
//{
//	int a = 10;
//	char st[1000];
//	_itoa(a, st, 2);
//	printf("%s", st);
//}

//void swap(int* a, int* b)
//{
//	*a =*a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	/*int a=0;
//	printf("%d", a);*/
//
//	return 0;
//}

//char binary(char* st,int integer)
//{
//	_itoa(integer, st, 2);
//	puts(st);
//}
//void MyRadix(int Mynum, char* Myst, int Myradix)
//{
//	int i = 0, j = 0;
//	char temp[100];
//	while (Mynum)
//	{
//		temp[i] = Mynum % Myradix+'0';
//		Mynum /= Myradix;
//		i++;
//	}
//	for (j = 0, i -= 1; i >= 0; j++, i--)
//	{
//		Myst[j] = temp[i];
//	}
//	Myst[j] = '\0';
//}

//int num1(char* binary)
//{
//	int a = 0, b = 31;
//	for (a = 0; a < 32; a++,b--)
//	{
//		if((binary[31]-'0')&1==1)
//
//	}
//
//
//}

//int main()
//{
//	int a = 0;
//	char st[33];
//	int nu;
//	scanf_s("%d",&nu);
//	binary(st, nu);
//	MyRadix(nu, st, 2);
//	printf("%s", st);
//	_itoa(nu, st, 2);
//	for (a = 0; a <33; a++)
//	{
//		putchar(st[a]);
//	 }
//	putchar('\n');
//
//
//	return 0;
//}

//int num1(int num)
//{
//	int i=0, count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num & 1) == 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d\n",num1(a));
//}

//int main()
//{
//	/*int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d", a, b, c, d);*/
//
//	int a=0, b=0;
//	b = (a > 5 ? 1 : -1);
//	printf("%d", b);
//}


//void test2(int i)
//{
//	i++;
//	printf("%d",i);
//}
//void test1(int i)
//{
//	i++;
//	test2(i);
//}
//int main()
//{
//	int i = 0;
//	test1(i);
//	return 0;
//}


//int main()
//{
//	int a[100]={0};
//	int i=0, j=0;
//	for (i = 0; i < 100; i++)
//	{
//		a[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\t", a[i]);
//		if (a[i] % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}




//int dinu(int num1, int num2)
//{
//	int num0 = num1 ^ num2;
//	int sum = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num0 >> i & 1)
//			sum++;
//	}
//	return sum;
//}
//int dinu1(int num1, int num2)
//{
//	int num0 = num1 ^ num2;
//	int sum = 0;
//	while (num0)
//	{
//		num0 &= num0 - 1;
//		sum++;
//	}
//	return sum;
//}
//int sone(int num)
//{
//	int sum = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//			sum++;
//	}
//	return sum;
//}
//int sone1(int num)
//{
//	int sum = 0;
//	while (num)
//	{
//		num &= num - 1;
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 1999, b = 2299, c = 15, d = -1;
//	int i = 22, k = 33;
//	printf("%d\n", dinu(a, b));
//	printf("%d\n", dinu1(a, b));
//	printf("%d\n", dinu1(i, k));
//	printf("%d\n", sone(c));
//	printf("%d\n", sone(d));
//	printf("%d\n", sone1(c));
//	printf("%d\n", sone1(d));
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	scanf_s("%d", &num1);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//		printf("%d ", num1 >> i & 1);
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d ", num1 >> i & 1);
//}

//void swap(int* a,int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *b ^ *a;
//	//*a = *a + *b;
//	//*b = *a - *b;
//	//*a = *a - *b;
//}
//int main()
//{
//	//int a = 0, b = 0;
//	//scanf_s("%d  %d", &a, &b);
//	//swap(&a, &b);
//	//printf("%d %d", a, b);
//
//	double* a;
//	printf("%d\n", sizeof(a));
//
//}


//int main()
//{
//	int a=0, b=0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	int n = a < b ? a : b;
//	int i = 1;
//	while (1)
//	{
//		if ((m % a == 0) && (m % b == 0))
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//		
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}	
//	while (1)
//	{
//		if ((a % n == 0) && (b % n == 0))
//		{
//			printf("%d\n", n);
//			break;
//		}
//		n--;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p)
//		puts("小端");
//	else
//		puts("大端");
//}

//#include <limits.h>
//int main()
//{
//	INT_MAX;
//}

//void reverse(char* p)
//{
//	char* fir = p;
//	while (*p++);
//	char temp;
//	for (p -= 2; fir < p; fir++, p--)
//	{
//		/**fir = *fir ^ *p;
//		*p = *fir ^ *p;
//		*fir = *fir ^ *p;*/
//		temp = *p;
//		*p = *fir;
//		*fir = temp;
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	/*scanf_s("%[^\n]", str,100);*/
//	gets_s(str,100);
//	reverse(str);
//	printf("%s\n", str);
//}



//
//int main()
//{
//	//	char* p = "hello world";
//	//	puts(p);
//	//	printf("%c\n", *(p+1));
//	//	printf("%s\n", p);
//	//
//
//	//int i = 0, k = 0;
//	//int a[] = { 1,2,3 };
//	//int b[] = { 4,5,6 };
//	//int c[] = { 7,8,9 };
//	//int* arr[] = { a,b,c };
//	//int** p = arr;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (k = 0; k < 3; k++)
//	//	{
//	//		printf("%d\t", *(arr[i] + k));
//	//	}
//	//	printf("\n");
//	//}
//	//printf("\n");
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (k = 0; k < 3; k++)
//	//	{
//	//		printf("%d\t", *(*(p + i) + k));
//	//	}
//	//	printf("\n");
//	//}
//	//printf("\n");
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (k = 0; k < 3; k++)
//	//	{
//	//		printf("%d\t", arr[i][k]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//int arr[2][3][4];
//	//int i = 0, j = 0, k = 0;
//	//for (i = 0; i < 2; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		for (k = 0; k < 4; k++)
//	//		{
//	//			scanf("%d", &arr[i][j][k]);
//	//		}
//	//	}
//	//}	
//	//for (i = 0; i < 2; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		for (k = 0; k < 4; k++)
//	//		{
//	//			printf("%d\t", arr[i][j][k]);
//	//		}
//	//		printf("\n");
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//double* arr[5] = { 0 };
//	//double* (*p1)[5] = &arr;
//	//double** p2 = arr;
//	//printf("%p\n", p1);
//	//printf("%p\n", &arr);
//	//printf("%p\n", p2);
//	//printf("%p\n", arr);
//	
//	/*int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);*/
//
//
//	extern a;
//	printf("%d\n", a);
//}
//int a;



//int sn(int m,unsigned int n)
//{
//	if (n == 1)
//		return m;
//	else
//		return (sn(m, n - 1)) * 10 + m;
//}
//int main()
//{
//	extern void sum(int a, unsigned int b);
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf_s("%d %d", &a, &b);
//	for (c = 1; c<=b; c++)
//	{
//		printf("%d\t", sn(a, c));
//		d += sn(a, c);
//	}
//	printf("\n");
//	printf("%d\n", d);
//	sum(a, b);
//	return 0;
//}
//void sum(int a, unsigned int b)
//{
//	int s1 = 0, i = 0, s2 = 0;
//	for (i = 0; i < b; i++)
//	{
//		s1 = s1 * 10 + a;
//		s2 += s1;
//		printf("%d\t", s1);
//	}
//	printf("\n");
//	printf("%d\n",s2);
//}

//int main()
//{
//	int i = 0;
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = a;
//	int k = sizeof(a) / sizeof(a[0]);
//	//int* pend = &a[k - 1];
//	int* pend = a+k-1;
//	for(;p<=pend;p++)
//		printf("%d ", *p);
//
//	/*for (i = 0; i < k; i++)
//		printf("%d ", *(p + i));*/
//
//	return 0;
//}
//int main()
//{
//
//
//	return 0;
//}


//unsigned int fibonacci(int num)
//{
//	if (num == 1 || num == 2)
//		return 1;
//	else
//		return fibonacci(num - 1) + fibonacci(num - 2);
//}
//int main()
//{
//	int a = 0, num = 0;
//	scanf("%d", &num);
//	for (a = 1; a <= num; a++)
//	{
//		printf("%d\t", fibonacci(a));
//		if (a % 5 ==0)
//			printf("\n");
//	}
//	printf("\n");
//	return 0;
//}




//double Mypow(double a, double b)
//{
//	if (b == 0)
//		return 1.0;
//	else
//		if (b > 0)
//			return a * Mypow(a, b - 1);
//		else
//			return 1.0 / Mypow(a, -b);
//}



#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int temp = i, sum = 0, n = 0;
//		while (temp)
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d\t", i);
//	}
//}


