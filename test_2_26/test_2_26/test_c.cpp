#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��������int������ֵ
//���õ���������ʵ�ֽ���
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//���üӼ�ʵ�ֱ�����ֵ�Ľ���
//int main()
//{
//	//�������⣺
//	//INT_MAX - 2147482647
//	//int - 4���ֽ� -32bitλ - ���ֵ
//	//���a+b�������ֵ�����ݻᶪʧ����󽻻����ֵ��ȻҲ�Ͳ���ȷ��
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//������������
//int main()
//{
//	//ʹ����򷽷������������Ҳû��ʹ�õ���������
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//ʵ��������ҵ�У�����õ�������������������Ŀɶ��Ըߣ�ִ��Ч�ʸ�
//���Ĳ������ɶ��Բִ��Ч�ʵ�����������

//�ҳ�ֻ������һ�ε�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//a^a=0
//	//0^a=a
//	//a^b^a=b
//	//a^a^b=0^b,�ɴ˿ɼ�����������㽻���ɵ�
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("ֻ������һ�ε�������: %d\n", ret);
//
//	//������⣬�����������������������ϴ�
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	int count = 0;
//	//	int j = 0;
//	//	for (j = 0; j < sz; j++)
//	//	{
//	//		if (arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if (count == 1)
//	//	{
//	//		printf("ֻ������һ�ε�������: %d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}

//дһ���ػ�����
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 120");
	printf("��ע�⣬���ĵ��Խ���2����֮�ڹػ���\n");
	printf("������롰������������ֹͣ�Զ��ػ���\n");
again:
	printf("������:>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("������ȷ����ȡ����\n");
	}
	else
	{
		printf("�����������������\n");
		goto again;
	}
	return 0;
}

