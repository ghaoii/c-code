#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��ѧ�� - ��ҪһЩ����
//����
//����
//�绰
//�Ա�

//struct-�ṹ��ؼ��� Stu-�ṹ���ǩ struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//�ֺŲ���ʡ�ԣ�����ȫ�ֱ������Բ�����
////s1��s2��s3������ȫ�ֵĽṹ�����
////������ʹ��ȫ�ֱ����������򲻵���
//// 
//int main()
//{
//	struct Stu s;// �ֲ��ṹ�����
//	return 0;
//}


//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; //�ѽṹ����������ΪStu
//
//int main()
//{
//	Stu s = {"����", 20, "15966666666", "��"};// �ֲ��ṹ�����
//	struct Stu s2 = {"����", 25, "15888888888", "��"};
//	return 0;
//}

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* p;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe", {10, 'w', "hello world", 3.14}, arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.p);
	return 0;
}

