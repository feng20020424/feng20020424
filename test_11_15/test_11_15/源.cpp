#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()
//{
//	float x = 0;
//	scanf("%f", &x);
//	if (x < 0)
//	{
//		x=exp(x)+1;
//		printf("%f", x);
//	}
//	else
//	{
//		x = x * x + x;
//		printf("%f", x);
//	}
//	return 0;
//}


int main()
{

	char arr[99] = {0};
	while (scanf("%s", arr) == '\n');
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122)
		{
			a++;
		}
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			b++;
		}
		
	}
	c = (strlen(arr) - a - b)/2;

	printf("%d,%d,%d", a, b, c);
}

//
//int main()
//{
//	int a = 1; 
//	int b = 3;
//	int c;
//	for (int i = 1; i <= 9999; i+=2)
//	{
//		c = (a + b);
//		a = c;
//		b = c + b;
//	}
//	printf("%d", c%1000);
//
//	return 0;
//}




//typedef struct xuesheng
//{
//	char name[99];
//	int age;
//	int sf[3];
//};
//
//void myfunc(xuesheng x[])
//{
//
//	printf("名字 %s 科目1 %d 科目2 %d 科目3 %d\n",x[0].name, x[0].sf[0], x[0].sf[1], x[0].sf[2]);
//	printf("名字 %s 科目1 %d 科目2 %d 科目3 %d\n", x[1].name, x[1].sf[0], x[1].sf[1], x[1].sf[2]);
//	printf("名字 %s 科目1 %d 科目2 %d 科目3 %d\n", x[2].name, x[2].sf[0], x[2].sf[1], x[2].sf[2]);
//}
//
//int main()
//{
//
//
//	xuesheng arr[3] = { {"牛逼1",18,91,92,93},{"牛逼2",18,91,92,93 },{ "牛逼3",18,91,92,93 } };
//
//	myfunc(arr);
//
//	return 0;
//}


//int main()
//{
//	double s[5][5] = { {78,82,93,74,65},{91,82,72,76,67},{100,90,85,72,98},{67,89,90,65,78},{77,88,99,45,89} };
//	double pj1=0, pj2=0, pj3=0, pj4=0, pj5 = 0;
//	double km1 = 0, km2 = 0, km3 = 0, km4 = 0, km5 = 0;
//	double km1max = 0, km2max = 0, km3max = 0,km4max = 0, km5max = 0;
//	int a, b, c, d, e;
//	for (int i = 0; i < 5; i++)
//	{
//		pj1 += s[i][0];
//		pj2 += s[i][1];
//		pj3 += s[i][2];
//		pj4 += s[i][3];
//		pj5 += s[i][4];
//	}
//	printf("学生1平均分 %f ,学生2平均分 %f,学生3平均分 %f,学生4平均分 %f，学生5平均分 %f\n\n",pj1/5, pj2 / 5,pj3 / 5,pj4 / 5,pj5 / 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		km1 += s[0][i];
//		km2 += s[1][i];
//		km3 += s[2][i];
//		km4 += s[3][i];
//		km5 += s[4][i];
//	}
//
//	printf("科目1总分 %f, 科目2总分 %f, 科目3总分 %f, 科目4总分 %f, 科目5总分 %f\n\n", km1, km2, km3, km4, km5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (s[j][0] > km1max)
//			{
//				km1max = s[j][0];
//				a = j+1;
//			}
//			if (s[j][1] > km2max)
//			{
//				km2max = s[j][1];
//				b = j+1;
//			}
//			if (s[j][2] > km3max)
//			{
//				km3max = s[j][2];
//				c = j+1;
//			}
//			if (s[j][3] > km4max)
//			{
//				km4max = s[j][3];
//				d = j+1;
//			}
//			if (s[j][4] > km5max)
//			{
//				km5max = s[j][4];
//				e = j+1;
//			}
//		}
//	}
//	printf("科目1最高分%f 同学%d\n科目2最高分%f 同学%d\n科目3最高分%f 同学%d\n科目4最高分%f 同学%d\n科目5最高分%f 同学%d", km1max, a, km2max, b, km3max, c, km4max, d, km5max, e);
//
//	return 0;
//}