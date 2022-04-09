#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include <stdio.h>
#include <string.h>
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void Delcontact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);