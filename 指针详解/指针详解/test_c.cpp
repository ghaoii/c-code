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

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//		//����д�����ǵȼ۵�
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//ʵ�����ǰ��ַ���������ĸ��ַ��ֵ��p2
//
//	int* arr[10] = { 0 };//ָ�����飬�������int*���͵�ָ��
//	char* arr[5];
//
//	int arr2[5];
//	int(*p3)[5] = &arr2;//����ָ�룬ָ��int[10]������
//	int (*p4[10])[5];//�����飬�������ŵ�������ָ��
//	return 0;
//}

//void test1(int* p)
//{
//}
//void test2(char* p)
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}

//void test(int** p)
//{
//}
//
//int main()
//{
//	int* arr[10];
//	test(arr);//ָ�����鴫��Ҳ����
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	printf("%d\n", Add(a, b));
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	//���ְ취�����õ������ĵ�ַ
//
//	//int* pa(int, int) = Add;//��������Ƕ��庯����д��
//	int (*pa) (int, int) = Add;//��ʱ*����pa��ϣ���ôpa����ָ�����
//							   //int(*)(int, int)����ָ������
//	printf("%d\n", (*pa)(2, 3));//���еĽ��ȷʵ����5
//	return 0;
//}

//void  Print(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p) (const char*) = Print;
//	(*p)("hello world");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int (*pa) (int, int) = Add;
//
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//ָ������
//	int* arr[5];
//	int (*pa)(int, int) = Add;
//	//Add,Sub,Mul,Div�����Ͷ�һ���������Ҫһ���������洢
//	//���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*parr[4])(int, int) = { Add, Sub, Mul, Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


//��ϰ
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//
//char*(*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[4])(char*, const char*) = {my_strcpy};

//������
//void menu()
//{
//	printf("##############################\n");
//	printf("####   1.Add      2.Sub   ####\n");
//	printf("####   3.Mul      4.Div   ####\n");
//	printf("####        0.exit        ####\n");
//	printf("##############################\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//���ú���ָ������д
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pfArr[input](x, y));//Ҳ����д��(*pfArr[i])(x, y);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//
//	return 0;
//}
//���ûص�����

//void Cala(int(*pf)(int, int))
//{
//	int x, y;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cala(Add);
//			break;
//		case 2:
//			Cala(Sub);
//			break;
//		case 3:
//			Cala(Mul);
//			break;
//		case 4:
//			Cala(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int mian()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);
//	int (*pfArr[4])(int, int);//����ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
//	return 0;
//}

void print(const char* str)
{
	printf("hehe:%s", str);
}

void test(void(*p)(const char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}