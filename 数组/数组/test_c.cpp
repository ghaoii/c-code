#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };//���û��'\0'�Ͳ�����ֹͳ�ƣ���һֱ����ȥ��ֱ��ĳ��ʱ������0
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//û��'\0'����������ֵ
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//char arr[] = "ghaoii";
//	//int i = 0;
//	//int len = strlen(arr);//strlenĬ�Ϸ����޷�������
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

//һά�������ڴ��еĴ洢
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
//	//int arr1[3][4] = { 1,2,3,4,5 };//�в������Զ�����һ�в���
//	//int arr2[3][4] = { {1,2,3}, {4,5} };//��ÿһ�п���һά����
//
//	//int arr1[][] = { 1,2,3,4,5,6,7,8 };
//	//int arr2[][] = { {1,2,3,4}, {5,6,7,8} };
//	//int arr3[3][] = { {1,2,3,4}, {5,6,7,8} };//�в���ʡ�ԣ�ȱ���±�
//	int arr4[][4] = { {1,2,3,4}, {5,6,7,8} };//�п���ʡ��
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
