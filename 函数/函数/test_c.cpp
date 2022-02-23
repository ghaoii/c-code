#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);//string copy-字符串拷贝 其实是arr1里的字符串和arr2里的相对的下标的内容替换了
//	printf("%s\n", arr2);//由于把\0也拷贝了，因此字符串是"bit\0",arr2后面的 # 无法正常打印
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//将arr中的前5个字节的内容替换成*
//	printf("%s\n", arr);
//	return 0;
//}

//比较两个数的大小
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	max = get_max(100, 300);
//	printf("%d\n", max);
//	return 0;
//}

// 交换两个变量的内容
//void Swap1(int x, int y)//不能完成任务
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////当实参传给形参的时候
////形参其实是实参的ii一份临时拷贝
////对形参的修改是不会改变实参的
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//	//函数调用
//	//Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//#include <math.h>
////是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//return的操作程度要大于break，return直接退出函数，break只是跳出循环
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年
//int is_leep_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y%400 == 0))
//		return 1;
//	else
//		return 0;
//}//不要在函数里打印是否为闰年，而是只返回值进行判断
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if(1 == is_leep_year(year))
//			printf("%d ", year);
//	}
//		return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找
//						//本质上这里的arr是个指针
//int binary_search(int arr[], int k, int sz)//形参和实参的名字可以相同
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//找到了返回下标，找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//							//数组传参，传的是数组首元素的地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}

//写一个函数每调用一次这个函数，就会使num的值增加1
//void Add(int* p)
//{
//	(*p)++;//++的优先级要高于*，因此会直接作用在p上
//}
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		Add(&num);
//	}
//	printf("%d\n", num);
//	return 0;
//}

//链式访问
//int main()
//{
//	//1
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印的字符数量
//	return 0;
//}


//int Add(int, int);//函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}
////函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
// }

//接受一个整型值（无符号），按照顺序打印它的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度

//递归的方法
//大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1=3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
////int my_strlen(char* str)//该函数创建了临时变量
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现strlen函数
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}

//求n的阶乘

//int Fca1(int n)//循环的办法
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fca2(int n)//递归的办法
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fca2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int  n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fca1(n);
//	ret = Fca2(n);
//	printf("%d! = %d\n", n, ret);
//	return 0;
//}

//求第n个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34 55   前两个数等于第三个数

int count = 0;//全局变量,因此函数里的count的值可以传出来

//int Fib(int n)//递归求解
//{
//	if (n == 3)//测试第三个斐波那契数计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//计算量庞大，且重复计算过多

//int Fib(int n)//迭代方法
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//汉诺塔问题

//void Hanoi(int n, char A, char B, char C)//以B为终点
//{
//	if (n == 1)
//	{
//		printf("%d#: %c--->%c\n", n, A, B);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%d#: %c--->%c\n", n, A, B);
//		Hanoi(n - 1, C, B, A);
//	}
//}

//void Hanoi(int n, char A, char B, char C)//以C为终点
//{
//	if (n == 1)
//	{
//		printf("%d#: %c--->%c\n", n, A, C);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%d#: %c--->%c\n", n, A, C);
//		Hanoi(n - 1, B, A, C);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	char A = 'A';
//	char B = 'B';
//	char C = 'C';
//	printf("请输入碟子的个数:>");
//	scanf("%d", &n);
//	Hanoi(n, A, B, C);
//	return 0;
//}

//青蛙跳台问题

