#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	strcpy(arr2, arr1);
//	return 0;
//}

#include <string.h>
struct stu {
	char name[20];
	int age;
};
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	struct stu arr3[] = { {"张三", 20}, {"李四", 30} };
//	struct stu arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//模拟实现memcpy
#include <assert.h>
void* my_memcpy(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		//++(char*)dest;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct stu arr3[] = { {"张三", 20}, {"李四", 30} };
//	struct stu arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//模拟实现memmove
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;

	if (dest > src)
	{
		//从后向前拷贝
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	else
	{
		//从前向后拷贝
		while (count--)
		{
			*((char*)dest) = *((char*)src);
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//10 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	//10 00 00 00 02 00 00 00 05 00 00 00 04 00 00 00 03 00 00 00
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - 内存设置函数
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 10);
	return 0;
}