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
		printf("通讯录满了，无法添加\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入住址：");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("输入成功!\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
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
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	//查找要删除的人
	int pos = FindContact(ps, name);
	//没找到返回-1
	if (pos == -1)
	{
		printf("没有找到此人！\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}	
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要寻找的人的姓名:>");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("没有找到此人!\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
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
	printf("请输入要修改的人的姓名:>");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("没有找到此人！\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("请输入住址：");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
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
	//交换的趟数
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		//交换的对数
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
	printf("排序成功！\n");
}