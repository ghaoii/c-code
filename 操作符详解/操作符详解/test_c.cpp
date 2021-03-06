#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 16;
//	//00000000 00000000 00000000 00010000 
//	//00000000 00000000 00000000 00001000|0 ==>8
//	//向右移动一个二进制位，有除以2的效果
//	int b = a >> 2;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	原码：10000000 00000000 00000000 00000001
//	反码：11111111 11111111 11111111 11111110
//	补码：11111111 11111111 11111111 11111111
//	右移：11111111 11111111 11111111 11111111|1 右边舍弃，左边补符号位
//	在进行反码、补码操作的时候，符号位不参与变化
//	补码-1（即反码）：11111111 11111111 11111111 11111110
//	取反  （即原码）：10000000 00000000 00000000 00000001 ==>-1
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	// |00000000 00000000 00000000 00000101
//	//0|00000000 00000000 00000000 00001010 左边舍弃，右边补0 ==>10 
//	//向左移动一个二进制位，得到乘以2的效果
//	printf("b = %d\n", b);
//	return 0;
//}

//如果有负数，两个整形都要转化为补码进行计算
//int main()
//{
//	int a = 3;
//	int b = 5;
// //按2进制位与
//	//00000000 00000000 00000000 00000011   a
//	//00000000 00000000 00000000 00000101   b
//	//00000000 00000000 00000000 00000001==>1
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//按2进制位或
//	//00000000 00000000 00000000 00000011   a
//	//00000000 00000000 00000000 00000101   b
//	//00000000 00000000 00000000 00000111==>7
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//按2进制位异或
//	//00000000 00000000 00000000 00000011   a
//	//00000000 00000000 00000000 00000101   b
//	//00000000 00000000 00000000 00000110==>6
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//交换两个数，不使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;//存在bug，当a+b > INT_MAX时，会溢出，即丢失部分2进制位，那么a中存的就不是a+b了
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;//利用异或的方法，不会溢出，但是可读性差，效率低
//	b = a ^ b;
//	a = a ^ b;
//	// a  011 110 110
//	// b  101 101 011
//	//a^b 110 011 101 
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//求一个整数存储在内存中的2进制中1的个数
//int main()
//{
//	int num = 3;
//	int count = 0;
//	scanf("%d", &num);
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000001
//	//00000000 00000000 00000000 00000001
//	int i = 0;
//	for (i = 0; i < 32; i++)//利用按位与的方法，将num不断左移判断
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//
//	//这个算法只能实现对原码的统计，当num是负数时以补码形式存储在内存中，而算法无法按照补码进行统计
//	//while (num)
//	//{
//	//	//123%10=3,12%10=2,1%10=1, 因此2进制也可以用这种方法统计
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//}
//	printf("%d", count);
//	return 0;
//}
//计算机里都是按照补码进行存储
//正整数的补码是其二进制表示，与原码相同


//sizeof计算的是变量所占内存空间的大小，单位是字节
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4 可以写作sizeof a，但不能写作sizeof int
//	printf("%d\n", sizeof(int));// sizeof后面如果是类型的话，不可以省略括号
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));//4 32位系统是4个字节，64位系统是8个字节
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));// 10*4=40
//	printf("%d\n", sizeof(int[10]));//40 数组也是有类型的，去掉数组名后，就是类型
//	printf("%d\n", sizeof(int[5]));//20 
//	return 0;
//}

//int main()
//{
//	int s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//4 不管sizeof里面是什么表达式，最终求的还是s的类型，即int
//	printf("%d\n", s);//0 上述sizeof内的表达式并不会执行，因此s还是原来的值，即0
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	//00000000 00000000 00000000 00001011
//	//00000000 00000000 00000000 00000100 (1 << 2)
//	//按位或 |
//	//00000000 00000000 00000000 00001111
//	//11111111 11111111 11111111 11111011 (~(1 << 2))
//	//按位与 &
//	//00000000 00000000 00000000 00001011
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(类型)-强制类型转换，注意不要写作 int(3.14)
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++， 先使用，再++
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//10*4 = 40
//	printf("%d\n", sizeof(ch));//10*1 = 10
//	test1(arr);//4
//	test2(ch);//4
//	//数组传参的时候传的是首元素的地址，因此由指针来接收，指针的大小有平台决定，32位是4字节，64位是8字节
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//输出：1，2，3，4
//首先进行a++，由于先使用，后++，所以进行逻辑与的时候还是0，
//如果逻辑与的左边为假，结果必为假，因此不会再继续执行&&右边的语句。

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//输出：2，3，3，5

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//输出：2，2，3，4
//逻辑或的左边是真的话，不会再执行右边语句，即执行a++后不再执行++b和d++了


//条件操作符（三目操作符）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	return 0;
//}

//逗号表达式,从左向右依次执行，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//13
//	printf("%d\n", c);
//	return 0;
//}

//if(a = b+1, c=a/2, d>0)

//下标引用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 10;//操作数：数组名、下标值
//	return 0;
//}

//函数调用
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//调用函数的时候的（）就是函数调用操作符
//	//函数调用操作符的操作数是：函数名，参数；因此，至少有一个操作数
//	printf("max = %d\n", max);
//	return 0;
//}

//学生
//创建一个结构体变量-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1， 并初始化
//	struct Stu s1 = { "张三", 22, "201920730006" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//00000000 00000000 00000000 00000011 -3
//	//00000011 -a 截断，取低位
//	//01111111 -b
//	//由于c是字符型，为了避免精度不够，先整形提升，转化为普通整形，而高位补符号位
//	//00000000 00000000 00000000 00000011 -a
//	//00000000 00000000 00000000 01111111 -b
//	//00000000 00000000 00000000 10000010 -c = a+b
//	//然后将整形转化为字符型，截断，取低位
//	//10000010 -c
//	//但是由于打印的是整形（%d），因此又要转换位整形，高位补符号位
//	//11111111 11111111 11111111 10000010 -c的补码，负数再内存中以补码的形式存放，接下来转化位原码
//	//11111111 11111111 11111111 10000001 -c的反码
//	//10000000 00000000 00000000 01111110 -c的原码，即-126
//	printf("%d\n", c);
//	return 0;
//}
//如果是无符号数，unsigned char，高位补0

//整形提升实例1 
//int main() 
//{
//	char a = 0xb6; //整形提升后 11111111 11111111 11111111 11000110
//	short b = 0xb600; //整形提升后 11111111 11111111 11000110 00000000
//	int c = 0xb6000000; //本来就是整形
//	if (a == 0xb6)
//		printf("a"); 
//	if (b == 0xb600)
//		printf("b"); 
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//实例2 
//int main() 
//{
//	char c = 1; 
//	printf("%u\n", sizeof(c)); 
//	printf("%u\n", sizeof(+c));//+c是对c的计算，因此整型提升 
//	printf("%u\n", sizeof(!c)); //逻辑反，把1变成0，但没有计算，所以也就没有整型提升
//	return 0;
//}


