#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//����������Ԫ�ص�ַ��������������
//	//1.sizeof(������) - ��������ʾ��������
//	//2.&ȡ��ַ������ - ��������ʾ��������
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a)); //4*4 = 16 - sizeof(������) - ������������ܴ�С
//	printf("%d\n", sizeof(a + 0)); //4��8 - aû�е�������sizeof�У��������������ʾ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a)); //4 - *�ǽ����ã���������a����Ԫ�ص�ַ�����������Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1));//4��8 - ��sizeof(a + 0)һ����a+1�ǵڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a)); //4��8 - &aȥ����������ĵ�ַ���Ǿ��ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(*&a)); //16 - &a��ȡ����������ĵ�ַ��Ȼ��*�����ã��������������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));//4��8 - &aȡ���������飬&a+1�����������飬�����ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4��8 - ȡ��������Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4��8 - ȡ�����ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4��8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4��8
//	printf("%d\n", sizeof(&arr + 1));//4��8
//	printf("%d\n", sizeof(&arr[0] + 1));//4��8
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//û��'\0', ���ֵ
//	printf("%d\n", strlen(arr + 0));//��strlen(arr)��ȫһ�������ֵ
//	printf("%d\n", strlen(*arr));//strlen���ܵĲ����ǵ�ַ��*arr��Ԫ��ֵ�����Ǵ���'a',ASCII��97����˱���
//	printf("%d\n", strlen(arr[1]));//ͬ�ϣ�����
//	printf("%d\n", strlen(&arr));//���ֵ��ȡ����������ĵ�ַ
//	printf("%d\n", strlen(&arr + 1)); //������������������ĵ�ַ����˺����������ֵ��6
//	printf("%d\n", strlen(&arr[0] + 1));//������ӵڶ���Ԫ�ص�ַ��ʼ�������������1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4��8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr)); //4��8
//	printf("%d\n", sizeof(&arr + 1)); //4��8
//	printf("%d\n", sizeof(&arr[0] + 1));//4��8
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//���ġ�a��������
//	printf("%d\n", strlen(arr[1]));//������Ԫ��ֵ������
//	printf("%d\n", strlen(&arr)); //������char(*)[7]����strlen���յĲ���������const char* ����˻��о���
//	//���ֱ��������������running����ô�����6���൱�ڰ�����ָ��ǿ��ת��Ϊ�ַ�ָ��
//	printf("%d\n", strlen((char*)&arr));//ǿת֮����Ϊ6
//	printf("%d\n", strlen(&arr + 1)); //��������һ�����飬��˽��Ϊ���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	const char* p = "abcdef";//���ַ�������Ԫ�ص�ַ����p
//
//	printf("%d\n", sizeof(p)); //4��8
//	printf("%d\n", sizeof(p + 1)); //4��8 - p+1�õ����ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1 - �ȼ���*p
//	//int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0)
//	printf("%d\n", sizeof(&p)); //4��8 - &p�Ƕ���ָ��
//	printf("%d\n", sizeof(&p + 1)); //4��8
//	printf("%d\n", sizeof(&p[0] + 1));//4��8 - &p[0]���ǵ�һ��Ԫ�صĵ�ַ��+1�ǵڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1)); //5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen((char*)&p)); //�����Ƕ���ָ�� err
//	//ǿת - ���p�ĵ�ַ��0x0012ff44��&p֮��p�ĵ�ַ�浽�µĿռ�
//	//���С�˴洢����44 ff 12 00�洢���ǽ������3�������ַ��û��00���������ֵ
//	printf("%d\n", strlen(&p + 1)); //�����err��ǿת֮��p+1ָ��p����ĵ�ַ�����
//	printf("%d\n", strlen(&p[0] + 1));//5 - �����ǵڶ���Ԫ�صĵ�ַ��p+1�ȼ�
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//3*4*4 = 48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4*4 = 16 - ��һ��������������������ǵ�һ������Ĵ�С
//	//a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(a[0])����������������sizeof()�ڣ� ������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4��8 - �����a[0]�ǵ�һ�е���Ԫ�ص�ַ��a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1))); //4 - ��һ�������еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1)); //4��8 - �����a����Ԫ�ص�ַ��a+1���ǵڶ�������ĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1))); //4*4 = 16 - �Եڶ�����������ã��ǵڶ�������Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4��8 - &a[0]+1 == a+1���ڶ��������ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - �ڶ�������Ĵ�С
//	printf("%d\n", sizeof(*a));//16 - ��һ������Ĵ�С
//	printf("%d\n", sizeof(a[3]));//16 - 4�����ε�һά����
//	//sizeof()������ı��ʽ��������ʵ���㣬ֻ�ǰѵ����е��������ó����ˣ����Լ�����ǵ����еĴ�С
//	return 0;
//}


//ָ�������

//int main() 
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//} //����Ľ����ʲô��


struct Test 
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4]; 
}*p; 
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main() 
{
	p = (struct Test*)0x100000;
	//ָ��Ӽ�������һ���߶�Զ��Ҫ��ָ������ͣ�����ָ�����͵�����
	printf("%p\n", p + 0x1);//�ṹ��ָ�룬��֪��СΪ20ֱ�ӣ�0x100000+20 == 0x100014
	printf("%p\n", (unsigned long)p + 0x1);//�����pΪlong int��ֱ��+1����0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//�޷�������ָ�룬��һ����4��0x100004
	return 0;
}

