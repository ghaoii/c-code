#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////void reverse(int arr[], int sz)
////{
////	int i = 0;
////	int j = 0;
////	int tmp = 0;
////	for (i = 0,j = sz; i < sz / 2; i++)
////	{
////		tmp = arr[i];
////		arr[i] = arr[--j];
////		arr[j] = tmp;
////	}
////	printf("���ú�\n");
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
////void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	init(arr1, sz1);
//	print(arr2, sz2);
//	reverse(arr2, sz2);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//����������
//#include "game_h.h"
//void menu()
//{
//	printf("************************\n");
//	printf("********* 1.play *******\n");
//	printf("********* 0.exit *******\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	char board[ROW][COL] = { 0 };
//	//��ʼ������
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//	char ret = 0;//���ղ��ж�������Ϣ�ı���
//	while (1)
//	{
//		//�����
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//������
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("��ϲ�㣬��Ӯ�ˣ�\n");
//	}
//	else if (ret == '#')
//	{
//		printf("���ź�������Ӯ�ˣ�\n");
//	}
//	else
//	{
//		printf("ƽ�֣�\n");
//	}
//}
//
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//��������ʲô

//int main()
//{
//	int a = 0x11223344;//��ŵ��ڴ��е�ʱ���ǵ��ŷŵģ�44 33 22 11
//	char* pa = (char*)&a;
//	*pa = 0;
//	printf("%x\n", a);
//	return 0;
//}//��������ʲô��

//int i;//ȫ�ֱ���-�������ʼ��-Ĭ�ϸ�ֵ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//��������ʲô

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//'='�����ȼ�����','
//	b += a++ + c;//'+'�����ȼ�����'+='
//	printf("a = %d b = %d c = %d", a, b, c);
//	return 0;
//}

