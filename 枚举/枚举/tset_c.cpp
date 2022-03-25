#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//enum Sex
//{
//	//枚举的可能取值 - 常量
//	MALE = 2,
//	FEMALE,
//	SECRET
//};//可以自定义初始值，如果没设置，按顺序递增
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
////c语言的源代码 - 预编译 -> 编译 -> 链接 -> 可执行程序
////#define RED 0
////#define GREEN 1
////#define BLUE 2
//
//int main()
//{
//	enum Sex s = MALE;
//	s = FEMALE;
//	//只能赋值定义过的值
//
//	enum Color c = BLUE;//这里不能直接赋值2，因为2是int型的
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);// 0 1 2
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//
//
//	return 0;
//}

//联合 - 联合体 - 共用体

//union Un
//{
//	char c;
//	int i;
//};
//
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;//
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//
//	//int a = 0x11223344;
//	//低地址------------------------------->高地址
//	//.....[][][][][11][22][33][44][][][][][].....  大端字节序存储模式
//	//.....[][][][][44][33][22][11][][][][][].....  小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

union Un
{
	int a;// 4
	char arr[5];// 1*5 相当于写了5给char
	//数组的对齐数要看数组的元素是什么类型
	//然后按照元素个数依次分配
	//如果要看最大对齐数，不能拿5来算，而是拿1来算
	//因此这里的最大对齐数是4，至少5个字节空间，对齐后为8字节
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}

