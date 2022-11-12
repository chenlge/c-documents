#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
	//int b,*a;
	//b = pow(2, 3);
	//a = &b;
	//printf("%d\n%d\n",*a,b);
	//printf("%s\n", "25");
	//puts("25");
//	return;
//}

//int main()
//{
//	int a, * b,c;
//	a = 5;
//	b = &a;
//	printf("%d\n", *b);
//	c = *b;
//	printf("%d\n", c);
//	*b = 100;
//	printf("%d\n", *b);
//	c = *b;
//	printf("%d\n", c);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//int a, b, c;
//	//int* pa, * pb, * pc;
//	//pa = &a, pb = &b, pc = &c;
//	//scanf("%d %d %d", &*pa, *&pb, pc);
//	//printf("%d %d %d\n", a, b, c);
//
//	int b=9;
//	int* a = &b;
//	printf("%d\n", *a);
//	return 0;
//}

//void fibonacci(int p[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (i >= 0 && i <= 1)
//			p[i] = 1;
//		else
//			p[i] = p[i - 1] + p[i - 2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (i % 5 == 0)
//			putchar('\n');
//		printf("%-12d", p[i]);
//	}
//}
//int main()
//{
//	int a[100],n;
//	scanf("%d", &n);
//	fibonacci(a,n);
//	return 0;
//}

//void bubble(int p[], int n)
//{
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - i - 1; j++)
//			if (p[j] > p[j + 1])
//			{
//				k = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = k;
//			}
//	for (i = 0; i < n; i++)
//		printf("%d ", p[i]);
//	putchar('\n');
//}
//int main()
//{
//	int a[100],b,c;
//	scanf("%d", &b);
//	for(c=0;c<b;c++)
//	scanf("%d", &a[c]);
//	bubble(a, b);
//	return 0;
//}



//int main()
//{
//	int a[10]={1,2,3,4,5,6,7,8,9};
//	int* p;
//	//p = a;
//	p = &a[2];
//	printf("%d\n",p[2]);
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10];
//	int* d, * c;
//	c = a, d = b;
//	for (int i = 0; i < 10; i++)
//	{
//		b[i] = a[i];
//		*d = *c;
//		d++;
//		c++;
//	}
//	d = b;
//	for (int i = 0; i < 10; i++, d++)
//	{
//		printf("%d ", *d);
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int* a, * b, c[3] = {1,2,3};
//	a = c;
//	b = a+1;
//	printf("%d\n", *b);
//
//	return 0;
//}

//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} },i,j;
//	int* p;
//	p = &a[0][0];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("a[%d][%d]=%-2d  ", i, j, *p);
//			p++;
//		}
//		putchar('\n');
//	}
//	return 0;
// }

//int main()
//{
//	int a[2][3] = { { 1,2,3 } ,{4,5,6} };
//	int* p, b;
//	p = *a + 5;
//	printf("%d\n", *p);
//	printf("%d\n", *(*a + 2) + 3);
//}

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int (*p)[4];
//	p = a;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int k = 0; k < 4; k++)
//		{
//			printf("%d  ", *(*(p + i) + k));
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p[5], i, max = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = &a[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (*p[i] > max)
//			max = *p[i];
//	}
//	printf("%d\n", max);
//	printf("%d\n", *p[3]);
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int(*p)[4];
//	p = a;
//	int i, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%d ", p[i][k]);
//			}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char* a, * b = "Language hehe";
//	printf("%c\n", *b);
//	printf("%s\n", b);
//	putchar('\n');
//	return 0;
//}

//#include <string.h>
//char* a;
//char b[] = "Language";
//void reverse()
//{
//	a = b;
//	while (*a != '\0')
//		a++;
//	for (a--; a >= b; a--)
//		putchar(*a);
//	putchar('\n');
//
//}	
//
//int main()
//{
//	reverse();
//	/*char* a;
//	char b[] = "Language";
//	a = b;
//	while (*a != '\0')
//		a++;
//	for (a--; a >= b; a--)
//		putchar(*a);
//	putchar('\n');*/
//}

//void swap(int *a1,int *a2)
//{
//	int t;
//	t = *a1;
//	*a1 = *a2;
//	*a2 = t;
//}
//int main()
//{
//	int a = 2, b = 5;
//	int* b1 = &a, * b2 = &b;
//	swap(b1, b2);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int max_array(int* p, int n)
//{
//	int k = 0,i,max=*p;
//	for (i = 0; i < n; i++)
//	{
//		if (*(p + i) > max)
//		{
//			max = *(p + i);
//			k = i;
//		}
//	}
//	return k;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,4,65 };
//	int* b = a,k;
//	k=max_array(a, 10);
//	printf("max=%d\n max's subscript=%d\n", a[k], k);
//	return 0;
//}


//int add(int x, int y)
//{
//	int a_r;
//	a_r = x + y;
//	return a_r;
//}
//int subtract(int x, int y)
//{
//	int s_r;
//	s_r = x - y;
//	return s_r;
//}
//int product(int x, int y)
//{
//	int p_r;
//	p_r = x * y;
//	return p_r;
//}
//void process(int x, int y, int (*p)(int, int))
//{
//	int result;
//	result = (*p)(x, y);
//	printf("%d\n", result);
//}
//void main()
//{
//	int x, y;
//	printf("please enter two numbers\n");
//	scanf("%d %d", &x, &y);
//	process(x, y, add);
//	process(x, y, subtract);
//	process(x, y, product);
//}


//char* match(char* p, char ch)
//{
//	while (*p != '\0')
//	{
//		if (*p == ch)
//			return p;
//		else
//			p++;
//	}
//			return NULL;
//}
//int main()
//{
//	char str[100], ch, * a;
//	a = NULL;
//	puts("please enter a string");
//	//scanf("%s", str);
//	//getchar();
//	gets(str);
//	puts("please enter a character");
//	//scanf("%c", &ch);
//	ch = getchar();
//	if (match(str, ch) != NULL)
//	{
//		a = match(str, ch);
//		puts(a);
//	}
//	else
//		puts("character not in known string");
//	return 0;
//}

//int main()
//{
//	char* color[5] = { "red","green","blue","yellow","black" };
//	char** p;
//	for (int i = 0; i < 5; i++)
//	{
//		p = color + i;
//		/*printf("%s\n", *p);*/
//		puts(*p);
//		puts(*(color+i));
//		puts(color[i]);
//	}
//	return 0;
//}






//error
//#include <malloc.h>
//#include <stdlib.h>
//int main()
//{
//	int num, max, min,i;
//	int* p;
//	float sum, ave;
//	puts("请输入学生的人数:");
//	scanf("%d", &num);
//	if (num < 0)
//	{
//		puts("error");
//		exit(0);
//	}
//	else
//	{
//		p = (int*)calloc(num, sizeof(int));
//	}
//	if (p = NULL)
//	{
//		puts("空间不足");
//		exit(0);
//	}
//	puts("请输入学生成绩");
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", p+i);
//	}
//	sum = max = min = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (p[i] > max)
//			max = p[i];
//		if (p[i] < min)
//			min = p[i];
//		sum += p[i];
//	}
//	ave = sum / num;
//	printf("最高分为:%d\n最低分为:%d\n平均分为:%d\n", max, min, ave);
//	free(p);
//	return 0;
//}







