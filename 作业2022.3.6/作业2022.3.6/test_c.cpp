#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��һ�����еĶ�������1�ĸ���
//int main()
//{
//	unsigned int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int count = 0;
//	scanf("%d", &x);
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (1 == ((x>>i) & 1))
//		{
//			count++;
//		}
//	}
//	//���ﲻ����while����Ϊ�����ķ���λ�������ƣ����ѭ����Զ������
//	//while (x)
//	//{
//	//	if (1 == x & 1)
//	//	{
//	//		count++;
//	//		x = x >> 1;
//	//	}
//	//}
//	printf("count = %d\n", count);
//	return 0;
//}

//���Ч�Ľⷨ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//��������в�ͬλ�ĸ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count =%d\n", count);
//	return 0;
//}

//��Ч�ⷨ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int tmp = a^b;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}

//�ֱ��ӡһ�������Ķ����Ƶ�����λ��ż��Ϊ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("��ӡż��λ��\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("��ӡ����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}

//�������������ı���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	printf("a = %d\nb = %d", a, b);
//	return 0;
//}

//ʹ��ָ���ӡ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//���溯�����������Ƕ���
//int Fun(int i)
//{
//	if (i == 5)
//		return 2;
//	else
//		return 2 * Fun(i + 1);
//}
//int main()
//{
//	int i = Fun(2);
//	printf("%d\n", i);
//	return 0;
//}

//�ж�һ�����ǲ�������
//#include <math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d������\n", a);
//			break;
//		}
//	}
//	if (i > sqrt(a))
//	{
//		printf("%d��������", a);
//	}
//	return 0;
//}

//�ҵ�100��200֮�������
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�˷��ھ���
//void print_mul(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%-2d=%-4d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_mul(n);
//	return 0;
//}

//���õݹ麯����ӡһ��������ÿһλ
//void print_num(int n)
//{
//	if(n > 9)
//	{	
//		print_num(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_num(a);
//	return 0;
//}

//���õݹ麯��ʵ�ֽ׳�
//int Fac(int n)
//{
//	if (n > 1)
//		return n * Fac(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Fac(a);
//	printf("%d ", ret);
//	return 0;
//}

//���ú���ʵ��strlen���ǵݹ�͵ݹ�
//int my_strlen(char* str)
//{
//	if (*(str) != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*(str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "abcd";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//���õݹ麯��ʵ���ַ�������
//void reverse_string(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	char tmp = 0;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char tmp = 0;
//		reverse_string(arr, left+1, right-1);
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//����һ���Ǹ�����������ÿһ������֮��
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//		
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//���n��쳲���������
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

