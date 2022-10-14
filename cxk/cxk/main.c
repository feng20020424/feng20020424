#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<stdlib.h>

#include<string.h>

int main(int argc, char* argv[])

{

	int rows, cols;



	char str[40] = "E:\\世世\\cxk (";





	int a, b;

	a = 1;

	int c, d;

	while (a < 1780)

	{

		char str[40] = "E:\\世世\\cxk (";

		char str2[5] = "\0";

		char str3[5] = "\0";

		char str4[10] = ").bmp";

		c = 0;

		b = a;

		while (a > 0)

		{

			str2[c] = a % 10 + '0';

			a = a / 10;

			c++;

		}

		d = 0;

		while (d < c)

		{

			str3[d] = str2[c - 1 - d];

			str3[c - 1 - d] = str2[d];

			d++;

		}

		printf("%s\n", str3);

		strcat(str, str3);

		strcat(str, str4);

		read_bmp(str, &rows, &cols);

		getchar();

		a = b;

		a++;

	}

	return 0;

} 