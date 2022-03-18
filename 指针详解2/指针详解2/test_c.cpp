#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ð������
void bubble_sort(int arr[10], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1 - i; i++)
	{
		for (j = i; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������Ԫ��
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 1,2,3,10,5,6,7,9,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	//return *(float*)e1 - *(float*)e2;//��Ϊ��������ֵ��int��������������float�����Ի��о���
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	//return ((int)(*(float*)e1 - *(float*)e2));//Ҳ����ǿ������ת��
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
//������������
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//->�����ȼ�����()ǿ��ת��
}
//�������������Ȱ�����ĸ������ĸһ����С�Ļ����ٸ��ݺ�����ĸ����������
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�ַ����ıȽ���strcmp
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3] = { {"����", 20}, {"����", 30}, {"����", 10} };//�ṹ������
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�صĺ����ĵ�ַ - �ú���Ҫ��ʹ�����Լ�ʵ��
//����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ʵ��bubble_sort�����ĳ���Ա�� ����֪��δ���������������
//�ǳ���ԱҲ��֪�����Ƚ�Ԫ�ص�����
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//Ϊ���ܹ���������ͨ�ã�ֻ�ܰѱȽϵķ���������
			//��Ϊֻ��ʹ��bubble_sort�ĳ���Ա֪����ʲô���͵����ݽ�������
			//����Ҫ�Լ�дһ������������bubble_sort���Ǿ���Ҫ�趨һ������ֵ
			//bubbleͨ������cmp�ķ���ֵ������Ԫ�ؽ��н���
			//����ָ��ʽvoid*���͵ģ���˲���ֱ��base+-1
			//����ǿ��ת��char*ʹָ����ʿռ��Ϊ1��Ȼ�����j��Ԫ�صĿ�Ⱥ󣬾�����һ��Ԫ�صĵ�ַ��
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 1,2,3,10,5,6,7,9,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sotr�ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
	struct Stu s[3] = { {"����", 20}, {"����", 30}, {"����", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}


//void* ����
//int main()
//{
//	int a = 0;
//	//int* pa = &a;
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	*p = 0;//void*���͵�ָ�룬���ܽ��н����ò�������Ϊ��֪����ָ���ܹ����ʵĿռ�Ĵ�С
//
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	return 0;
//}

