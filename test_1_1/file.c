#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//FILE* fp;
//	//if ((fp = fopen("D:\\text.txt", "wt+")) == NULL)
//	//{
//	//	printf("cannot open file\n");
//	//	exit(0);
//	//}
//	//else
//	//{
//	//	printf("open file\n");
//	//	fclose(fp);
//	//}
//
//
//	//if (rename("D:\\text.txt", "D:\\newtext.txt") == 0)
//	//{
//	//	printf("rename success!\n");
//	//}
//	//else
//	//{
//	//	printf("rename failure!\n");
//	//}
//
//
//	//if ((remove("D:\\newtext.txt")) == 0)
//	//{
//	//	puts("remove success!");
//	//}
//	//else
//	//{
//	//	puts("remove failure!");
//	//}
//
//	return 0;
//}



//int main()
//{
//	FILE* fp; 
//	char ch;
//	if ((fp = fopen("D:\\text.txt", "at+")) == NULL)
//	{
//		printf("file error!\n");
//		exit(0);
//	}
//	puts("Input a string(ENTER for end input)");
//	while ((ch = getchar()) != '\n')
//	{
//		fputc(ch, fp);
//	}
//	fclose(fp);
//	return 0;
//}

//int main()
//{
//	FILE* fp;
//	char ch;
//	if ((fp = fopen("D:\\text.txt", "rt")) == NULL)
//	{
//		puts("file open error!");
//		exit(0);
//	}
//	while ((ch = fgetc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//	putchar('\n');
//	fclose(fp);
//	return 0;
//}


//int main()
//{
//	FILE* fp;
//	char ch[20];
//	if ((fp = fopen("D:\\text.txt", "at+")) == NULL)
//	{
//		puts("file open error!");
//		exit(0);
//	}
//	puts("input a string");
//	gets(ch);
//	fputc('\n', fp);
//	fputs(ch, fp);
//	fclose(fp);
//	return 0;
//}

//int main()
//{
//	FILE* fp;
//	char ch[20];
//	if ((fp = fopen("D:\\text.txt", "at+")) == NULL)
//	{
//		puts("file error");
//		exit(0);
//	}
//	puts("output a string");
//	while ((fgets(ch, 10, fp)) != NULL)
//	{
//		printf("%s", ch);
//	}
//	//fgets(ch, 20, fp);
//	//puts(ch);
//	putchar('\n');
//	fclose(fp);
//	return 0;
//}


//int main()
//{
//	FILE* fp;
//	if ((fp = fopen("D:\\text.txt", "wt+")) == NULL)
//	{
//		puts("failure");
//		exit(0);
//	}
//	char ch[100];
//	gets(ch);
//	fputs(ch, fp);
//	fclose(fp);
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	student stu;
//	//puts("请输入学生学号、姓名、年龄");
//	//scanf("%d %s %d", &stu.num, &stu.name, &stu.age);
//	if ((fp = fopen("D:\\text.txt", "at+")) == NULL)
//	{
//		puts("cannot open file");
//		exit(0);
//	}
//	//fprintf(fp, "%d   %s   %d", stu.num, stu.name, stu.age);
//	fscanf(fp, "%d %s %d", &stu.num, &stu.name, &stu.age);
//	printf("%d %s %d",stu.num,stu.name,stu.age);
//	fclose(fp);
//	return 0;
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	student stu;
//	puts("请输入学号、姓名、年龄");
//	scanf("%d %s %d", &stu.num, &stu.name, &stu.age);
//	if ((fp = fopen("D:\\text.txt", "wb+")) == NULL)
//	{
//		puts("error");
//		exit(0);
//	}
//	fwrite(&stu, sizeof(stu), 1, fp);
//	//fprintf(fp, "%d %s %d", stu.num, stu.name, stu.age);
//	//fscanf(fp, "%d %s %d", &stu.num, &stu.name, &stu.age);
//	//printf("%d %s %d\n", stu.num, stu.name, stu.age);
//	fclose(fp);
//	return 0;
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	student stu;
//	if ((fp = fopen("D:\\text.txt", "rb+")) == NULL)
//	{
//		puts("error");
//		exit(0);
//	}
//	fread(&stu, sizeof(stu), 1, fp);
//
//	//fprintf(fp, "%d %s %d", stu.num, stu.name, stu.age);
//	//fscanf(fp, "%d %s %d", &stu.num, &stu.name, &stu.age);
//	printf("%d %s %d\n", stu.num, stu.name, stu.age);
//	fclose(fp);
//	return 0;
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	student stu[3];
//	int i;
//	if ((fp = fopen("D:\\text.txt", "wb+")) == NULL)
//	{
//		puts("error");
//		exit(0);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %s %d", &stu[i].num, &stu[i].name, &stu[i].age);
//	}
//	fwrite(stu, sizeof(stu), 3, fp);
//	rewind(fp);
//	fread(stu, sizeof(stu), 3, fp);
//	for (i = 0; i < 3; i++)
//	{
//		printf("num=%d name=%s age=%d\n", stu[i].num, stu[i].name, stu[i].age);
//	}
//	fclose(fp);
//	return 0;
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	student stu;
//	student* pst;
//	pst = &stu;
//	if ((fp = fopen("D:\\text.txt", "rb+")) == NULL)
//	{
//		printf("error");
//		exit(0);
//	}
//	fseek(fp, sizeof(stu), 0);
//	fread(&stu, sizeof(stu), 1, fp);
//	printf("num=%d name=%s age=%d\n", stu.num, stu.name, stu.age);
//	fclose(fp);
//	return 0;
//}


//typedef struct student
//{
//	int num;
//	char name[20];
//	int age;
//}student;
//int main()
//{
//	FILE* fp;
//	int length;
//	if ((fp = fopen("D:\\text.txt", "ab")) == NULL)
//	{
//		puts("error");
//		exit(0);
//	}
//	fseek(fp, 0L, 2);
//	length = ftell(fp);
//	printf("file length=%d\n", length);
//	fclose(fp);
//	return 0;
//}


