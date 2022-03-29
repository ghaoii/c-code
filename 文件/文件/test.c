#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//打开文件test.txt
//	
//	//相对路径
//	// .. 表示上一路径
//	// . 表示当前路径
//	//fopen("test.txt", "r");
//	//fopen("../../text.txt", "r");
//
//	//绝对路径，要对'\'进行转义
//	//fopen("C:\\MyTest\\c-code\\文件\\文件\\test.txt", "r");
//	
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//}

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//
//键盘 - 标准输入设备
//屏幕 - 表纯输出设备
//是一个程序默认打开的两个流设备
//
//程序一运行，就打开三个流
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	printf("请输入一个字符:>");
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文本行
//	fgets(buf, 1024, pf);//读取的时候，如果有'\n'也会拷贝过去
//	puts(buf);
//	//printf("%s", buf);
//
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文本行
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	
//	char buf[1024] = { 0 };
//	//从键盘读取一行文本信息
//	//fgets(buf, 1024, stdin);// 从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输入流
//
//	//等价于下面的代码
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100, 3.14, "bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	//fprintf(pf, "%d, %f, %s", s.n, s.score, s.arr);
//
//	//格式化的输入数据
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//printf("%d %f %s", s.n, s.score, s.arr);
//
//	//从键盘读取
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d, %f, %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "hello" };
//	struct S tmp = { 0 };
//	char buf[1024];
//
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三", 20, 55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//二进制的形式读取文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.定位文件指针
	fseek(pf, -2, SEEK_END);
	
	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}