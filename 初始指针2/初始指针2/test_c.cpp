#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//虽然打印的结果和上面一样，但是取出的是整个数组的地址，只不过从首元素开始
//	printf("%p\n", &arr+1);
//
//	//&arr-&数组名-数组名不是首元素地址，而表示整个数组-&数组名 取出的是整个数组的地址
//	//sizeof(arr)-sizeof(数组名) - 这里的数组名也表示整个数组，-sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//p+i就是数组arr下标为i的地址
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p   =====   %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	//int*** pppa = ppa; 三级指针...
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}

