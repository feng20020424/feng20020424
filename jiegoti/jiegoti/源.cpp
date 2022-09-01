#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建一个自定义的类型
struct book
{
	//结构体的成员名变量名
	char name[20];
	char id[20];
	int price;
};
int main()
{	
	struct book b = {"c语言", "nb666", 55};
	struct book * pb = &b;
	printf("书名为>%s\n",pb-> name);
	printf("书编号为>%s\n",(* pb).id);
	printf("书价格为>%d\n",b.price);

	return 0;
}