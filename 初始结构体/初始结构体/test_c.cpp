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

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* p;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {10, 'w', "hello world", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.p);
//	return 0;
//}


//结构体传参及成员访问
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name = %s\n", tmp.name);
//	printf("age = %d\n", tmp.age);
//	printf("tele = %s\n", tmp.tele);
//	printf("sex = %s\n", tmp.sex);
//}
//
//void print2(Stu* ps)
//{
//	printf("name = %s\n", ps->name);
//	printf("age = %d\n", ps->age);
//	printf("tele = %s\n", ps->tele);
//	printf("sex = %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "张三", 30, "15266668888", "男" };
//	print1(s);//print1传参时，形参会临时拷贝一份数据，如果结构体较大，会压栈，降低性能
//	print2(&s);//print2更好，因为只会开辟4/8个字节存放地址
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

