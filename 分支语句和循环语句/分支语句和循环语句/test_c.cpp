#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

int main() {
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d", m, n);
	return 0;
}