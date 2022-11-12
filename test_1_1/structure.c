#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct student
//{
//	long long num;
//	char name[20];
//	char sex;
//	int age;
//	struct date birthday;
//}stu1 = { 6802240556,"chen",'M',24,{1998,05,03} };
//
//int main()
//{
//	printf("num=%lld\n name=%s\n sex=%c\n age=%d\n birthday=%d-%d-%d\n", stu1.num, stu1.name, stu1.sex, stu1.age,stu1.birthday.year, stu1.birthday.month, stu1.birthday.day);
//	printf("%d\n", sizeof(stu1));
//	return 0;
//}


//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	struct date birthday;
//};
//int main()
//{
//	struct student stu[3] = { {1001,"abc",'F',18,{1998,05,03}},{1002,"efg",'M',19,{2000,10,
//		25}},{1003,"jkm",'F',20,{1995,12,30}} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num = % d    name = % s    sex = % c     age = % d    birthday = % d - % d - % d\n", stu[i].num, stu[i].name, stu[i].sex, stu[i].age, stu[i].birthday.year, stu[i].birthday.month, stu[i].birthday.day);
//	}
//	return 0;
//}

//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct student
//{
//	long long num;
//	char name[20];
//	struct date birthday;
//};
//int main()
//{
//	struct student stu[3];
//	int i;
//	puts("请输入三个学生的信息");
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入第%d位学生的学号:", i + 1);
//		scanf("%lld", &stu[i].num);
//		printf("请输入第%d位学生的姓名:", i + 1);
//		scanf("%s", stu[i].name);
//		printf("请输入第%d位学生的出生年月日:", i + 1);
//		scanf("%d %d %d", &stu[i].birthday.year, &stu[i].birthday.month, &stu[i].birthday.day);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("\n第%d位学生的学号为:%lld\n", i + 1, stu[i].num);
//		printf("第%d个学生的姓名为:%s\n", i + 1, stu[i].name);
//		printf("第%d个学生的出生年月日为:%d-%d-%d\n", i + 1, stu[i].birthday.year,
//			stu[i].birthday.month, stu[i].birthday.day);
//	}
//	return 0;
//}


//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//};
//int main()
//{
//	struct student stu1;
//	struct student* pst1;
//	pst1 = &stu1;
//	stu1.num = 1001;
//	strcpy(stu1.name, "chen");
//	stu1.sex = 'M';
//	stu1.age = 20;
//	printf("num=%d    name=%s    sex=%c     age=%d\n", stu1.num, stu1.name, stu1.sex, stu1.age);
//	printf("num=%d    name=%s    sex=%c     age=%d\n", (*pst1).num, (*pst1).name, (*pst1).sex, (*pst1).age);
//	printf("num=%d    name=%s    sex=%c     age=%d\n", pst1->num,pst1->name,pst1->sex,pst1->age);
//
//	return 0;
//}

//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//};
//int main()
//{
//	struct student stu[3]={{1001,"chen",'M',20},{1002,"ahsh",'F',21},{1003,"asjdf",'M',22}};
//	struct student* pst;
//	for (pst = stu; pst < stu + 3; pst++)
//	{
//		printf("num=%d    name=%s    sex=%c    age=%d\n", pst->num, pst->name, pst->sex, pst->age);
//		printf("num=%d    name=%s    sex=%c    age=%d\n", (*pst).num, (*pst).name, (*pst).sex, (*pst).age);
//	}
//	printf("%d\n", sizeof(stu));
//	return 0;
//}



//#include <malloc.h>
//#include <stdlib.h>
//void swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int x=1, y=2;
//	swap(&x, &y);
//	printf("%d   %d\n", x, y);
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	int num;
//	char* name;
//	float score[3];
//};
//float average(float score1, float score2, float score3)
//{
//	float ave;
//	ave = (score1 + score2 + score3) / 3;
//	return ave;
//}
//int main()
//{
//	struct student stu;
//	float ave;
//	stu.num = 1001;
//	stu.name = "chen";
//	stu.score[0] = 87.6f;
//	stu.score[1] = 78.2f;
//	stu.score[2] = 84.1f;
//	ave=average(stu.score[0], stu.score[1], stu.score[2]);
//	printf("%d %s %f\n", stu.num, stu.name,ave);
//}


//int main()
//{
//	int a = 0b1010;
//	int b = 10;
//	int c = 012;
//	int d = 0xa;
//	float e = 87.6f;
//	printf("%d     %d    %d   %d\n", a, b, c, d);
//	printf("%o     %o    %o   %o\n", a, b, c, d);
//	printf("%#o     %#o    %#o   %#o\n", a, b, c, d);
//	printf("%x     %x    %x   %x\n", a, b, c, d);
//	printf("%#x     %#x    %#x   %#x\n", a, b, c, d);
//	printf("%f\n", e);
//}\

//struct student
//{
//	int num;
//	char* name;
//	float score[3];
//};
//float average(struct student stud)
//{
//	float aver;
//	float sum = 0;
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		sum += stud.score[i];
//	}
//	aver = sum / 3;
//	return aver;
//}
//int main()
//{
//	struct student stu;
//	float ave;
//	stu.num = 1001;
//	stu.name = "chen";
//	stu.score[0] = 87.6f;
//	stu.score[1] = 78.2f;
//	stu.score[2] = 84.1f;
//	ave = average(stu);
//	printf("%d %s %f\n", stu.num, stu.name, ave);
//	return 0;
//}

