#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

void add(tx* p)
{
	if (p->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入名字\n");
	scanf("%s", &(p->ml[p->sz].name));
	printf("请输入年龄\n");
	scanf("%d", &(p->ml[p->sz].age));
	printf("请输入性别\n");
	scanf("%s", &(p->ml[p->sz].sex));
	printf("请输入电话\n");
	scanf("%s", &(p->ml[p->sz].tele));
	printf("请输入地址\n");
	scanf("%s", &(p->ml[p->sz].addr));
	p->sz++;
	printf("增加成功\n");
}
void print(tx* p)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址"); 
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			p->ml[i].name,
			p->ml[i].age,
			p->ml[i].sex,
			p->ml[i].tele,
			p->ml[i].addr);

	}
}
static int findname(tx* p, char name[])
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->ml->name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void del(tx* p)
{


	char name[NAME_MAX] = { 0 };
	if (p->sz == 0)
	{
		printf("联系人不存在，不需要删除\n");
		return ;
	}
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	int pos = findname(p, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = pos; i < p->sz - 1; i++)
	{
		p->ml[i] = p->ml[i - 1];
	}
	p->sz--;
	printf("删除成功\n");
}
void sear(tx* p)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找人的名字\n");
	scanf("%s", name);
	int pos = findname(p, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				p->ml[pos].name,
				p->ml[pos].age,
				p->ml[pos].sex,
				p->ml[pos].tele,
				p->ml[pos].addr);

		
	}
}
void mod(tx* p)
{

	char name[NAME_MAX] = { 0 };
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int pos = findname(p, name);
	if (pos == -1)
	{
		printf("要查修改人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", &(p->ml[pos].name));
		printf("请输入年龄\n");
		scanf("%d", &(p->ml[pos].age));
		printf("请输入性别\n");
		scanf("%s", &(p->ml[pos].sex));
		printf("请输入电话\n");
		scanf("%s", &(p->ml[pos].tele));
		printf("请输入地址\n");
		scanf("%s", &(p->ml[pos].addr));
		printf("修改成功\n");
	}
}
void pai(tx* p)
{
	;
}
