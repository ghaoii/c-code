#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int ch = 0;
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputs("hello", pf);
//	fputs("world", pf);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	/*FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}*/
//	fputs("hello world\n", stdout);
//	fputs("hahahaha\n", stdout);
//
//	fgets(buf, 1024, stdin);
//	printf("%s\n", buf);
//	/*gets(buf);
//	puts(buf);*/
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};

//int main()
//{
//	struct S s = { "张三", 30, 99.5 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.score);
//
//	return 0;
//}

//int main()
//{
//	struct S s = { "张三", 30, 99.5 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fscanf(pf, "%s %d %lf", &s.name, &s.age, &s.score);
//	printf("%s %d %lf", s.name, s.age, s.score);
//
//	return 0;
//}

//int main()
//{
//	//sscanf、sprintf
//	struct S s = { "张三", 20, 85.5};
//	struct S tmp = { 0 };
//	char buf[1024] = "李四 30 88.8";
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.score);
//	printf("%s\n", buf);
//	sscanf(buf, "%s %d %lf", &(s.name), &(s.age), &(s.score));
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//}

//int main()
//{
//	struct S s = { "张三", 20, 85.5 };
//
//	FILE* pfWrite = fopen("test.txt", "wb");
//	if (pfWrite == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pfWrite = fopen("test.txt", "rb");
//	if (pfWrite == NULL)
//	{
//		return 0;
//	}
//	fread(&s, sizeof(struct S), 1, pfWrite);
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fseek(pf, 2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
