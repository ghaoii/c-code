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
//#include <cassert>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//strcmp�Ƚϵ��������ַ�����Ӧ���ַ���С
//	//��������ַ���ȣ������Ƚ���һ���ַ�
//	printf("%d\n", ret);
//	return 0;
//}


////ģ��ʵ��strcmp
//#include <cassert>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//���
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;//����Ȳ������ַ��Ĳ�ֵ
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
//	strncpy(arr1, arr2, 4);//��arr2�е�ǰ�ĸ�������arr1��ǰ�ĸ���������ⲹ'\0'
//
//	char p1[10] = "abcdef";
//	char p2[] = "bit";
//	strncpy(p1, p2, 6);
//	//���p2���ַ�������������ȱ�ٵĲ��ֻ��Զ�����'\0'
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	//׷����֮�󣬻��Զ���һ��'\0'
//	//���׷�ӵĸ������ַ�������׷�����ַ���֮���������ٲ�'\0'
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);//�������Ƶ��ǱȽ��ַ��ĸ���
//	printf("%d\n", ret);
//	return 0;
//}


//strstr - �������ַ���
//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = strstr(p1, p2);
//	//��p1��Ѱp2������p1���ҵ��ַ��������ַ���ַ
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

////ģ��ʵ��strstr
//#include <cassert>
//const char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	//�ж�p2��Ϊ���ַ���
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
//			return cp;//�ҵ��ˣ�����cp�ĵ�ַ
//		if (!*s1)
//			return NULL;//�Ҳ���
//		cp++;
//	}
//	return NULL;//�����ִζ��Ҳ���������NULL
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
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
//	//����һ����ʱ����
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
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
//	//������ ��Ӧһ��������Ϣ
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	// 
//	//strerror�����þ��ǰѴ�����ת��Ϊ��Ӧ�Ĵ�����Ϣ
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//���ļ�ʧ�ܿ����кܶ�ԭ��
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

////�ַ�������Ӧ��
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

