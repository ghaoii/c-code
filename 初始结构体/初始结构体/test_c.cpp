#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述一个学生 - 需要一些变量
//名字
//年龄
//电话
//性别

//struct-结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//分号不能省略，不过全局变量可以不设置
////s1，s2，s3是三个全局的结构体变量
////不建议使用全局变量，除非万不得已
//// 
//int main()
//{
//	struct Stu s;// 局部结构体变量
//	return 0;
//}


//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; //把结构体类型命名为Stu
//
//int main()
//{
//	Stu s = {"张三", 20, "15966666666", "男"};// 局部结构体变量
//	struct Stu s2 = {"李四", 25, "15888888888", "男"};
//	return 0;
//}

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* p;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe", {10, 'w', "hello world", 3.14}, arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.p);
	return 0;
}

