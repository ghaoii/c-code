#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int mian()
//{
//	int a = 10;
//	int* p = &a;//p-指针变量
//	return 0;
//}

//int main()
//{
//	//指针的大小与电脑地址线有关系，32位系统4个字节，64位8字节
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	//按过程调试，窗口打开内存窗口，观察&a的内容
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//内存会倒着存储，44 33 22 11
//	//char* pc = &a;会报错
//	//printf("%p\n", pa);
// 	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	//printf("%p\n", pa);会报错，如果在别的可以执行，结果和上面的打印一致
//	*pa = 0;//如果能运行通过，地址里的4个个字节，只有一个字节改变为00，即00 33 22 11
//	//由此可见，指针类型是有意义的
//	//虽然指针能够存放各种类型的值，但是解引用时，只会根据指针类型改变，比如char* 就只改变数据中的一个字节
//	return 0;
//}
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p，*p能够访问4个字节
//char*p，*p能够访问1个字节
//double*p，*p能够访问8个字节

//指针+整数
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
//指针类型决定了：指针走一步走多远（指针的步长）
//int*p; p+1 -> 4
//char*p; p+1 ->1
//double; p+1 ->8

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;//首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;//int* 4个字节改变一次
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
//		*(pa + i) = 1;//char* 1个字节改变一次
//	}
//	return 0;
//}//vs2019报错

//野指针:就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//int main()
//{
//	int a;//局部变量不初始化，默认随机值
//	int* p;//同样，局部的指针变量，不随机值，也会被初始化
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
//		*p++ = i;//当指针指向的空间超过范围，超出的部分也是野指针
//	}
//	return 0;
//}

//指针指向的空间被释放了
//int* test()
//{
//	int a = 0;
//	return &a;//当函数走完之后，在函数内创建的空间就还给操作系统了，也就是说，原来a的空间将被取消
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//在函数内部时，p确实接收到了地址，但是走出函数之后，p就是野指针了
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//指针初始化
//	int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//指针指向的空间释放后，把NULL赋值给pa
//	*pa = NULL;
//	//*pa = 10;指针为空指针时，不能强行访问，所以使用前进行判断
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

//指针+-整数
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

//指针-指针
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", & arr[9] - &arr[0]);//得到的是两个指针中间元素的个数
//	printf("%d\n", & arr[0] - &arr[9]);//得到一个负数，其绝对值是中间元素的个数
//	//不可以不同类型的指针相减
//	return 0;
//}

//模拟strlen-第三种方法
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
	//指针+-整数；指针的关系运算
	for (vp = &values[N_VALUES]; vp > &values[0]; )
	{
		*--vp = 0;
	}
	return 0;
}

