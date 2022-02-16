#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//写代码将三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//scanf里面是什么格式，输入的时候就是什么格式
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//给定两个数求最大公约数，辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)//这里无需m>n，比如18%24，r=18，m=24，n=18
//	{
//		//r = m % n;把r放进while判断里，提高效率
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//打印1000-2000年内的闰年
//int main()
//{
//	int year = 0;
//	//判断year是否为闰年，百年不闰，四百一闰
//	//1.能被4整除，但不能被100整除
//	//2.能被400整除
//	int count = 0;//计算一下闰年的数量
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}//这种方法更简洁
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//	}
//	printf("\n闰年的数量是：%d\n", count);
//	return 0;
//}

//判断100-200之间的素数：试除法
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//优化,2->i-1中必有两个因数相乘，因此，只要2->sqrt(i)中存在能被整除的因数即可
//#include <math.h>
//int main()
//{
//		int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//写程序数1-100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//99这个数字出现了两个9，如果是else if，这条语句就不会被执行
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+...+1/99-1/100的值，打印结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中的最大值
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];//将max初始化为数组里的整数，防止max的初始值一开始就大于数组里的整数
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d", max);
//	return 0;
//}

//再屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//%2d两位数右对齐，%-2d两位左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//在一个整形有序数组中查找具体的某个数(二分查找)
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int k = 7;
//	while (left <= right)
//	{
//		int  i = (left + right) / 2;
//		if (arr[i] < k)
//		{
//			left=i+1;
//		}
//		else if (arr[i] > k)
//		{
//			right=i-1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

