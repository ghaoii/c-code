#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//contact_dynamic
void menu()
{
	printf("********************************************\n");
	printf("*********    1.add        2.del    *********\n");
	printf("*********    3.search     4.modify *********\n");
	printf("*********    5.show       6.sort   *********\n");
	printf("*********    0.exit                *********\n");
	printf("********************************************\n");
}

int main()
{
	int input = 0;

	struct Contact con;
	
	//��ʼ���ṹ��
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			DestroyContact(&con);
			printf("�˳�����!\n");
			break;
		default :
			printf("�������������ѡ��!\n");
			break;
		}
	} while (input);

	return 0;
}