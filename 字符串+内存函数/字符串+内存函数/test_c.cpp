#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//��������ʱ����ģ��ʵ��strlen
//int my_strlen(const char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(arr + 1);
//}
//int main()
//{
//	const char* arr = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//strcpy��ʵ��
//#include <string.h>
//#include <cassert>
//char*  my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//'\0'��ֵ��dest֮�󣬱��ʽ�����0�����ٽ���ѭ��
//	{
//		;
//	}
//	return ret;//���ܷ���dest����Ϊdestָ���λ���Ѿ��������ַ���
//}
//
//int main()
//{
//	char arr1[] = "abcdefght";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxx";//Ŀ��ռ�����㹻��ǿ��׷�ӻ����Խ�����
//	char arr2[] = "world";
//	strcat(arr1, arr2);//����ֵ��arr1�����ַ���ַ
//	//Ŀ�ĵغ�Դͷ��Ҫ��\0
//	printf("%s\n", arr1);
//	return 0;
//}


//ʵ��strcat
#include <cassert>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.�ҵ�Ŀ���ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

