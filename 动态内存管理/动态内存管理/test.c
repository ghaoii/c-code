#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	//Ԫ�ظ��������������
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//��̬�ڴ濪��
//	//���ڴ�����10�����εĿռ�
//	//��10�����εĿռ�ĵ�ַ�ŵ����㴦�����ε�ָ���������ָ��
//	int * p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û��������ռ�
//	//��ʹ��free�����������������ʱ����Զ��ͷŵ�
//	//���ǲ���ǰ�ͷſռ��ʱ�򣬿ռ��һֱ��ռ��
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	free(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//ʹ��malloc���ٵ�20���ֽڿռ�
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//���������20���ֽڲ����������ǵ�����
//	//ϣ������40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע������
//	//1-���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2-���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//	����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬
//	//	��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3-�����µı���������realloc�����ķ���ֵ�����ٳɹ���ʱ�򣬰ѵ�ַ��ֵ��p����ʹ���ٲ��ɹ���pҲ���ᱻ�ı�
//		
//	int* ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	return 0;
//}


//int mian()
//{
//	int* p = (int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//*p = 0; error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//�ԷǶ�̬�����ڴ��free����������
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 20);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	free(p);
//
//	int* p = (int*)realloc(NULL, 40);//�ȼ���malloc(40);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//���ı�p��ֵ
//	}
//	free(p);//��ʱ��p����ԭ���ĵ�ַ
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ����֮��
//	free(p);
//	p = NULL;//���p����ֵ��ָ�룬�ٴ�freeʱ���������ͷŶ���������
//	//....
//	free(p);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	//ִ����γ����ʱ�򣬹۲�����������ı仯
//	//���Կ����ڴ�һֱ������
//	return 0;
//}

//������
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//��ͬ��printf("%s\n", str); ��printf("abcdef");
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//����Test��ʲô���

//����1
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//��ͬ��printf("%s\n", str); ��printf("abcdef");
//	free(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char** p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	if (str == NULL)
//		return 0;
//	else
//	{
//		strcpy(str, "hello world");
//		printf(str);//��ͬ��printf("%s\n", str); ��printf("abcdef");
//		free(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��2
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//} 
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(); 
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}//��������Test ��������ʲô���Ľ����

//int* test()
//{
//	int* ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//} 
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}//��������Test ��������ʲô���Ľ����

//void Test(void) 
//{
//	char* str = (char*)malloc(100); 
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL) 
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//��ͬ�ռ�����ݲ��ܽ��д���
//int main()
//{
	//char arr1[] = "abcd";
	//char* arr2 = "qwer";
	//strcpy(arr2, arr1);
	//printf(arr2);
	//int* str = (int*)malloc(40);
	//if (str == NULL)
	//	return 0;
	//int* str2 = (int*)malloc(20);
	//if (str2 == NULL)
	//	return 0;
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*(str2 + i) = i;
	//}
	//memcpy(str, str2, sizeof(int));
	//printf("%d\n", *str);
	//free(str);
	//str == NULL;
	//return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//δ֪��С������
//	//int arr[0];//�����������಻��ȥ���Ͳ�������д��
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4 - ���������ǲ������С��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* str = realloc(ps, 44);
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(sizeof(int) * 5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ��ڴ�
//	free(ps->arr);
//	free(ps);
//	return 0;
//}

//�Լ�ʵ��
//struct S
//{
//	int n;
//	char c;
//	int arr[];
//};
//
//int main()
//{
//	//printf("%d\n",sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	int n = 100;
//	char c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i+1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	struct S* str = realloc(ps, (sizeof(struct S)+20*sizeof(int)));
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		ps->arr[i] = i+1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	printf("%d\n", sizeof(struct S));
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(sizeof(int) * 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i+1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	printf("\n");
	//������С
	int* ptr = realloc(p->arr, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p->arr = ptr;
	}
	for (i = 10; i < 20; i++)
	{
		p->arr[i] = i + 1;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	free(p);
	return 0;
}