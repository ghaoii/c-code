#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//冒泡排序
void bubble_sort(int arr[10], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1 - i; i++)
	{
		for (j = i; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型元素
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 1,2,3,10,5,6,7,9,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	//return *(float*)e1 - *(float*)e2;//因为函数返回值是int，但是运算结果是float，所以会有警告
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	//return ((int)(*(float*)e1 - *(float*)e2));//也可以强制类型转换
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
//按照年龄排序
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//->的优先级高于()强制转换
}
//按照名字排序，先按首字母，首字母一样大小的话，再根据后面字母，依此类推
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//字符串的比较用strcmp
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3] = { {"张三", 20}, {"李四", 30}, {"王五", 10} };//结构体数组
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小-单位是字节
//第四个参数：是函数指针，比较两个元素的函数的地址 - 该函数要由使用者自己实现
//函数指针的两个参数是：待比较的两个元素的地址

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//实现bubble_sort函数的程序员， 他不知道未来排序的数据类型
//那程序员也不知道待比较元素的类型
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//为了能够任意排序都通用，只能把比较的方法传进来
			//因为只有使用bubble_sort的程序员知道对什么类型的数据进行排序
			//所以要自己写一个函数，传给bubble_sort，那就需要设定一个返回值
			//bubble通过函数cmp的返回值对两个元素进行交换
			//由于指针式void*类型的，因此不能直接base+-1
			//于是强制转换char*使指针访问空间变为1，然后加上j个元素的宽度后，就是下一个元素的地址了
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 1,2,3,10,5,6,7,9,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sotr的程序员一定知道自己排序的是什么数据
	//就应该知道如何比较待排序数组中的元素
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
	struct Stu s[3] = { {"张三", 20}, {"李四", 30}, {"王五", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}


//void* 介绍
//int main()
//{
//	int a = 0;
//	//int* pa = &a;
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	*p = 0;//void*类型的指针，不能进行解引用操作，因为不知道该指针能够访问的空间的大小
//
//	//void* 类型的指针 可以接受任意类型的地址
//	return 0;
//}

