#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//利用debug和release去运行的结果不一致
//F5-启动条件，和F9配合使用 
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		//假如你判断你的代码出现在这个for循环，你在这里设置一个断点
//		//多次按F5调试，会发现i的值在变化，这意味着调试会跳到执行逻辑上的下一个断点
//		//也就是说，第一次调试，到断点处停下，再调试，到下一个断点处停下
//		//在循环里的时候，看似没动，但实际上值在发生变化 
//		printf("%d ", 10-i);
//
//	}
//	return 0;
//}
