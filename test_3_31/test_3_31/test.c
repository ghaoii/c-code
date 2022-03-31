#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//模拟实现memcpy
//void* my_memcpy(void* dest, void* src, int num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 10,9,8,7,6 };
//	my_memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//模拟实现memmove
//void* my_memmove(void* dest, void* src, int num)
//{
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (num)
//		{
//			*((char*)dest + num-1) = *((char*)src + num-1);
//			num--;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(&(arr[3]), &(arr[1]), 5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//模拟实现strstr
#include <assert.h>
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	assert(*dest && *src);
//
//	char* ch = dest;
//	while (*ch != *src)
//	{
//		ch++;
//	}
//
//	while (*ch)
//	{
//		char* s1 = ch;
//		char* s2 = src;
//		while ((*s1 == *s2) && *s2 && *s1)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return ch;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		ch++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到！\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include <assert.h>
//char* my_strncpy(char* dest, char* src, int num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (num && *src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	if (num > 0)
//	{
//		while (num)
//		{
//			*dest = '\0';
//			dest++;
//			num--;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "defqwerasdf";
//	my_strncpy(arr1, arr2, 9);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dest, char* src, int num)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	while (num && *src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	*dest = '\0';
//	
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxxx";
//	char arr2[] = "qwer";
//	char* ret = my_strncat(arr1, arr2, 8);
//	printf("%s\n", ret);
//	return 0;
//}


int my_strncmp(char* dest, char* src, int num)
{
	while (num && (*dest == *src))
	{
		dest++;
		src++;
		num--;
	}
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return *dest - *src;
	}
}

int main()
{
	char arr1[20] = "abcdefqwer";
	char arr2[] = "abcd";
	int ret = my_strncmp(arr1, arr2, 5);
	if (ret == 0)
	{
		printf("相同\n");
	}
	else
	{
		printf("ret = %d\n", ret);
	}
	return 0;
}

