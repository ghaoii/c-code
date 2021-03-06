#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

int cmp_float(const void* e1, const void* e2)
{
	return *((float*)e1) - *((float*)e2);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}

void Swap(char* e1, char* e2, int width)
{
	char tmp;
	int i = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;

	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*,const void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

void test1()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	bubble_sort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct stu s[3] = { {"zhangsan", 20}, {"lisi", 30},{"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}