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

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3 
//{
//	double d;
//	char c;
//	int i;
//}; 
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//}

//struct S4 
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//}


////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S 
//{
//	char c1;
//	double d;
//};
////ȡ�����õ�Ĭ�϶���������ԭΪԭĬ�϶�����
//#pragma pack()
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//��������ṹ���Ա�������ʼλ�õ�ƫ�����Ƕ���
//	printf("%d\n", offsetof(S, c));
//	printf("%d\n", offsetof(S, i));
//	printf("%d\n", offsetof(S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//void print2(const struct S* ps)
//{
//	//�������const֮�󣬼��ܽ�ʡ�ռ䣬���ܱ���������ͨ����ַ�ı�ʵ��
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//����ֱ�Ӵ�s������������֮�󴴽���һ�����ʱ����������ʱ�������޸Ĳ��ܸı�s��ֵ
//	print1(s);//������Դ�s����Ϊֻ��Ҫ��ӡ�βξͿ�����
//	print2(&s);//��Ȼ��ַҲ���Դ�ӡ�����Ҹ��ã���Ϊ�����ٴ�����ʱ�������Ӷ���ʡ�ռ�
//	return 0;
//}


//λ�� - ������λ
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};//��������ȷ��a��ȡֵֻ��1��2��3��4����ô����Ҫ2��bitλ�Ϳ�����
////������������˼��aռ����bit��bռ5��bit����������
//// λ�ε��ڴ���䣺
////1. λ�εĳ�Ա������ int unsigned int signed int ������ char ���������μ��壩����
////2. λ�εĿռ����ǰ�����Ҫ��4���ֽڣ� int ������1���ֽڣ� char ���ķ�ʽ�����ٵġ�
////3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = {0};
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}