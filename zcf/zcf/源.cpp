#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{	
	//按位与
	int a = 1;
	//0...0000000000001
	int b = 2;
	//0...0000000000010
	a = a & b;
	//0.000000000000000
	printf("%d\n", a);
	

	int c = 1;
	//0...0000000000001
	int d = 2;
	//0...0000000000010
	c = c | d;
	//0...0000000000011
	printf("%d\n", c);

	//^异或相同为0，不同为一
	int e = 1;
	//0...0000000000001
	int f = 2;
	//0...0000000000010
	e = e ^ f;
	//0.000000000000011
	f = e ^ f;
	//0.000000000000001
	e = e ^ f;
	//0.000000000000010
	printf("%d %d\n", e, f);


	//逗号表达式只取最后一项表达式
	int x = 5;
	int y = 6;
	int z = (x++, --y, x + y);
	printf("%d\n", z);

	z=(x < y ? 8 : 4);
	printf("%d\n", z);
	return 0;
}