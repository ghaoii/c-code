#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int mian()
//{
//	int a = 10;
//	int* p = &a;//p-ָ�����
//	return 0;
//}

//int main()
//{
//	//ָ��Ĵ�С����Ե�ַ���й�ϵ��32λϵͳ4���ֽڣ�64λ8�ֽ�
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	//�����̵��ԣ����ڴ��ڴ洰�ڣ��۲�&a������
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//�ڴ�ᵹ�Ŵ洢��44 33 22 11
//	//char* pc = &a;�ᱨ��
//	//printf("%p\n", pa);
// 	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	//printf("%p\n", pa);�ᱨ������ڱ�Ŀ���ִ�У����������Ĵ�ӡһ��
//	*pa = 0;//���������ͨ������ַ���4�����ֽڣ�ֻ��һ���ֽڸı�Ϊ00����00 33 22 11
//	//�ɴ˿ɼ���ָ���������������
//	//��Ȼָ���ܹ���Ÿ������͵�ֵ�����ǽ�����ʱ��ֻ�����ָ�����͸ı䣬����char* ��ֻ�ı������е�һ���ֽ�
//	return 0;
//}
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int*p��*p�ܹ�����4���ֽ�
//char*p��*p�ܹ�����1���ֽ�
//double*p��*p�ܹ�����8���ֽ�

//ָ��+����
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	//char* pc = &a;
//	//printf("%p\n", pc);
//	//printf("%p\n", pc+1);
//	return 0;
//}
//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//int*p; p+1 -> 4
//char*p; p+1 ->1
//double; p+1 ->8

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;//��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;//int* 4���ֽڸı�һ��
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;//char* 1���ֽڸı�һ��
//	}
//	return 0;
//}//vs2019����

//Ұָ��:����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�����ֵ
//	int* p;//ͬ�����ֲ���ָ������������ֵ��Ҳ�ᱻ��ʼ��
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p++ = i;//��ָ��ָ��Ŀռ䳬����Χ�������Ĳ���Ҳ��Ұָ��
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ䱻�ͷ���
//int* test()
//{
//	int a = 0;
//	return &a;//����������֮���ں����ڴ����Ŀռ�ͻ�������ϵͳ�ˣ�Ҳ����˵��ԭ��a�Ŀռ佫��ȡ��
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//�ں����ڲ�ʱ��pȷʵ���յ��˵�ַ�������߳�����֮��p����Ұָ����
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//ָ���ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//ָ��ָ��Ŀռ��ͷź󣬰�NULL��ֵ��pa
//	*pa = NULL;
//	//*pa = 10;ָ��Ϊ��ָ��ʱ������ǿ�з��ʣ�����ʹ��ǰ�����ж�
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

//ָ��+-����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[9];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}

//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", & arr[9] - &arr[0]);//�õ���������ָ���м�Ԫ�صĸ���
//	printf("%d\n", & arr[0] - &arr[9]);//�õ�һ�������������ֵ���м�Ԫ�صĸ���
//	//�����Բ�ͬ���͵�ָ�����
//	return 0;
//}

//ģ��strlen-�����ַ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "ghao";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

#define N_VALUES 5 
int main()
{
	float values[N_VALUES];
	float* vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[N_VALUES]; vp > &values[0]; )
	{
		*--vp = 0;
	}
	return 0;
}

