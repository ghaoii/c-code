#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[200];
//	scanf("%s", arr);//�����ո�Ͳ��ٶ�ȡ��
//	gets_s(arr);//��ȡһ�зŵ�arr��
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i�Ǽ�λ��
//		//2.����i��ÿһλ��n�η�֮��
//		int n = 1;
//		int j = i;
//		int sum = 0;
//		while (j/=10)
//		{
//			n++;
//		}
//		j = i;
//		while (j)
//		{
//			sum += pow(j % 10, n);//pow�����double
//			j /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//ֻ�����ϰ벿�ֵ����� 7
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", p->a);
//	return 0;
//}// ���a��printf�������ôд:a.a��p->a��(*p).a������д��*p.a,*�����ȼ�û��.��


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801, "zhang", 20}, {9802, "wang", 19}, {9803, "zhao", 18} };
//	fun(students + 1);
//	return 0;
//}//��������ʲô��

//����ˮ���� - 1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	//����
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//		total = 2 * money - 1;
//	printf("%d\n", total);
//
//	//����㷨����˼�ǣ�������ƿ�ȼ���һƿ��ˮ����ôһ����ƿ�ļ۸�͵ȼ���0.5
//	//����20/0.5 == 40 - 1 = 39�����Ҫ-1����Ϊ�����ֻʣ��һ����ƿ��ʱ�򣬾Ͳ��ܼ�������ˮ��
//
//	//��һ
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


void my_move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		if (arr[left] %2 == 1)
			left++;
		if (arr[right] % 2 == 0)
			right--;
		if ((arr[left] % 2 == 0) && (arr[right] % 2 == 1))
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
void teacher_move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//����ҵ�ż��ͣ
		//left<right���ж���Ϊ��ȫż����������ʱ�򣬲���������Խ�����
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//�ұ��ҵ�����ͣ
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,3,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	teacher_move(arr, sz);
	print(arr, sz);
	return 0;
}

