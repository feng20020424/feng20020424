#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���Զ��������
struct book
{
	//�ṹ��ĳ�Ա��������
	char name[20];
	char id[20];
	int price;
};
int main()
{	
	struct book b = {"c����", "nb666", 55};
	struct book * pb = &b;
	printf("����Ϊ>%s\n",pb-> name);
	printf("����Ϊ>%s\n",(* pb).id);
	printf("��۸�Ϊ>%d\n",b.price);

	return 0;
}