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

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* p;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {10, 'w', "hello world", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.p);
//	return 0;
//}


//�ṹ�崫�μ���Ա����
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name = %s\n", tmp.name);
//	printf("age = %d\n", tmp.age);
//	printf("tele = %s\n", tmp.tele);
//	printf("sex = %s\n", tmp.sex);
//}
//
//void print2(Stu* ps)
//{
//	printf("name = %s\n", ps->name);
//	printf("age = %d\n", ps->age);
//	printf("tele = %s\n", ps->tele);
//	printf("sex = %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 30, "15266668888", "��" };
//	print1(s);//print1����ʱ���βλ���ʱ����һ�����ݣ�����ṹ��ϴ󣬻�ѹջ����������
//	print2(&s);//print2���ã���Ϊֻ�Ὺ��4/8���ֽڴ�ŵ�ַ
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

