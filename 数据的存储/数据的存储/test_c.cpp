#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	return 0;
//}
//C����һ��ʼ��û�й涨���庯����ʱ��û���ò����Ͳ��ܴ���
//�����Ҫ��ȷ�������������ղ����Ļ���������������дvoid

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	return 0;
//}

//int main()
//{
//	int a = 20;
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *(char*)&a;
//
//	//return *p;//�Ż�֮��ֱ�ӷ���*p���ɣ�����1С�ˣ�����2���
//
//	//if (*p == 1)
//	//	return 1;
//	//else
//	//	return 0;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//ָ������ʹ������ָ���ܷ��ʵĿռ��С
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d, b=%d, c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int  i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

#include <string.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}

