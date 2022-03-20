#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//数组名是首元素地址，但有两个例外
//	//1.sizeof(数组名) - 数组名表示整个数组
//	//2.&取地址数组名 - 数组名表示整个数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a)); //4*4 = 16 - sizeof(数组名) - 计算的是数组总大小
//	printf("%d\n", sizeof(a + 0)); //4或8 - a没有单独放在sizeof中，这里的数组名表示首元素地址
//	printf("%d\n", sizeof(*a)); //4 - *是解引用，因此这里的a是首元素地址，这里算的首元素的大小
//	printf("%d\n", sizeof(a + 1));//4或8 - 和sizeof(a + 0)一样，a+1是第二个元素地址
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
//	printf("%d\n", sizeof(&a)); //4或8 - &a去除的是数组的地址，那就是地址的大小
//	printf("%d\n", sizeof(*&a)); //16 - &a先取出整个数组的地址，然后*解引用，因此是整个数组的大小
//	printf("%d\n", sizeof(&a + 1));//4或8 - &a取出整个数组，&a+1跳过整个数组，但还是地址
//	printf("%d\n", sizeof(&a[0]));//4或8 - 取出的是首元素地址
//	printf("%d\n", sizeof(&a[0] + 1));//4或8 - 取出的是第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4或8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4或8
//	printf("%d\n", sizeof(&arr + 1));//4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//4或8
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//没有'\0', 随机值
//	printf("%d\n", strlen(arr + 0));//和strlen(arr)完全一样，随机值
//	printf("%d\n", strlen(*arr));//strlen接受的参数是地址，*arr是元素值，就是传了'a',ASCII是97，因此报错
//	printf("%d\n", strlen(arr[1]));//同上，报错
//	printf("%d\n", strlen(&arr));//随机值，取出整个数组的地址
//	printf("%d\n", strlen(&arr + 1)); //随机，跳过整个数组后的地址，因此和其他的随机值差6
//	printf("%d\n", strlen(&arr[0] + 1));//随机，从第二个元素地址开始，和其他随机差1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4或8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr)); //4或8
//	printf("%d\n", sizeof(&arr + 1)); //4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//4或8
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//传的‘a’，报错
//	printf("%d\n", strlen(arr[1]));//传的是元素值，报错
//	printf("%d\n", strlen(&arr)); //传的是char(*)[7]，但strlen接收的参数类型是const char* ，因此会有警告
//	//部分编译器报错，如果能running，那么结果是6，相当于把数组指针强制转换为字符指针
//	printf("%d\n", strlen((char*)&arr));//强转之后结果为6
//	printf("%d\n", strlen(&arr + 1)); //由于跳过一个数组，因此结果为随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	const char* p = "abcdef";//把字符串的首元素地址传给p
//
//	printf("%d\n", sizeof(p)); //4或8
//	printf("%d\n", sizeof(p + 1)); //4或8 - p+1得到的是第二个元素的地址
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1 - 等价于*p
//	//int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0)
//	printf("%d\n", sizeof(&p)); //4或8 - &p是二级指针
//	printf("%d\n", sizeof(&p + 1)); //4或8
//	printf("%d\n", sizeof(&p[0] + 1));//4或8 - &p[0]就是第一个元素的地址，+1是第二个元素的地址
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1)); //5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen((char*)&p)); //传的是二级指针 err
//	//强转 - 如果p的地址是0x0012ff44，&p之后，p的地址存到新的空间
//	//如果小端存储，以44 ff 12 00存储，那结果就是3，如果地址里没有00，就是随机值
//	printf("%d\n", strlen(&p + 1)); //随机或err，强转之后，p+1指向p后面的地址，随机
//	printf("%d\n", strlen(&p[0] + 1));//5 - 传的是第二个元素的地址和p+1等价
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//3*4*4 = 48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4*4 = 16 - 第一行数组的数组名，所以是第一行数组的大小
//	//a[0]相当于第一行作为一维数组的数组名，sizeof(a[0])把数组名单独放在sizeof()内， 计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4或8 - 这里的a[0]是第一行的首元素地址，a[0]+1是第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1))); //4 - 第一行数组中第二个元素的大小
//	printf("%d\n", sizeof(a + 1)); //4或8 - 这里的a是首元素地址，a+1就是第二行数组的地址
//
//	printf("%d\n", sizeof(*(a + 1))); //4*4 = 16 - 对第二行数组解引用，是第二行数组的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4或8 - &a[0]+1 == a+1，第二行数组地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 第二行数组的大小
//	printf("%d\n", sizeof(*a));//16 - 第一行数组的大小
//	printf("%d\n", sizeof(a[3]));//16 - 4个整形的一维数组
//	//sizeof()括号里的表达式不参与真实计算，只是把第四行的数组名拿出来了，所以计算的是第四行的大小
//	return 0;
//}


//指针笔试题

//int main() 
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//} //程序的结果是什么？


//struct Test 
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4]; 
//}*p; 
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main() 
//{
//	p = (struct Test*)0x100000;
//	//指针加减，即走一步走多远，要看指针的类型，这是指针类型的意义
//	printf("%p\n", p + 0x1);//结构体指针，已知大小为20直接，0x100000+20 == 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//这里的p为long int，直接+1，即0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//无符号整形指针，走一步加4，0x100004
//	return 0;
//}

//int main() 
//{
//	int a[4] = { 1, 2, 3, 4 }; 
//	int* ptr1 = (int*)(&a + 1); 
//	int* ptr2 = (int*)((int)a + 1); 
//	printf("%x,%x", ptr1[-1], *ptr2); //0x00000004, 0x02000000
//	return 0;
//}

//int main() 
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //( )里面是逗号表达式，所以只放了1，3，5
//	int* p;
//	p = a[0]; 
//	printf("%d", p[0]); 
//	return 0;
//}


//int main() 
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a; //p - int(*)[]4 <--> a - int(*)[5],a表示的首元素地址是一维数组的地址，因此a也是数组指针
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); 
//	return 0;
//}

//int main() 
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int* ptr1 = (int*)(&aa + 1); 
//	int* ptr2 = (int*)(*(aa + 1)); 
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	return 0;
//}

//int main() 
//{
//	const char* a[] = { "work","at","alibaba" };
//	const char** pa = a; 
//	pa++;
//	printf("%s\n", *pa); 
//	return 0;
//}

int main() 
{
	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
	const char** cp[] = { c + 3,c + 2,c + 1,c };
	const char*** cpp = cp; 
	printf("%s\n", **++cpp); 
	printf("%s\n", *-- * ++cpp + 3); 
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1); 
	return 0;
}