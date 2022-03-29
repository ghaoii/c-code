#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 15
#define MAX_ADDR 20


enum option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
	Save
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo* data;
	int size;
	int capacity;
}Contact;

//ÉùÃ÷
void InitContact(Contact*);
void AddContact(Contact*);
void DelContact(Contact*);
void ShowContact(Contact*);
void SearchContact(Contact*);
void ModifyContact(Contact*);
void DestroyContact(Contact*);
void SortContact(Contact*);
void SaveContact(Contact*);
void LoadContact(Contact*);
