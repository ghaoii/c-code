#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };//如果没有'\0'就不会终止统计，会一直走下去，直到某个时候碰到0
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//没有'\0'，会输出随机值
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//char arr[] = "ghaoii";
//	//int i = 0;
//	//int len = strlen(arr);//strlen默认返回无符号整形
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//int arr1[3][4] = { 1,2,3,4,5 };//列不够了自动向下一行补充
//	//int arr2[3][4] = { {1,2,3}, {4,5} };//将每一行看成一维数组
//
//	//int arr1[][] = { 1,2,3,4,5,6,7,8 };
//	//int arr2[][] = { {1,2,3,4}, {5,6,7,8} };
//	//int arr3[3][] = { {1,2,3,4}, {5,6,7,8} };//列不能省略，缺少下标
//	int arr4[][4] = { {1,2,3,4}, {5,6,7,8} };//行可以省略
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf(" &arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数，10个数，9趟即可
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序
//	bubble_sort(arr, sz);//冒泡排序函数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名-就是数组首元素的地址
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	printf("%p\n", arr);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	printf("%d\n", arr[1]);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//虽然&arr的值看起来像首元素的地址，但实际上是整个数组的地址
	printf("%p\n", &arr+1);

	return 0;
}
//比较发现，前两种+1取地址后，都指向arr[1]了
//而&arr+1的地址加了40，因为arr里有10个int型，由此可见&arr取得的是整个数组的地址