//struct student
//{
//	int num;
//	char* name;
//	float score[3];
//};
//float average(struct student *pstu)
//{
//	float aver;
//	float sum = 0;
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		/*sum += (*pstu).score[i];*/
//		sum += pstu->score[i];
//	}
//	aver = sum / 3;
//	return aver;
//}
//int main()
//{
//	struct student stu;
//	float ave;
//	stu.num = 1001;
//	stu.name = "chen";
//	stu.score[0] = 87.6f;
//	stu.score[1] = 78.2f;
//	stu.score[2] = 84.1f;
//	ave = average(&stu);
//	printf("%d %s %f\n", stu.num, stu.name, ave);
//	return 0;
//}


//union data
//{
//	int a;
//	char* b;
//	float c;
//}da;
//int main()
//{
//	printf("%d\n", sizeof(da));
//	return 0;
//}

//union exx
//{
//	int a;
//	int b;
//	struct
//	{
//		int c;
//		int d;
//	}lpp;
//}e={10};
//int main()
//{
//	printf("%d\n", e.lpp.c);
//	printf("%d\n", e.lpp.d);
//	printf("%d\n", e.b);
//	printf("%d\n", e.a);
//	e.a = e.b + 20;
//	e.lpp.c = e.a + e.b;
//	e.lpp.d = e.a * e.b;
//	printf("%d   %d\n", e.lpp.c, e.lpp.d);
//	return 0;
//}

#include <stdlib.h>
//struct data
//{
//	long long num;
//	char* name[10];
//	char sex;
//	char identity;
//	union 
//	{
//		int classnum;
//		char office[10];
//	}category;
//}person[2];
//
//int main()
//{
//	int i;
//	for (i = 0; i < 2; i++)
//	{
//		puts("请输入编号：");
//		scanf("%lld", &person[i].num);
//		getchar();
//		puts("请输入姓名：");
//		gets(person[i].name);
//		puts("请输入性别M/F：");
//		person[i].sex = getchar();
//		getchar();
//		puts("请输入职业T/S：");
//		person[i].identity = getchar();
//		getchar();
//		if (person[i].identity == 'S' || person[i].identity == 's')
//		{
//			puts("请输入班级号：");
//			scanf("%d", &person[i].category.classnum);
//			getchar();
//		}
//		else
//			if (person[i].identity == 'T' || person[i].identity == 't')
//			{
//				puts("请输入职称：");
//				gets(person[i].category.office);
//			}
//			else
//				puts("error");
//	}
//	puts("\n");
//	puts("No.       name       Sex        identity        class/office");
//	for (i = 0; i < 2; i++)
//	{
//		printf("%-10lld%-11s", person[i].num, person[i].name);
//		if (person[i].sex == 'M' || person[i].sex == 'm')
//		{
//			printf("男");
//		}
//		if (person[i].sex == 'F' || person[i].sex == 'M')
//		{
//			printf("女");
//		}
//		if (person[i].identity == 'T' || person[i].identity == 't')
//		{
//			printf("\t\t教师\t\t");
//		}
//		if (person[i].identity == 'S' || person[i].identity == 's')
//		{
//			printf("\t\t学生\t\t");
//		}
//		if (person[i].identity == 'T' || person[i].identity == 't')
//		{
//			puts(person[i].category.office);
//		}
//		if (person[i].identity == 'S' || person[i].identity == 's')
//		{
//			printf("%d\n", person[i].category.classnum);
//		}
//		}
//	return 0;
//}




//enum weekdays
//{
//	Sun, Mon, Tue, Wed, Thu, Fri, Sat
//};
//void main()
//{
//	enum weekdays day1, day2;
//	day1 = Sun;
//	day2 = day1;
//	printf("%d   %d", day1, day2);
//	return 0;
//}

//#include <stdlib.h>
//enum colors
//{
//	red,blue,green,black,white,yellow
//};
//int main()
//{
//	enum colors col[6];
//	int n, j;
//	puts("1:red,2:blue,3:green,4:black,5:white,6:yellow");
//	puts("请输入6个颜色的数目");
//	for (j = 0; j < 6; j++)
//	{
//		scanf("%d", &n);
//		if (n < 0 || n>5)
//		{
//			puts("输入颜色的值出错，请重新输入");
//			exit(0);
//		}
//		else
//		{
//			switch(n)
//			{
//				case 0:col[j] = red; break;
//				case 1:col[j] = blue; break;
//				case 2:col[j] = green; break;
//				case 3:col[j] = black; break;
//				case 4:col[j] = white; break;
//				case 5:col[j] = yellow; break;
//			}
//		}
//	}
//	for (j = 0; j < 6; j++)
//	{
//		switch (col[j])
//		{
//		case red:printf("red"); break;
//		case blue:printf("blue"); break;
//		case green:printf("green"); break;
//		case black:printf("black"); break;
//		case white:printf("white"); break;
//		case yellow:printf("yellow"); break;
//		}
//		printf("\t");
//	}
//	printf("\n");
//	return 0;
//}


//enum colors
//{
//	red,blue,green
//};
//void show(enum colors color)
//{
//	switch (color)
//	{
//	case red:printf("red "); break;
//	case blue:printf("blue "); break;
//	case green:printf("green "); break;
//	}
//}
//int main()
//{
//	enum colors color1, color2, color3;
//	int count=0;
//	for (color1 = red; color1 <= green; color1++)
//	{
//		for (color2 = red; color2 <= green; color2++)
//		{
//			for (color3 = red; color3 <= green; color3++)
//			{
//				show(color1);
//				show(color2);
//				show(color3);
//				printf("          ");
//				count++;
//				/*if (count % 3 == 0)
//					printf("\n");*/
//			}
//			printf("\n");
//		}
//	}
//	printf("有%d种排列组合\n", count);
//	return 0;
//}

//int main()
//{
//	typedef int in;
//	in a, b;
//	b = 5;
//	a = b;
//	typedef int* ip;
//	ip p;
//	p = &a;
//	printf("%d %d %d\n", a, b, *p);
//}

