#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


void menu()
{
	printf("***********************************************\n");
	printf("*********    1. add          2.del     ********\n");
	printf("*********    1. search       2.modify  ********\n");
	printf("*********    1. show         2.sort    ********\n");
	printf("*********    0.exit                    ********\n");
	printf("***********************************************\n");
}

int main()
{
	int input;
	struct PeoInfo con[MAX];
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}