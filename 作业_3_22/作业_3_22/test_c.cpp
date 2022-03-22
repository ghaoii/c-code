#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for(c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 3) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							//保证abcde不重复
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间……
//	//释放空间
//	free(p);//free本身不会把指针置为空指针
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}//输出结果是什么？


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}//输出结果是什么？


//左旋字符串
#include <string.h>
//暴力求解
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}

//三步翻转法
#include <string.h>
#include <cassert>
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr+k-1);//逆序左边
	reverse(arr+k, arr+len-1);//逆序右边
	reverse(arr, arr+len-1);//逆序整体
}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//判断一个字符串是否为另一个字符串旋转而来

//int is_left_move(char* s1, char* s2)
//{
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//每一次循环都只旋转第一个数
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//新方法
//abcdefabcdef
//#include <string.h>
//int is_left_move(char* s1, char* s2)
//{
//	int i = 0;
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	//在s1中追加一个s1字符串
//	strncat(s1, s1, len1);//追加len个字符，即abcdefabcdef
//
//	//判断s2指向的字符串是否是s1指向的字符串的子串
//	//strstr - 找字串的函数
//	char* ret = strstr(s1, s2);//在s1中找是否存在s2，如果找到了，返回s2首元素的地址
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0; 
//}

//杨氏矩阵 - 矩阵的每行从左到右都是递增的，矩阵从上到下也是递增的，
//编写一个程序在这样的矩阵中查找某个数组是否存在
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}

////设计一个能返回下标的函数：在原函数处设计好初始坐标x，y,并传递坐标的地址
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//			
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d,%d\n", x, y);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}

