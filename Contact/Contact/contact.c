#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	else
	{
		ps->size = 0;
		ps->capacity = DEFAULT_SZ;
	}
	//把文件中已经存放的通讯录中的信息，加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(Contact*);
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//读取文件放到通讯录中
	//fread返回真实读到的元素个数，在这里要么是1，要么是0
	//如果读到0，就说明已经取完了
	
	while (fread(&(ps->data[ps->size]), sizeof(PeoInfo), 1, pfRead))
	{
		ps->size++;
		CheckCapacity(ps);
	}
	//两种办法都可以
	/*while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}*/

	fclose(pfRead);
	pfRead = NULL;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(Contact* ps)
{
	//判断通讯录容量还够不够
	CheckCapacity(ps);

	//录入信息
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
}

int FindContact(Contact* ps, char name[MAX_NAME])
{
	int i = 0;

	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;//接收要删除人的下标
	int i = 0;

	printf("请输入要删除人的姓名: ");
	scanf("%s", name);
	pos = FindContact(ps, name);

	if (pos != -1)
	{
		for (i = pos; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
	else
	{
		printf("删除失败，没有找到此人\n");
	}
}

void ShowContact(Contact* ps)
{
	int i = 0;
	printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
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

void SearchContact(Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;

	printf("请输入要查找人的姓名: ");
	scanf("%s", name);
	pos = FindContact(ps, name);

	if (pos != -1)
	{
		printf("%-20s\t%-3s\t%-5s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-20s\t%-3d\t%-5s\t%-15s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
	else
	{
		printf("没有找到此人！\n");
	}
}

void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;

	printf("请输入要修改人的姓名: ");
	scanf("%s", name);
	pos = FindContact(ps, name);

	if (pos != -1)
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
	}
	else
	{
		printf("修改失败，没有找到此人！\n");
	}
}

int cmp_by_name(void* e1, void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width-1; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void* My_Sort(PeoInfo* ptr, int size, int width, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (cmp((char*)ptr + j * width, (char*)ptr + (j + 1) * width) > 0)
			{
				Swap((char*)ptr + j * width, (char*)ptr + (j + 1) * width, width);
			}
		}
	}
}

void SortContact(Contact* ps)
{
	My_Sort(ps->data, ps->size, sizeof(PeoInfo), cmp_by_name);
	printf("排序成功\n");
}

void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//以二进制形式输入文件
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	//fwrite(ps->data, sizeof(PeoInfo), ps->size, pfWrite);//另一种写法

	fclose(pfWrite);
	pfWrite = NULL;
}


void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}