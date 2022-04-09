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
		printf("ͨѶ¼��\n");
	}
	else
	{
		    printf("����������:>");
			scanf("%s", ps->data[ps->size].name);
			printf("����������:>");
			scanf("%d", &(ps->data[ps->size].age));
			//printf("�������Ա�:>");
			//scanf("%s", ps->data[ps->size].sex);
			printf("���������:>");
			scanf("%s", ps->data[ps->size].tele);
			printf("�������ַ:>");
			scanf("%s", ps->data[ps->size].addr);
			
			ps->size++;
			printf("��ӳɹ�\n");
	}
}
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�ո�\n");

	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������ɾ��������:>");
	scanf("%s", name);
	 int pos=FindByName(ps,name);
	if (pos==-1)
	{
		printf("ɾ���˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
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
	printf("�����˵�����\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("�������޸�������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�޸��˵���Ϣ������\n");
		
	}
}