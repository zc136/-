#include "contact.h"
void InitContact( struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps ->size = 0;
}
void AddContact( struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录满\n");
	}
	else
	{
		    printf("请输入名字:>");
			scanf("%s", ps->data[ps->size].name);
			printf("请输入年龄:>");
			scanf("%d", &(ps->data[ps->size].age));
			//printf("请输入性别:>");
			//scanf("%s", ps->data[ps->size].sex);
			printf("请输入号码:>");
			scanf("%s", ps->data[ps->size].tele);
			printf("请输入地址:>");
			scanf("%s", ps->data[ps->size].addr);
			
			ps->size++;
			printf("添加成功\n");
	}
}
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空格\n");

	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%s\t %s\t %s\t %s\t %s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
  static int FindByName (struct Contact* ps, char  name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		(0 == strcmp(ps->data[i].name, name));
	{
		return i;
	 }
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入删除的名字:>");
	scanf("%s", name);
	 int pos=FindByName(ps,name);
	if (pos==-1)
	{
		printf("删除人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
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
	printf("查找人的名字\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("找不到\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%s\t %s\t %s\t %s\t %s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		
	   }
	}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入修改人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("修改人的信息不存在\n");
		
	}
}