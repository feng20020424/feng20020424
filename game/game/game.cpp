#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("------����³��������е�����------\n");
	printf("|-----------1.��ʼ�¼�-----------|\n");
	printf("|-----------0.����¼�-----------|\n");
	printf("----------------------------------\n");
}
void game()
{
	int b = rand()%100+1;//rand������һ��0~32767֮�������
	//ģ100��1�ó�1~100������
	//printf("%d\n", b);
	int d = 0;
	while (1)
	{
		printf("�����³��������е��뷨(1~100)\n");
		scanf("%d",&d);
		if (d < b)
		{
			printf("���ԣ���С��,����˦������ʦ��\n");
		}
		else if (d > b)
		{
			printf("���ԣ��´��ˣ�����������������\n");
		}
		else
		{
			printf("��ϲ�����¶��ˣ�������һ���ͱ�ʳ��ʳ\n");
			break;
		}
	}
}
int main()
{	
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���Ƿ�Ը����в¼�>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
			//��װһ��game����
		case 0:
			printf("�����ź����뿪����\n");
			break;
		default:
			printf("С�����ҵ㣬�����ʳ��ʳ\n");
			break;
		}
	} while (a);
	return 0;
}
