#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
#include <windows.h>
//#include <stdlib.h>

//int main() {
//	int a = 0;
//	;// 是语句-空语句
//	return 0;
//}

//int main() {
//	int age = 100;
//	if (age < 18) //如果条件成立，要执行多条语句，应该使用代码块；否则else未能匹配if
//	{
//		printf("未成年\n");
//		printf("未成年不能饮酒\n");
//	}
//	else {
//		if (age >= 18 && age < 28)
//		//如果写成18<=age<28,语句先执行18<=age，结果为假，即0，然后继续执行0<28，结果为真，直接输出语句
//			printf("青年\n");
//		else if (age >= 28 && age < 58)
//			printf("中年\n");
//		else if (age >= 58 && age < 90)
//			printf("老年\n");
//		else
//			printf("暮年\n");
//	}

	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 58)
	//	printf("中年\n");
	//else if (age >= 58 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("暮年\n");

	//int age = 20;
	//if (age < 18)
	//	printf("未成年");
	//else
	//	printf("成年");

	//int age = 10;
	//if (age < 18)
	//	printf("未成年\n");
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;//如果不用代码块，else就会去匹配最近且未匹配的if
//}

//int main() {
//	int num = 4;
//	if (num = 5) { //= 赋值  ==判断相等  
//		printf("hehe\n");
//	}//为避免错误，建议写成if (5 == num)，这样的话，如果少些一个=，会报错
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		if (1 == n)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误！请输入1-7内的数字！\n");
//		break;
//	}

	/*switch (day) {//day必须是整形，然后判断day的值，是几就从几进去
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break; 
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}//break会直接跳出switch*/
	
	/*if (1 == day)
		printf("星期一\n");
	if (2 == day)
		printf("星期二\n");
	if (3 == day)
		printg("星期三\n");
	//......*/
//	return 0;
//}

//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//执行break之后会直接跳出while循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;

//int main() {
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//结束本次循环，即本次continue后面的语句不执行，直接跳回while惊醒判断
//		printf("%d ", i);
//		i++;//由于i==5之后执行了continue，执行不到i++，因此i会一直等于5，陷入死循环
//	}
//	return 0;
//}

//int main()
//{
//	char ch = getchar();//输入字符
//	putchar(ch);//输出字符
//	//printf("%c\n", ch);效果等同于putchar，但是显然putchar更简洁
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//输入crtl+z可打出一个EOF，从而退出程序
//	//EOF-end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组的本质就是地址，因此不需要&
//	//输入123456后，回车，输入缓冲区就存入123456\n，其中123456被scanf取走，还剩下\n
//	printf("请确认密码(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组的本质就是地址，因此不需要&
//	//输入123456后，回车，输入缓冲区就存入123456\n，其中123456被scanf取走，还剩下\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//只打印数组字符，跳过其他字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//for变种1
//int main()
//{
//	//for循环的初始化、判断、调整都可以省略
//	//但是，判断部分如果被省略，那么判断条件恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//如果不熟练，建议不要随便省略
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//for变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//笔试题，问：循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//这里将0赋值给k，那么判断为0，即为假
//		k++;//因此不会进入循环
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d hehe\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0 ;
//}

//1.计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;
//	}
//		printf("%d\n", j);
//	return 0;
//}

//计算1!+2!+3!+...+10!
//int main()
//{
//	int i;
//	int j = 1;
//	int h = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		h = 1;//这里h也要初始化否则结果就不是阶乘累加
//		for (j = 1; j <= i; j++)
//		{
//			h *= j;
//		}
//		sum += h;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i;
//	int h = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)//优化后的代码
//	{
//			h *= i;
//		sum += h;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
	//普通查找：
	//int i = 0;//这种方法最坏的情况要找n次
	//for (i = 0; i < sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("找到了，下标是：%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("找不到\n");
	//}
//	return 0;
//}

//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//welcome to bit!!!!
//##################
//w################!
//we##############!!
//...
//welcome to bit!!!!

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	//因为数组后面有一个'\n'这样的结束标志，占据一个下标空间
//
//	int right = strlen(arr1) - 1;//下标总是比字符串长度少1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则 提示登录成，
//如果三次均输入错误，则退出程序。
// 
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//不能写成password == "123456"
//		//字符串不能用 == 来比较其是否相等，而应该用一个库函数-strcmp
//		//strcmp-相当于左边-后边，如果左边大于右边，为正数，等于为0，小于为负数
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if(3 == i)
//		printf("密码输入错误3次，退出程序\n");
//	return 0;
//}
// 
// 自己写的：
//int main()
//{
//	int i = 1;
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	printf("请输入用户名:>");
//	scanf("%s", name);
//	printf("请输入密码:>");
//	scanf("%s", password);
//	if (strcmp(password, "123456") == 0)
//		printf("密码正确，登陆成功！\n");
//	else
//	{
//		for (i = 2; i <= 3; i++)
//		{
//			printf("密码输入错误！请重新输入:>");
//			scanf("%s", password);
//			if (strcmp(password, "123456") == 0)
//			{
//				printf("密码正确，登陆成功！\n");
//				break;
//			}
//		}
//		if (i > 3)
//			printf("密码输入错误3次，退出程序\n");
//			
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜大了，告诉你大了；猜小了，告诉你小了
//3.结束后，有一个菜单，继续还是退出
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("******** 1.play  0.exit ********\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//生成随机数
//	int ret = 0;
//	int guess = 0;
//		//time_t time(time_t *time),NULL是空指针
//		//time_t本质上是long int，是经过long两次重命名得到的，可查看定义
//		//如srand(1)这样只给入固定值的话，rand生成的值也一组固定的同样的值
//		//因此srand()里放入一个时刻处于变化的值，比如时间，然后通过时间戳来实现代码
//
//	ret = rand()%100+1;//把随机数的范围缩小至1-100
//		//仅仅用rand()函数，生成的随机数是都是固定的一组数字
//	//printf("%d\n", ret);
//	
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));//拿时间戳来设置随机生成器的起点
//		//且只需设置一次即可，否则随机数之间非常接近
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//进入猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);//input是1或者除0外的其他数字的时候重新循环，是0则退出循环
//	return 0;
//}输入字母进入死循环，why？

//自己写的：
//int main()
//{
//	int g = 1;
//	while (g == 1)
//	{
//		int i = 10;
//		int c = 0;
//		printf("猜数字：");
//		scanf("%d", &c);
//		if (i < c)
//		{
//			printf("你猜大了！\n");
//			continue;
//		}
//		else if (i > c)
//		{
//			printf("你猜小了！\n");
//			continue;
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			printf("继续游戏吗？ 1/2 :>");
//			scanf("%d", &g);
//			if (g == 1)
//				continue;
//			else
//			{
//				printf("游戏结束！\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}

//goto语句
//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("hi\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//关机程序
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 }; 
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在1之内关机，如果输入：我是猪，可取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			printf("已取消关机\n");
			break;
		}
	}

//again:
//	printf("电脑将在1之内关机，如果输入：我是猪，可取消关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("已取消关机");
//	}
//	else
//		goto again;
	return 0;
}