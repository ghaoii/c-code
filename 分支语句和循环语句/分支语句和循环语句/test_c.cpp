#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int a = 0;
//	;// �����-�����
//	return 0;
//}

//int main() {
//	int age = 100;
//	if (age < 18) //�������������Ҫִ�ж�����䣬Ӧ��ʹ�ô���飻����elseδ��ƥ��if
//	{
//		printf("δ����\n");
//		printf("δ���겻������\n");
//	}
//	else {
//		if (age >= 18 && age < 28)
//		//���д��18<=age<28,�����ִ��18<=age�����Ϊ�٣���0��Ȼ�����ִ��0<28�����Ϊ�棬ֱ��������
//			printf("����\n");
//		else if (age >= 28 && age < 58)
//			printf("����\n");
//		else if (age >= 58 && age < 90)
//			printf("����\n");
//		else
//			printf("ĺ��\n");
//	}

	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 58)
	//	printf("����\n");
	//else if (age >= 58 && age < 90)
	//	printf("����\n");
	//else
	//	printf("ĺ��\n");

	//int age = 20;
	//if (age < 18)
	//	printf("δ����");
	//else
	//	printf("����");

	//int age = 10;
	//if (age < 18)
	//	printf("δ����\n");
//	return 0;
//}

//����else
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
//	return 0;//������ô���飬else�ͻ�ȥƥ�������δƥ���if
//}

//int main() {
//	int num = 4;
//	if (num = 5) { //= ��ֵ  ==�ж����  
//		printf("hehe\n");
//	}//Ϊ������󣬽���д��if (5 == num)�������Ļ��������Щһ��=���ᱨ��
//	return 0;
//}

//���1-100֮�������
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������������1-7�ڵ����֣�\n");
//		break;
//	}

	/*switch (day) {//day���������Σ�Ȼ���ж�day��ֵ���Ǽ��ʹӼ���ȥ
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break; 
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}//break��ֱ������switch*/
	
	/*if (1 == day)
		printf("����һ\n");
	if (2 == day)
		printf("���ڶ�\n");
	if (3 == day)
		printg("������\n");
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
		{//switch����Ƕ��ʹ��
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