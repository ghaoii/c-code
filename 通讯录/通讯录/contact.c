#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size >= 1000)
	{
		printf("ͨѶ¼���ˣ��޷����\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סַ��");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("����ɹ�!\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-15s\t%-20s\n", 
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}

int FindContact(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����Ҫɾ������
	int pos = FindContact(ps, name);
	//û�ҵ�����-1
	if (pos == -1)
	{
		printf("û���ҵ����ˣ�\n");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}	
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������ҪѰ�ҵ��˵�����:>");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("û���ҵ�����!\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-20s\t%-3d\t%-5s\t%-15s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("û���ҵ����ˣ�\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��");
		scanf("%s", ps->data[pos].tele);
		printf("������סַ��");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

int cmp_struct_by_name(void* e1, void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	char tmp;
	for (i = 0; i < width; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void My_BubbleSort(void* ps, int sz, int width, int (*cmp)(void*, void*))
{
	int i = 0;
	//����������
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		//�����Ķ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)ps + j * width, (char*)ps + (j + 1) * width) > 0)
			{
				Swap((char*)ps + j * width, (char*)ps + (j + 1) * width, width);
			}
		}
	}
}

void SortContact(struct Contact* ps)
{
	My_BubbleSort(ps->data, ps->size, sizeof(ps->data[0]), cmp_struct_by_name);
	printf("����ɹ���\n");
}