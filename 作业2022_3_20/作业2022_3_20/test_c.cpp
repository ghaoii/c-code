#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[200];
//	scanf("%s", arr);//遇到空格就不再读取了
//	gets_s(arr);//读取一行放到arr中
//	//逆序函数
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i是几位数
//		//2.计算i的每一位的n次方之和
//		int n = 1;
//		int j = i;
//		int sum = 0;
//		while (j/=10)
//		{
//			n++;
//		}
//		j = i;
//		while (j)
//		{
//			sum += pow(j % 10, n);//pow输出是double
//			j /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//只输入上半部分的行数 7
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", p->a);
//	return 0;
//}// 输出a，printf里可以怎么写:a.a或p->a或(*p).a，不能写作*p.a,*的优先级没有.高


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801, "zhang", 20}, {9802, "wang", 19}, {9803, "zhao", 18} };
//	fun(students + 1);
//	return 0;
//}//输出结果是什么？

//喝汽水问题 - 1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以喝多少汽水？

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	//法二
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//		total = 2 * money - 1;
//	printf("%d\n", total);
//
//	//这个算法的意思是：两个空瓶等价于一瓶汽水，那么一个空瓶的价格就等价与0.5
//	//于是20/0.5 == 40 - 1 = 39；最后要-1是因为，最后只剩下一个空瓶的时候，就不能继续换汽水了
//
//	//法一
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


void my_move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		if (arr[left] %2 == 1)
			left++;
		if (arr[right] % 2 == 0)
			right--;
		if ((arr[left] % 2 == 0) && (arr[right] % 2 == 1))
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
void teacher_move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//左边找到偶数停
		//left<right的判断是为了全偶数、奇数的时候，不出现数组越界访问
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//右边找到奇数停
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,3,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	teacher_move(arr, sz);
	print(arr, sz);
	return 0;
}

