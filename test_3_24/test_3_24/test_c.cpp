#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <cassert>

//ģ��ʵ��strcpy
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strncpy

//char* my_strncpy(char* arr1, const char* arr2, int num)
//{
//	assert(arr1 && arr2);//�жϲ����Ƿ�Ϊ��ָ��
//	if (!num)
//		return arr1;//���numΪ0��ֱ�ӷ���arr1
//	//����
//	char* ret = arr1;
//	while (num && *arr2)
//	{
//		*arr1 = *arr2;
//		arr1++; 
//		arr2++;
//		num--;
//	}
//	//�ж�num�Ƿ�Ϊ0����Ϊ�������'\0'ֱ��numΪ0
//	if (num > 0)
//	{
//		while (num--)
//		{
//			*arr1 = '\0';
//			arr1++;
//		}
//	}
//	else
//		*arr1 = '\0';//num��Ϊ0�����ѿ����꣬��ĩβ����'\0'
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "abcdef";
//	char* ret = my_strncpy(arr1, arr2, 6);
//	printf("%s\n", ret);
//	return 0;
//}


//char* my_strncat(char* arr1, const char* arr2, int num)
//{
//	assert(arr1 && arr2);
//	if (!num)
//		return arr1;
//	char* ret = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (num-- && (*arr1++ = *arr2++))
//	{
//		;
//	}
//	if (num > 0)
//		return ret;
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
//	char arr2[] = "world,haha";
//	char* ret = my_strncat(arr1, arr2, 15);
//	printf("%s\n", ret);
//	return 0;
//}

//ģ��ʵ��strncmp
//int my_strncmp(const char* arr1, const char* arr2, int num)
//{
//	assert(arr1 && arr2 && num);
//	while ((*arr1 == *arr2) && num--)
//	{
//		if (!*arr1 || !num)
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdqwer";
//	int ret = my_strncmp(arr1, arr2, 5);
//	int tmp = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//ģ��ʵ��strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1, str2);
//	if (!*str2)
//		return NULL;
//	char* cp = (char*)str1;
//	char* p1, * p2;
//	while (*cp)
//	{
//		p1 = cp;
//		p2 = (char*)str2;
//		while (*p1 == *p2)
//		{
//			p1++;
//			p2++;
//			if (!*p2)
//				return cp;//���ж�p2�����Ϊ0�����ҵ���
//			if (!*p1)
//				return NULL;//���p2û�����꣬��p1�Ѿ������ˣ����Ҳ���
//		}
//		cp++;
//	}
//	return NULL;//�Ҳ���
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

