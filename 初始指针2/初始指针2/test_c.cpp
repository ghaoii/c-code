#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ-��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//��Ȼ��ӡ�Ľ��������һ��������ȡ��������������ĵ�ַ��ֻ��������Ԫ�ؿ�ʼ
//	printf("%p\n", &arr+1);
//
//	//&arr-&������-������������Ԫ�ص�ַ������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//sizeof(arr)-sizeof(������) - �����������Ҳ��ʾ�������飬-sizeof(������)���������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//p+i��������arr�±�Ϊi�ĵ�ַ
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
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	//int*** pppa = ppa; ����ָ��...
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}

