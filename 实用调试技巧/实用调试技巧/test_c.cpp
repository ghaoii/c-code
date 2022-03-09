#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//利用debug和release去运行的结果不一致
//F5-启动条件，和F9配合使用 
//在vc6.0，可能<=10就死循环
//在不同的编译器下，内存分配的空间不一致，因此出现死循环的临界也不同

//#include <stdlib.h>
//int main()
//{
//	int i = 0;//如果先创建arr在创建i，不会死循环，但是程序崩溃
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//
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

//利用调试找出问题在什么地方
//int main() {
//
//	int i = 0; 
//	int sum = 0;//保存最终结果 
//	int n = 0; 
//	int ret = 1;//保存n的阶乘 
//	scanf("%d", &n); // 1!+2!+3! = 1+2+6=9
//	for(i=1; i<=n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	} 
//	printf("%d\n", sum);
//	return 0;
//}

//#include <string.h>
//写一个自己的strcpy函数
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (*dest == NULL && *src == NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//完全优化的strcpy
//#include <assert.h>
////把目的地的地址返回
//char* my_strcpy(char* dest, const char* src)//const修饰*src，不得通过*src改变内存中的值
//{
//	char* ret = dest;//提前保存dest的地址
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, NULL);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//函数返回了arr1的起始地址，因此可以替换arr1
//	return 0;
//}

//const怎么用？
//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;
//	int* const p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//优化后的my_strlen
#include <assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(*str != NULL);//保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "123456";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}