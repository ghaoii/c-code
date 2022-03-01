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

