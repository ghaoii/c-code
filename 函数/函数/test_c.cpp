#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);//string copy-�ַ������� ��ʵ��arr1����ַ�����arr2�����Ե��±�������滻��
//	printf("%s\n", arr2);//���ڰ�\0Ҳ�����ˣ�����ַ�����"bit\0",arr2����� # �޷�������ӡ
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��arr�е�ǰ5���ֽڵ������滻��*
//	printf("%s\n", arr);
//	return 0;
//}

//�Ƚ��������Ĵ�С
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	max = get_max(100, 300);
//	printf("%d\n", max);
//	return 0;
//}

// ������������������
//void Swap1(int x, int y)//�����������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////��ʵ�δ����βε�ʱ��
////�β���ʵ��ʵ�ε�iiһ����ʱ����
////���βε��޸��ǲ���ı�ʵ�ε�
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//	//��������
//	//Swap1(a, b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//#include <math.h>
////����������1��������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//return�Ĳ����̶�Ҫ����break��returnֱ���˳�������breakֻ������ѭ��
//	}
//	return 1;
//}
//
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//дһ�������ж�һ���ǲ�������
//int is_leep_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y%400 == 0))
//		return 1;
//	else
//		return 0;
//}//��Ҫ�ں������ӡ�Ƿ�Ϊ���꣬����ֻ����ֵ�����ж�
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if(1 == is_leep_year(year))
//			printf("%d ", year);
//	}
//		return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
//						//�����������arr�Ǹ�ָ��
//int binary_search(int arr[], int k, int sz)//�βκ�ʵ�ε����ֿ�����ͬ
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//							//���鴫�Σ�������������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}

//дһ������ÿ����һ������������ͻ�ʹnum��ֵ����1
//void Add(int* p)
//{
//	(*p)++;//++�����ȼ�Ҫ����*����˻�ֱ��������p��
//}
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		Add(&num);
//	}
//	printf("%d\n", num);
//	return 0;
//}

//��ʽ����
//int main()
//{
//	//1
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ�Ǵ�ӡ���ַ�����
//	return 0;
//}


//int Add(int, int);//��������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//��������
//	printf("%d\n", sum);
//	return 0;
//}
////��������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//��������
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
// }

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ���

//�ݹ�ķ���
//���»�С
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1=3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
////int my_strlen(char* str)//�ú�����������ʱ����
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ��strlen����
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}

//��n�Ľ׳�

//int Fca1(int n)//ѭ���İ취
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fca2(int n)//�ݹ�İ취
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fca2(n - 1);
//}
//
//int main()
//{
//	//��n�Ľ׳�
//	int  n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fca1(n);
//	ret = Fca2(n);
//	printf("%d! = %d\n", n, ret);
//	return 0;
//}

//���n��쳲��������������������
//1 1 2 3 5 8 13 21 34 55   ǰ���������ڵ�������

int count = 0;//ȫ�ֱ���,��˺������count��ֵ���Դ�����

//int Fib(int n)//�ݹ����
//{
//	if (n == 3)//���Ե�����쳲��������������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//�������Ӵ����ظ��������

//int Fib(int n)//��������
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//��ŵ������

//void Hanoi(int n, char A, char B, char C)//��BΪ�յ�
//{
//	if (n == 1)
//	{
//		printf("%d#: %c--->%c\n", n, A, B);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%d#: %c--->%c\n", n, A, B);
//		Hanoi(n - 1, C, B, A);
//	}
//}

//void Hanoi(int n, char A, char B, char C)//��CΪ�յ�
//{
//	if (n == 1)
//	{
//		printf("%d#: %c--->%c\n", n, A, C);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%d#: %c--->%c\n", n, A, C);
//		Hanoi(n - 1, B, A, C);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	char A = 'A';
//	char B = 'B';
//	char C = 'C';
//	printf("��������ӵĸ���:>");
//	scanf("%d", &n);
//	Hanoi(n, A, B, C);
//	return 0;
//}

//������̨����

