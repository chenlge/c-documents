#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <string.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c','\0'};
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int a = sizeof(arr1);
//	int b = sizeof(arr2);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//}


//int cmp(const void* p1, const void* p2)
//{
//	/*return *(int*)p1 - *(int*)p2;*/
//	return *(int*)p1 - *(int*)p2;
//}
//
//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//
//
//typedef struct student
//{
//	char name[20];
//	int age;
//}stu;
//int cmpst(const void* p1, const void* p2)
//{
//	/*return strcmp(((stu*)p1)->name, ((stu*)p2)->name);*/
//	return ((stu*)p1)->age - ((stu*)p2)->age;
//}
//void print1(stu* st,int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%s %d\n", st[a].name,st[a].age);
//	}
//}
//
//void test1()
//{
//	int arr[10] = { 0,1,2,8,2,4,7,2,52,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	print(arr, sz);
//	putchar('\n');
//	stu st[3] = { {"zhangsan",15},
//	{"lisi",20},
//	{"shuaige",24}
//	};
//	int sz1 = sizeof(st) / sizeof(st[0]);
//	qsort(st, sz1, sizeof(st[0]), cmpst);
//	print1(st, sz1);
//}
//
//void swap(char* p1, char* p2, int width)
//{
//	int i = 0, temp = 0;
//	for (i = 0; i < width; i++)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//}
//
//
//void myqsort(char* base, int num, int width, int (*cmp)(const void* p1, const void* p2))
//{
//	int i, j;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//		}
//	}
//}
//
//int cmp1(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test2()
//{
//	int arr[10] = { 0,1,2,8,2,4,7,2,52,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	myqsort(arr, sz, sizeof(arr[0]), cmp1);
//	print(arr, sz);
//}

//int cmp(const void* p1, const void* p2);
//void print(int* p, int sz);
//void myqbubble(void* base, int num, int sz, int (*mycmp)(const void* p1, const void* p2));
//
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//void swap(char* p1, char* p2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//}
//void myqbubble(void* base, int num, int sz, int (*mycmp)(const void* p1, const void* p2))
//{
//	int i, j;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (mycmp((char*)base + j * sz, (char*)base + (j + 1) * sz) > 0)
//				swap((char*)base + j * sz, (char*)base + (j + 1) * sz, sz);
//		}
//	}
//}
//void test()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*qsort(arr, sz, sizeof(arr[0]), cmp);*/
//	myqbubble(arr, sz, sizeof(arr[0]), cmp);
//	print(arr, sz);
//}
//int main()
//{
//	test();
//}

//int mycmp(const char* str1, const char* str2)
//{
//	while (*str1++ || *str2++)
//	{
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char a1[10] = "hahaxixi";
//	char a2[10] = "xixihehe";
//	printf("%d\n", strcmp(a1, a2));
//	printf("%d\n", mycmp(a1, a2));
//}



//int main()
//{
//
//
//	return 0;
//}



