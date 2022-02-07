
#include <stdio.h>
#include <string.h>
//int main(int argc, const char * argv[]) {
//    两个数的和
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d",&num1,&num2);
//    sum = num1 + num2;
//    printf("sum = %d\n",sum);
//    return 0;
//}

//int main(){
//    const int num = 4;
//    //此时的num是const修饰的常变量
//    printf("%d\n", num);
//    return 0;
//}

//enum Sex{
//    male,
//    female,
//    secret
//};
//male、female、secret-枚举常量
//int main(){
//    enum Sex s = female;
//    s = male; //s = 6; //error,
//    printf("%d\n",s);
//    printf("%d\n", male);  //0
//    printf("%d\n",female); //1
//    printf("%d\n",secret); //2
//    return 0;
//}

//字符串类型
//int main(){
//    "abcdefg";
//    "holle world";
//    "";//空字符串
//    return 0;
//}

//该段代码实现错误
//int main()
//{
//    char arr1[] = "abc";//数组。 “abc”-'a', 'b', 'c', '0\'---‘\0’字符串的结束标志
//    char arr2[] = {'a', 'b', 'c'};//加上0或者‘\0’后的结果与arr1一致
//    printf("%s\n",arr1);//%c是字符，%s是字符串
//    printf("%s\n", arr2);//以%s字符串类型打印，末尾没有‘\0’，因此会输出随机值
//    printf("%d\n", strlen(arr1));//strlen--string length-用于计算字符串长度的
//    printf("%d\n", strlen(arr2));
//    return 0;
//}

//int main(){
//    printf("c:\\test\\test.c\n");//加上\进行转义，防止被认为\t是水平制表符
//    printf("%c\n", '\'');//如果不对中间的‘进行转义，前面一对单引号会被认为输出空字符且最后一个单引号落单，因此会报错
//    printf("%s\n","\"");
//    return 0;
//}

//int main(){
//    printf("%d\n",strlen("c:\test\32\test.c"));
//    printf("%c\n",'\x61');//十进制97，ASCII码值为'a'
//    return 0;
//}

//选择语句
//int main(){
//    int input = 0;
//    printf("你会去敲代码吗？（选择0或者1）：>");
//    scanf("%d", &input);//疑问：为什么没有\n换行，但是结果却从另一行开始
//    if (input == 0) {
//        printf("坚持，你会有好offer\n");
//    }
//    else{
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//}

//while循环语句
//int main(){
//    printf("加入比特\n");
//    int line = 0;
//    while (line<=20000) {
//        printf("我要继续努力，line：%d\n", line);
//        line++;
//    }
//    if (line>=20000) {
//        printf("好offer\n");
//    }
//    return 0;
//}

//函数：自定义函数、库函数
//int Add(int x, int y){
//    int z = x + y;
//    return z;
//}
//int main(int argc, const char * argv[]) {
////    两个数的和
//    int num1 = 11;
//    int num2 = 24;
//    int sum = 0;
//    //sum = num1 + num2;
//    sum = Add(num1, num2);//用自定义函数替换上面的一句
//    printf("sum = %d\n",sum);
//    return 0;
//}

//数组
//int main(){
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n", arr[4]);//下标访问元素
//    int i = 0;
//    while (i<10) {
//        printf("%d\n", arr[i]);
//        i++;//加断点
//    }
//    return 0;
//}

//算数操作符 + - * / %
//int main(){
//    int a = 5/2;//求商
//    int b = 5%2;//取模
//    printf("%d %d\n",a,b);
//    return 0;
//}

//移（二进制）位操作符
//int main(){
//    int a = 1;
//    int b = a<<1;
//    int c = a<<2;
//    printf("%d\n",a);
//    printf("%d\n",b);
//    printf("%d\n",c);
//    return 0;
//}

//（二进制）位操作符
//int main(){
//    int a = 3;
//    int b = 5;
//    int c = a&b;
//    int d = a|b;
//    int e = a^b;
//    printf("%d\n%d\n%d\n", c, d, e);
//    return 0;
//}

//单目操作符
//int main(){
//    int a = 10;
//    printf("%d\n",!a);
//    int b = 0;
//    printf("%d\n", !b);//逻辑反操作
//    //计算数组的类型大小
//    int arr[10] = {0};//10个整形元素的数组
//    printf("%d\n",sizeof(arr));//10*sizeof（int）=40
//    //计算元素数组的个数
//    int sz = 0;
//    sz = sizeof(arr)/sizeof(arr[0]);
//    printf("sz = %d\n",sz);
//    return 0;
//}

//写一个函数求两个函数的较大值
//int MAX(int x, int y) {
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main() {
//    int num1 = 10;
//    int num2 = 20;
//    int max = MAX(num1, num2);
//    printf("较大值是：%d\n", max);
//    return  0;
//}

//int main() {
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//如果sizeof求的是变量的大小时，可以省略括号
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//求数组包含的单位个数
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = ~a;//~是按（二进制）位取反，b是有符号的整型，存储有符号的数是，第一位是符号位
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//0000000000000000000
//	//1111111111111111111
//	//1111111111111111110
//	//1000000000000000001
//	printf("%d\n", b);//使用的，打印的是b的原码
//	return 0;
//}

//int main() {
//	int a = 10;
//	//int b = a++;//后置++，先使用a，再进行++ 10，11
//	//int b = ++a;//前置++，先++，再使用 11，11
//	//int b = a--;//后置--，先使用a，再-- 9，10
//	//int b = --a;//前置--，先--，在使用 9，9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//（类型） 强制类型转换
//int main() {
//	int a = (int)3.14;
//	return 0;
//}

//逻辑操作符&&、||
//int main() {
//	//真--非0
//	//假--0
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//条件操作符（exp1 ？ exp2 ：exp3）如果exp1为真，输出exp2；如果exp1为假，输出exp3
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//static静态变量
//void test() {
//	static int a = 1;//静态的局部变量，每次退出test函数，变量a不会消失而是会累加
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test();//如果变量a不是static，每次退出test时，a就消失
//		i++;
//	}
//	return 0;
//}
//static修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//int main() {
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//static修饰函数改变了函数的链接属性：外部链接属性->内部链接属性
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//define定义宏--带参数
//#define MAX(X, Y) (X>Y?X:Y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a;//取地址
//	printf("%p\n", p);//%p用于打印地址
//	printf("%p\n", &a);
//	//int*这种变量是用来存放地址的--指针变量
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* p = &ch;//p是一个变量-指针变量
//	*p = 'a';//*-解引用操作符/间接访问操作符
//	printf("%c\n", ch);
//	printf("%c\n", *p);//这里的*p就是ch
//	printf("%d\n", sizeof(p));//地址p所占空间是4个字节
//	return 0;
//}

//结构体-用以描述复杂对象-是一种我们自己创造出来的类型
struct Book {
	char name[20];//C语言程序设计
	short price;//55
};
int main() {
	struct Book b1 = { "C语言程序设计", 55 };
	//利用结构体类型-创建一个该类型的结构体变量，变量名为 b1
	//struct Book* pb = &b1;
	strcpy(b1.name, "C++"); //strcpy-string copy-字符串拷贝,把“C++”拷贝进目的地 b1.name
	//strcpy需要定义#include <string.h>
	printf("%s\n", b1.name);
	//b1.name = "C++";//不可行，因为name是数组，数组本质上是一组地址
	b1.price = 15;
	//. 结构体变量.成员
	//printf("%s\n", (*pb).name);//利用pb打印书名和价格
	//printf("%d\n", (*pb).price);
	//-> 结构体指针->成员
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	//return 0;
}