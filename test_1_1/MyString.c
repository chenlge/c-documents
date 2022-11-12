#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>


//int Mystrlen(char* p)
//{
//	int num=0;
//	while (*p)
//	{
//		num++;
//		p++;
//	}
//	return num;
//}
//double Mypow(double a, double b)
//{
//	double c=1.0,i=0;
//	if (b == 0)
//		c = 1.0;
//	else
//		if(b>0)
//	for (i = 0; i < b; i++)
//	{
//		c *= a;
//	}
//		else
//			for (i = 0; i < -b; i++)
//			{
//				c /= a;
//			}
//	return c;
//}
//
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

//double Mysqrt(double x)
//{
//	//if (x <= 0)
//	//	return 0.0;
//	//double left = 1.0;
//	//double right = 1.0+(x/2.0);
//	//double mid=0.0;
//	//double lastmid=0.0;
//	//mid = left + (right - left) / 2.0;
//	//do
//	//{
//	//	if (mid < x / mid)
//	//		left = mid;
//	//	else
//	//		right = mid;
//	//	lastmid = mid;
//	//	mid = left + (right - left) / 2.0;
//	//} while (abs(lastmid) > FLT_MIN);
//	//return lastmid;
//
//}
//
//int main()
//{
//	//int* tp = "abcdeefg";
//	//printf("%d\n", strlen(tp));
//	//printf("%d\n",Mystrlen(tp));
//
//
//	//double a = -3.0, b = 2.0,c=0.0,d=0.0;
//	//c = pow(a, b);
//	//d = Mypow(a, b);
//	//printf("c=%lf\nd=%lf", c,d);
//
//
//	double a = 4.0, b = 0.0, c = 0.0;
//	b = sqrt(a);
//	c = Mysqrt(a);
//	printf("b=%lf\nc=%lf\n", b, c);
//}


#include <assert.h>
////模拟实现strcpy函数
//char* MyStrcpy(char* str1,const char* str2)
//{
//	assert(str2 != NULL);
//	assert(str1 != NULL);
//	char* ret=str1;
//	while (*str1++ = *str2++);
//	return ret;
//}
//int main()
//{
//	char Str1[20] = { "hahaha" };
//	char Str2[10] = { "hehe" };
//	printf("%s\n", MyStrcpy(Str1, Str2));
//	printf("%s\n", strcpy(Str1, Str2));
//}



//模拟实现strlen函数
//size_t Mystrlen(const char* str1)
//{
//	assert(str1 != NULL);
//	char* str2 = str1;
//	while (*str2++);
//	return (str2-str1-1);
//}
//int main()
//{
//	char str[10] = { "hahaha" };
//	printf("%lld\n", strlen(str));
//	printf("%lld\n", Mystrlen(str));
//	return 0;
//}



//模拟实现strlcat函数
//char* Mystrcat(char* st1,const char* st2)
//{
//	char* p = st1;
//	while (*p)
//		p++;
//	while (*p++ = *st2++);
//	return st1;
//}
//int main()
//{
//	char str1[20] = { "hahaha" };
//	char str2[10] = { "xixi" };
//	/*printf("%s\n", strcat(str1,str2));*/
//	printf("%s\n", Mystrcat(str1,str2));
//	return 0;
//}




