#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void xz()
{
	printf("*****************************************\n");
	printf("********��ӭʹ�������ϵ�ж�ϵͳ*********\n");
	printf("********    ����������ѡ��      *********\n");
	printf("********    1.���Ԥ��ϵͳ      *********\n");
	printf("********    2.�����ж�ϵͳ      *********\n");
	printf("********    0.�˳�ѡ��ϵͳ      *********\n");
	printf("*****************************************\n");
}
void sg(int b,int m,int xb)
{

	if (xb == 1)
	{
		float sg;
		sg= (b + m) * 1.08 / 2;
		printf("�������λ%f\n", sg);
	}
	else
	{
		printf("��û����Ů����ô�㰡\n");
	}
}
void tiz()
{
	float shengao = 0;
	float tizhong = 0;
	printf("�����������ߣ��ף�\n");
	scanf("%f", &shengao);
	printf("������������أ�ǧ�ˣ�\n");
	scanf("%f", &tizhong);
	float bim = (tizhong / (shengao * shengao));
	printf("����bimָ��Ϊ %f", bim);
	if (bim < 18.5)
		printf("��������ƫ��\n");
	else if (bim < 24 && bim>18.5)
		printf("������������\n");
	else
		printf("��������ƫ��\n");
}
int main()
{

	float b = 0, m = 0;//������߶���
	int  wg_b = 0, wg_m = 0;//��������
		int x = 0;
		int xb =0 ;
		do
		{
			xz();
			scanf("%d", &x);
			if (x == 1)
			{
				printf("�����븸�׵����\n");
				scanf("%f",&b);
				printf("������ĸ�׵����\n");
				scanf("%f",&m);
				printf("�����뺢���Ա�1:�У�2:Ů��\n");
				scanf("%d",&xb);
				sg(b,m,xb);
			}
			else if (x == 2)
			{
				tiz();
			}
			else if (x == 0)
			{
				printf("�˳�");
				break;
			}
			else
			{
				printf("ѡ����Ч\n");
			}
		} 
		while(x);
	
	return 0;
}