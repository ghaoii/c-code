#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����ѧ�������ԣ����֡��绰���Ա�

//struct Stu
//{
//	char name[20];
//	char Tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
//struct Stu s3;//s3, s4, s5, s6����ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//�����ṹ������
//���ֽṹ������ֻ���ڴ����ṹ���ʱ�򴴽�����
//struct
//{
//	int a;
//	char b;
//	float c;
//};
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],  *p;
//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node *n;//ǧ������struct Node�������һֱ��������,��������
//} Node;//�ض���ΪNode����
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//�ṹ���ʼ��

//struct T
//{
//	double weight;
//	int age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c', {50.6, 20}, 100, 3.14, "hello world" };
//	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}