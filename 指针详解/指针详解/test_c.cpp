#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//��һ�������ַ���
//	printf("%c\n", *p);//ʵ���ϣ��ǰ�"abcdef"��'a'�ĵ�ַ����p����
//	printf("%s\n", p);
//	return 0;
//}

//��Linux���е�ʱ��ᷢ��Segmentation fault  - �δ���
//int main()
//{
//	const char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	//��Ȼ���Դ�ӡ������ָ�����鲢������ô�õ�
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//ָ���������ȷ�÷�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//����Ҫ������
//	//���ڣ����Ĳ���*��p�Ƚ�ϣ�p��һ��ָ�������Ȼ��ָ��һ��10������������
//	//[]���ȼ�����*
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//����arr��ָ�����飬��paָ����������СΪ5��ָ������char*,������char
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
//&arr��ʾ��������ĵ�ַ


//����ָ����÷�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//*pa == arr,����Ԫ�ص�ַ
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//����ָ���ڶ�ά�������Ӧ��
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)//����������Ԫ�ص�ַ����һ��һά����ĵ�ַ������������ָ�����
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);//p+i��ÿһ�е�һά����ĵ�ַ��*(p+i)����ÿһ�е���Ԫ�ص�ַ
//			//*(p+i) = p[i]
//			//*(*(p+i)+j) = *(p[i]+j) = (*(p+i))[j] = p[i][j]

//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ����������������
//	print2(arr, 3, 5);
//	//��ά����arr����Ԫ�ص�ַ�ǵ�һ��
//	//��ά�����У�ÿһ�д���һ��Ԫ�أ���3�о���3��Ԫ��
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
		printf("%d ", *(arr + i));
		printf("%d ", arr[i]);
		printf("%d ", p[i]);
		//����д�����ǵȼ۵�
	}
	return 0;
}

