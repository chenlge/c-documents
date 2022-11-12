#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

//#define pi 3.1415926
//int main()
//{
//	//printf("%d\n",strlen("a\t"));
//	//printf("%s\n","ab\taj");
//	float r,h,c,s,bs,bv,cyv;
//	printf(" ‰»Î∞Îæ∂r,∏ﬂh\n");
//	scanf("%f %f", &r, &h);
//	c = 2 * pi * r;
//	s = r *r * pi;
//	bs = 4 * pi * r * r;
//	bv = 4 / 3 * pi * r*r*r;
//	cyv = pi * r * r * h;
//	printf("%.2f %.2f %.2f %.2f %.2f\n",c,s,bs,bv,cyv );
//
//		return 0;
//}


//void test1()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));
//	printf("%lld\n", sizeof(a+0));
//	printf("%zd\n", sizeof(*a));
//	printf("%zd\n", sizeof(a+1));
//	printf("%zd\n", sizeof(a[1]));
//	puts("\n");
//	printf("%zd\n", sizeof(&a));
//	printf("%zd\n", sizeof(*&a));
//	printf("%zd\n", sizeof(&a+1));
//	printf("%zd\n", sizeof(&a[0]));
//	printf("%zd\n", sizeof(&a[0]+1));
//	puts("\n");
//	int a1 = 5;
//	int* p1 = &a1;
//	printf("%zd\n", sizeof(*p1));
//	printf("%zd\n", sizeof(p1));
//}
//void test2()
//{
//	char a1[] = { 'a','b','c','d','e' };
//	char a2[] = { "abcde" };
//	printf("%zd\n", sizeof(a1));
//	printf("%zd\n", sizeof(a2));
//	printf("%zd\n", strlen(a1));
//	printf("%zd\n", strlen(a2));
//}

//void test3()
//{
//	int a = 1;
//	printf("%d\n", a++);
//	printf("%d\n", ++a);
//	printf("%d\n", ++a);
//}
//void test4()
//{
//	int a = 15;
//	printf("%d ", printf("%d ", printf("%d ", a)));
//}

//void test();
//int lookup(int arr[3][3], int* px, int* py, int num);
//int lookup(int arr[3][3],int* px,int *py,int num)
//{
//	int x = 0, y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < num)
//		{
//			x++;
//		}
//		else if (arr[x][y] > num)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//void test()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3, y = 3, num = 8;
//	int ret = lookup(arr, &x, &y, num);
//	if (ret)
//	{
//		puts("Found!");
//		printf("Subscript is %d %d", x, y);
//	}
//	else
//	{
//		puts("NO Found!");
//	}
//}
//int main()
//{
//	test();
//}

//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i = 0, j = 0, k = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] < target)
//        {
//            j = target - nums[i];
//            for (k = i + 1; k < numsSize - i; k++)
//            {
//                if (nums[k] < target)
//                {
//                    if (nums[k] == j)
//                    {
//                        returnSize[0] = i;
//                        returnSize[1] = k;
//                    }
//                }
//            }
//        }
//    }
//    return returnSize;
//}
//int main()
//{
//    int numsSize = 0;
//    scanf("%d", &numsSize);
//    int nums[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        scanf("%d", &nums[i]);
//    }
//    int target = 0;
//    scanf("%d", &target);
//    int returns[2] = { 0 };
//    int* p=twoSum(nums, numsSize, target, returns);
//    for (i = 0; i < 2; i++)
//    {
//        printf("%d ", p[i]);
//    }
//}



#include <time.h>
int main()
{
	int m = 0, n = 0, num = 0;
	srand(time(NULL));
	//srand(getpid(0));
	scanf("%d %d", &m, &n);
	for (int i = 0; i < 10; i++)
	{
		num = m + rand() % (n - m + 1);
		//num = m + (rand() * (n - m + 1) / (RAND_MAX + 1));
		printf("%d ", num);
	}
	return 0;
}
