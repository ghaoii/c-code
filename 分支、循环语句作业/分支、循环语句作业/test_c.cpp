#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//д���뽫�������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//scanf������ʲô��ʽ�������ʱ�����ʲô��ʽ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//��ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//���������������Լ����շת�����
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)//��������m>n������18%24��r=18��m=24��n=18
//	{
//		//r = m % n;��r�Ž�while�ж�����Ч��
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//��ӡ1000-2000���ڵ�����
//int main()
//{
//	int year = 0;
//	//�ж�year�Ƿ�Ϊ���꣬���겻���İ�һ��
//	//1.�ܱ�4�����������ܱ�100����
//	//2.�ܱ�400����
//	int count = 0;//����һ�����������
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}//���ַ��������
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//	}
//	printf("\n����������ǣ�%d\n", count);
//	return 0;
//}

//�ж�100-200֮����������Գ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//�Ż�,2->i-1�б�������������ˣ���ˣ�ֻҪ2->sqrt(i)�д����ܱ���������������
//#include <math.h>
//int main()
//{
//		int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//д������1-100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//99������ֳ���������9�������else if���������Ͳ��ᱻִ��
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ����ӡ���
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��10�������е����ֵ
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];//��max��ʼ��Ϊ���������������ֹmax�ĳ�ʼֵһ��ʼ�ʹ��������������
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//%2d��λ���Ҷ��룬%-2d��λ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��һ���������������в��Ҿ����ĳ����(���ֲ���)
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int k = 7;
//	while (left <= right)
//	{
//		int  i = (left + right) / 2;
//		if (arr[i] < k)
//		{
//			left=i+1;
//		}
//		else if (arr[i] > k)
//		{
//			right=i-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

