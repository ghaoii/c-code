#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生：属性：名字、电话、性别

//struct Stu
//{
//	char name[20];
//	char Tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
//struct Stu s3;//s3, s4, s5, s6都是全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//匿名结构体类型
//这种结构体类型只能在创建结构体的时候创建变量
//struct
//{
//	int a;
//	char b;
//	float c;
//};
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],  *p;
//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node *n;//千万不能是struct Node，否则就一直出不来了,无限套娃
//} Node;//重定义为Node类型
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体初始化

//struct T
//{
//	double weight;
//	int age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', {50.6, 20}, 100, 3.14, "hello world" };
//	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}