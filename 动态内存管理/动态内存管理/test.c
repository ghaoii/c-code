#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//50个struct S 类型的数据
//	//元素个数不能随意更改
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//动态内存开辟
//	//向内存申请10个整形的空间
//	//把10个整形的空间的地址放到方便处理整形的指针里，即整形指针
//	int * p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作空间
//	//即使不free，结束程序的生命的时候会自动释放掉
//	//但是不提前释放空间的时候，空间就一直被占用
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//使用malloc开辟的20个字节空间
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//假设这里的20个字节不能满足我们的需求
//	//希望能有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项
//	//1-如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2-如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//	开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，
//	//	最后返回新开辟的内存空间地址
//	//3-得用新的变量来接收realloc函数的返回值，开辟成功的时候，把地址赋值给p，即使开辟不成功，p也不会被改变
//		
//	int* ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	return 0;
//}


//int mian()
//{
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	//*p = 0; error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//对非动态开辟内存的free，程序会崩溃
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 20);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	free(p);
//
//	int* p = (int*)realloc(NULL, 40);//等价于malloc(40);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//这会改变p的值
//	}
//	free(p);//此时的p不是原来的地址
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用完之后
//	free(p);
//	p = NULL;//如果p被赋值空指针，再次free时，不会再释放而是跳过了
//	//....
//	free(p);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	//执行这段程序的时候，观察任务管理器的变化
//	//可以看到内存一直在增加
//	return 0;
//}

//笔试题
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//等同于printf("%s\n", str); 和printf("abcdef");
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//运行Test有什么后果

//改正1
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//等同于printf("%s\n", str); 和printf("abcdef");
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char** p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	if (str == NULL)
//		return 0;
//	else
//	{
//		strcpy(str, "hello world");
//		printf(str);//等同于printf("%s\n", str); 和printf("abcdef");
//		free(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//题2
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//} 
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(); 
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}//请问运行Test 函数会有什么样的结果？

//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//} 
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}//请问运行Test 函数会有什么样的结果？

//void Test(void) 
//{
//	char* str = (char*)malloc(100); 
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL) 
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//不同空间的数据不能进行传递
//int main()
//{
	//char arr1[] = "abcd";
	//char* arr2 = "qwer";
	//strcpy(arr2, arr1);
	//printf(arr2);
	//int* str = (int*)malloc(40);
	//if (str == NULL)
	//	return 0;
	//int* str2 = (int*)malloc(20);
	//if (str2 == NULL)
	//	return 0;
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*(str2 + i) = i;
	//}
	//memcpy(str, str2, sizeof(int));
	//printf("%d\n", *str);
	//free(str);
	//str == NULL;
	//return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//未知大小的数组
//	//int arr[0];//如果上面的语句编不过去，就采用这种写法
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4 - 柔性数组是不计算大小的
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* str = realloc(ps, 44);
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(sizeof(int) * 5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	free(ps);
//	return 0;
//}

//自己实现
//struct S
//{
//	int n;
//	char c;
//	int arr[];
//};
//
//int main()
//{
//	//printf("%d\n",sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	int n = 100;
//	char c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i+1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	struct S* str = realloc(ps, (sizeof(struct S)+20*sizeof(int)));
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		ps->arr[i] = i+1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	printf("%d\n", sizeof(struct S));
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(sizeof(int) * 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i+1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	printf("\n");
	//调整大小
	int* ptr = realloc(p->arr, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p->arr = ptr;
	}
	for (i = 10; i < 20; i++)
	{
		p->arr[i] = i + 1;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	free(p);
	return 0;
}