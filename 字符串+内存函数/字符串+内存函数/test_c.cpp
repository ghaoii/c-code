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

//不创建临时变量模拟实现strlen
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

//strcpy的实现
//#include <string.h>
//#include <cassert>
//char*  my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//'\0'赋值给dest之后，表达式结果是0，不再进入循环
//	{
//		;
//	}
//	return ret;//不能返回dest，因为dest指向的位置已经不是首字符了
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
//	char arr1[30] = "hello\0xxxxxxxxx";//目标空间必须足够大，强行追加会造成越界访问
//	char arr2[] = "world";
//	strcat(arr1, arr2);//返回值是arr1的首字符地址
//	//目的地和源头都要有\0
//	printf("%s\n", arr1);
//	return 0;
//}


//实现strcat
#include <cassert>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找到目的字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
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

