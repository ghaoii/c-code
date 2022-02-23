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

int main()
{
	int arr[3][4] = { {1,2,3}, {4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf(" &arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}
