#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//是一个常量字符串
//	printf("%c\n", *p);//实际上，是把"abcdef"中'a'的地址传到p里了
//	printf("%s\n", p);
//	return 0;
//}

//在Linux运行的时候会发生Segmentation fault  - 段错误
//int main()
//{
//	const char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	//虽然可以打印，但是指针数组并不是这么用的
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//指针数组的正确用法
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//p是整形指针-指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//数组要存起来
//	//由于（）的参与*和p先结合，p是一个指针变量，然后指向一个10个整数的数组
//	//[]优先级高于*
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//由于arr是指针数组，则pa指向的是数组大小为5的指针数组char*,而不是char
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//&arr表示的是数组的地址


//数组指针的用法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//*pa == arr,即首元素地址
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//数组指针在二维数组的中应用
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)//传过来的首元素地址，是一个一维数组的地址，所以用数组指针接收
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);//p+i是每一行的一维数组的地址，*(p+i)就是每一行的首元素地址
//			//*(p+i) = p[i]
//			//*(*(p+i)+j) = *(p[i]+j) = (*(p+i))[j] = p[i][j]

//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址（除了两个特例）
//	print2(arr, 3, 5);
//	//二维数组arr的首元素地址是第一行
//	//二维数组中，每一行代表一个元素，有3行就是3个元素
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//		//四种写法都是等价的
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//实际上是把字符串的首字母地址赋值给p2
//
//	int* arr[10] = { 0 };//指针数组，用来存放int*类型的指针
//	char* arr[5];
//
//	int arr2[5];
//	int(*p3)[5] = &arr2;//数组指针，指向int[10]型数组
//	int (*p4[10])[5];//是数组，数组里存放的是数组指针
//	return 0;
//}

//void test1(int* p)
//{
//}
//void test2(char* p)
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}

//void test(int** p)
//{
//}
//
//int main()
//{
//	int* arr[10];
//	test(arr);//指针数组传参也可以
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	printf("%d\n", Add(a, b));
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//&函数名 和 函数名 都是函数的地址
//	//两种办法都能拿到函数的地址
//
//	//int* pa(int, int) = Add;//这里更像是定义函数的写法
//	int (*pa) (int, int) = Add;//此时*先与pa结合，那么pa就是指针变量
//							   //int(*)(int, int)就是指针类型
//	printf("%d\n", (*pa)(2, 3));//运行的结果确实就是5
//	return 0;
//}

//void  Print(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p) (const char*) = Print;
//	(*p)("hello world");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int (*pa) (int, int) = Add;
//
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int (*pa)(int, int) = Add;
//	//Add,Sub,Mul,Div的类型都一样，因此需要一个数组来存储
//	//这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*parr[4])(int, int) = { Add, Sub, Mul, Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


//练习
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//
//char*(*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[4])(char*, const char*) = {my_strcpy};

//计算器
//void menu()
//{
//	printf("##############################\n");
//	printf("####   1.Add      2.Sub   ####\n");
//	printf("####   3.Mul      4.Div   ####\n");
//	printf("####        0.exit        ####\n");
//	printf("##############################\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//利用函数指针数组写
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pfArr[input](x, y));//也可以写作(*pfArr[i])(x, y);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//
//	return 0;
//}
//利用回调函数

//void Cala(int(*pf)(int, int))
//{
//	int x, y;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cala(Add);
//			break;
//		case 2:
//			Cala(Sub);
//			break;
//		case 3:
//			Cala(Mul);
//			break;
//		case 4:
//			Cala(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int mian()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);
//	int (*pfArr[4])(int, int);//函数指针数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//每个元素的类型是一个函数指针 int(*)(int, int)
//	return 0;
//}

void print(const char* str)
{
	printf("hehe:%s", str);
}

void test(void(*p)(const char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}