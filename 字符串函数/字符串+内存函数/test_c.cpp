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
//#include <cassert>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	//strcmp比较的是两个字符串相应的字符大小
//	//如果两个字符相等，继续比较下一对字符
//	printf("%d\n", ret);
//	return 0;
//}


////模拟实现strcmp
//#include <cassert>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;//不相等并返回字符的差值
//}
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);//把arr2中的前四个拷贝进arr1的前四个，不会额外补'\0'
//
//	char p1[10] = "abcdef";
//	char p2[] = "bit";
//	strncpy(p1, p2, 6);
//	//如果p2的字符串不够六个，缺少的部分会自动补上'\0'
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	//追加完之后，会自动补一个'\0'
//	//如果追加的个数比字符串长，追加玩字符串之后，他不会再补'\0'
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);//数字限制的是比较字符的个数
//	printf("%d\n", ret);
//	return 0;
//}


//strstr - 查找子字符串
//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = strstr(p1, p2);
//	//在p1中寻p2，返回p1中找到字符串的首字符地址
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

////模拟实现strstr
//#include <cassert>
//const char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	//判断p2不为空字符串
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	char* s1, *s2;
//	char* cp = (char*)p1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return cp;//找到了，返还cp的地址
//		if (!*s1)
//			return NULL;//找不到
//		cp++;
//	}
//	return NULL;//所有轮次都找不到，返回NULL
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 - strtok
//	//641517196@qq.com
//	//641517196 qq com - strtok
//	char arr[] = "641517196@qq.com";
//	const char* p = "@.";
//	//拷贝一份临时备份
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	char* ret;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//错误码 对应一个错误信息
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	// 
//	//strerror的作用就是把错误码转化为对应的错误信息
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//打开文件失败可能有很多原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = '2';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

#include <ctype.h>
//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);
//	char ch2 = toupper('q');
//	putchar(ch2);
//	return 0;
//}

////字符函数的应用
//#include <ctype.h>
//int main()
//{
//	char arr[] = " I Am A Student";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

