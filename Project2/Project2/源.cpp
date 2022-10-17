#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void xz()
{
	printf("*****************************************\n");
	printf("********欢迎使用身高体系判定系统*********\n");
	printf("********    请输入您的选择      *********\n");
	printf("********    1.身高预测系统      *********\n");
	printf("********    2.体型判定系统      *********\n");
	printf("********    0.退出选择系统      *********\n");
	printf("*****************************************\n");
}
void sg(int b,int m,int xb)
{

	if (xb == 1)
	{
		float sg;
		sg= (b + m) * 1.08 / 2;
		printf("孩子身高位%f\n", sg);
	}
	else
	{
		printf("你没教我女的怎么算啊\n");
	}
}
void tiz()
{
	float shengao = 0;
	float tizhong = 0;
	printf("请输入你的身高（米）\n");
	scanf("%f", &shengao);
	printf("请输入你的体重（千克）\n");
	scanf("%f", &tizhong);
	float bim = (tizhong / (shengao * shengao));
	printf("您的bim指数为 %f", bim);
	if (bim < 18.5)
		printf("您的体型偏瘦\n");
	else if (bim < 24 && bim>18.5)
		printf("您的体型正常\n");
	else
		printf("您的体型偏胖\n");
}
int main()
{

	float b = 0, m = 0;//爸妈身高定义
	int  wg_b = 0, wg_m = 0;//爸妈体重
		int x = 0;
		int xb =0 ;
		do
		{
			xz();
			scanf("%d", &x);
			if (x == 1)
			{
				printf("请输入父亲的身高\n");
				scanf("%f",&b);
				printf("请输入母亲的身高\n");
				scanf("%f",&m);
				printf("请输入孩子性别（1:男，2:女）\n");
				scanf("%d",&xb);
				sg(b,m,xb);
			}
			else if (x == 2)
			{
				tiz();
			}
			else if (x == 0)
			{
				printf("退出");
				break;
			}
			else
			{
				printf("选择无效\n");
			}
		} 
		while(x);
	
	return 0;
}