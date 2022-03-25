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

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3 
//{
//	double d;
//	char c;
//	int i;
//}; 
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//}

//struct S4 
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//}


////设置默认对齐数为4
//#pragma pack(4)
//struct S 
//{
//	char c1;
//	double d;
//};
////取消设置的默认对齐数，还原为原默认对齐数
//#pragma pack()
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//用来计算结构体成员相对于起始位置的偏移量是多少
//	printf("%d\n", offsetof(S, c));
//	printf("%d\n", offsetof(S, i));
//	printf("%d\n", offsetof(S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//void print2(const struct S* ps)
//{
//	//这里加上const之后，既能节省空间，又能保护函数不通过地址改变实参
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//不能直接传s，否则函数接收之后创建了一块儿临时变量，对临时变量的修改不能改变s的值
//	print1(s);//这里可以传s，因为只需要打印形参就可以了
//	print2(&s);//当然传址也可以打印，而且更好，因为不会再创建临时变量，从而节省空间
//	return 0;
//}


//位段 - 二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};//假设我们确定a的取值只有1，2，3，4，那么仅需要2个bit位就可以了
////而上面代码的意思是a占两个bit，b占5个bit，依次类推
//// 位段的内存分配：
////1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
////2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
////3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = {0};
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}