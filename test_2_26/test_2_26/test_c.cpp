#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//交换两个int变量的值
//利用第三个变量实现交换
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//利用加减实现变量的值的交换
//int main()
//{
//	//存在问题：
//	//INT_MAX - 2147482647
//	//int - 4个字节 -32bit位 - 最大值
//	//如果a+b超过最大值，数据会丢失，最后交换后的值当然也就不正确了
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//利用异或符计算
//int main()
//{
//	//使用异或方法，不会溢出，也没有使用第三个变量
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//实际上在企业中，会采用第三个变量，这样代码的可读性高，执行效率高
//异或的操作：可读性差，执行效率低于其他方法

//找出只出现了一次的数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//a^a=0
//	//0^a=a
//	//a^b^a=b
//	//a^a^b=0^b,由此可见，异或是满足交换律的
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("只出现了一次的数字是: %d\n", ret);
//
//	//暴力求解，如果遇到坏的情况，计算量较大
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	int count = 0;
//	//	int j = 0;
//	//	for (j = 0; j < sz; j++)
//	//	{
//	//		if (arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if (count == 1)
//	//	{
//	//		printf("只出现了一次的数字是: %d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}

//写一个关机程序
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 120");
	printf("请注意，您的电脑将在2分钟之内关机！\n");
	printf("如果输入“我是猪”，即可停止自动关机！\n");
again:
	printf("请输入:>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("输入正确，已取消！\n");
	}
	else
	{
		printf("输入错误！请重新输入\n");
		goto again;
	}
	return 0;
}

