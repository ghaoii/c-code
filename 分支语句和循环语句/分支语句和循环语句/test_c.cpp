#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
#include <windows.h>
//#include <stdlib.h>

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
//		{//switch����Ƕ��ʹ��
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
//			break;//ִ��break֮���ֱ������whileѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;

//int main() {
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��������ѭ����������continue�������䲻ִ�У�ֱ������while�����ж�
//		printf("%d ", i);
//		i++;//����i==5֮��ִ����continue��ִ�в���i++�����i��һֱ����5��������ѭ��
//	}
//	return 0;
//}

//int main()
//{
//	char ch = getchar();//�����ַ�
//	putchar(ch);//����ַ�
//	//printf("%c\n", ch);Ч����ͬ��putchar��������Ȼputchar�����
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//����crtl+z�ɴ��һ��EOF���Ӷ��˳�����
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
//	printf("����������:>");
//	scanf("%s", password);//����ı��ʾ��ǵ�ַ����˲���Ҫ&
//	//����123456�󣬻س������뻺�����ʹ���123456\n������123456��scanfȡ�ߣ���ʣ��\n
//	printf("��ȷ������(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//����ı��ʾ��ǵ�ַ����˲���Ҫ&
//	//����123456�󣬻س������뻺�����ʹ���123456\n������123456��scanfȡ�ߣ���ʣ��\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//ֻ��ӡ�����ַ������������ַ�
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

//for����1
//int main()
//{
//	//forѭ���ĳ�ʼ�����жϡ�����������ʡ��
//	//���ǣ��жϲ��������ʡ�ԣ���ô�ж�������Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//��������������鲻Ҫ���ʡ��
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

//for����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//�����⣬�ʣ�ѭ�����ٴ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//���ｫ0��ֵ��k����ô�ж�Ϊ0����Ϊ��
//		k++;//��˲������ѭ��
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

//1.����n�Ľ׳�
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

//����1!+2!+3!+...+10!
//int main()
//{
//	int i;
//	int j = 1;
//	int h = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		h = 1;//����hҲҪ��ʼ���������Ͳ��ǽ׳��ۼ�
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
//	for (i = 1; i <= 10; i++)//�Ż���Ĵ���
//	{
//			h *= i;
//		sum += h;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
	//��ͨ���ң�
	//int i = 0;//���ַ���������Ҫ��n��
	//for (i = 0; i < sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("�Ҳ���\n");
	//}
//	return 0;
//}

//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//	//��Ϊ���������һ��'\n'�����Ľ�����־��ռ��һ���±�ռ�
//
//	int right = strlen(arr1) - 1;//�±����Ǳ��ַ���������1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣ1��
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ�� ��ʾ��¼�ɣ�
//������ξ�����������˳�����
// 
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//����д��password == "123456"
//		//�ַ��������� == ���Ƚ����Ƿ���ȣ���Ӧ����һ���⺯��-strcmp
//		//strcmp-�൱�����-��ߣ������ߴ����ұߣ�Ϊ����������Ϊ0��С��Ϊ����
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if(3 == i)
//		printf("�����������3�Σ��˳�����\n");
//	return 0;
//}
// 
// �Լ�д�ģ�
//int main()
//{
//	int i = 1;
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	printf("�������û���:>");
//	scanf("%s", name);
//	printf("����������:>");
//	scanf("%s", password);
//	if (strcmp(password, "123456") == 0)
//		printf("������ȷ����½�ɹ���\n");
//	else
//	{
//		for (i = 2; i <= 3; i++)
//		{
//			printf("���������������������:>");
//			scanf("%s", password);
//			if (strcmp(password, "123456") == 0)
//			{
//				printf("������ȷ����½�ɹ���\n");
//				break;
//			}
//		}
//		if (i > 3)
//			printf("�����������3�Σ��˳�����\n");
//			
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.�´��ˣ���������ˣ���С�ˣ�������С��
//3.��������һ���˵������������˳�
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
//	//���������
//	int ret = 0;
//	int guess = 0;
//		//time_t time(time_t *time),NULL�ǿ�ָ��
//		//time_t��������long int���Ǿ���long�����������õ��ģ��ɲ鿴����
//		//��srand(1)����ֻ����̶�ֵ�Ļ���rand���ɵ�ֵҲһ��̶���ͬ����ֵ
//		//���srand()�����һ��ʱ�̴��ڱ仯��ֵ������ʱ�䣬Ȼ��ͨ��ʱ�����ʵ�ִ���
//
//	ret = rand()%100+1;//��������ķ�Χ��С��1-100
//		//������rand()���������ɵ�������Ƕ��ǹ̶���һ������
//	//printf("%d\n", ret);
//	
//	//������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�����������������������
//		//��ֻ������һ�μ��ɣ����������֮��ǳ��ӽ�
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);//input��1���߳�0����������ֵ�ʱ������ѭ������0���˳�ѭ��
//	return 0;
//}������ĸ������ѭ����why��

//�Լ�д�ģ�
//int main()
//{
//	int g = 1;
//	while (g == 1)
//	{
//		int i = 10;
//		int c = 0;
//		printf("�����֣�");
//		scanf("%d", &c);
//		if (i < c)
//		{
//			printf("��´��ˣ�\n");
//			continue;
//		}
//		else if (i > c)
//		{
//			printf("���С�ˣ�\n");
//			continue;
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			printf("������Ϸ�� 1/2 :>");
//			scanf("%d", &g);
//			if (g == 1)
//				continue;
//			else
//			{
//				printf("��Ϸ������\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}

//goto���
//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("hi\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//�ػ�����
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 }; 
	system("shutdown -s -t 60");
	while (1)
	{
		printf("���Խ���1֮�ڹػ���������룺��������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("��ȡ���ػ�\n");
			break;
		}
	}

//again:
//	printf("���Խ���1֮�ڹػ���������룺��������ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("��ȡ���ػ�");
//	}
//	else
//		goto again;
	return 0;
}