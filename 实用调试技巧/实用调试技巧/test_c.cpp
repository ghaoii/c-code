#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����debug��releaseȥ���еĽ����һ��
//F5-������������F9���ʹ�� 
//��vc6.0������<=10����ѭ��
//�ڲ�ͬ�ı������£��ڴ����Ŀռ䲻һ�£���˳�����ѭ�����ٽ�Ҳ��ͬ

//#include <stdlib.h>
//int main()
//{
//	int i = 0;//����ȴ���arr�ڴ���i��������ѭ�������ǳ������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		//�������ж���Ĵ�����������forѭ����������������һ���ϵ�
//		//��ΰ�F5���ԣ��ᷢ��i��ֵ�ڱ仯������ζ�ŵ��Ի�����ִ���߼��ϵ���һ���ϵ�
//		//Ҳ����˵����һ�ε��ԣ����ϵ㴦ͣ�£��ٵ��ԣ�����һ���ϵ㴦ͣ��
//		//��ѭ�����ʱ�򣬿���û������ʵ����ֵ�ڷ����仯 
//		printf("%d ", 10-i);
//
//	}
//	return 0;
//}

//���õ����ҳ�������ʲô�ط�
//int main() {
//
//	int i = 0; 
//	int sum = 0;//�������ս�� 
//	int n = 0; 
//	int ret = 1;//����n�Ľ׳� 
//	scanf("%d", &n); // 1!+2!+3! = 1+2+6=9
//	for(i=1; i<=n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	} 
//	printf("%d\n", sum);
//	return 0;
//}

//#include <string.h>
//дһ���Լ���strcpy����
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (*dest == NULL && *src == NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//��ȫ�Ż���strcpy
//#include <assert.h>
////��Ŀ�ĵصĵ�ַ����
//char* my_strcpy(char* dest, const char* src)//const����*src������ͨ��*src�ı��ڴ��е�ֵ
//{
//	char* ret = dest;//��ǰ����dest�ĵ�ַ
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, NULL);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//����������arr1����ʼ��ַ����˿����滻arr1
//	return 0;
//}

//const��ô�ã�
//int main()
//{
//	const int num = 10;
//
//	const int* p = &num;
//	int* const p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//�Ż����my_strlen
#include <assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(*str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "123456";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}