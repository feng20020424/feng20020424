#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char xyr = 0;
//	for (xyr = 'A'; xyr <= 'D'; xyr++)
//	{
//		if ((xyr != 'A') + (xyr == 'C') + (xyr == 'D') + (xyr != 'D') == 3)
//		{
//			printf("%c", xyr);
//		}
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 0; a <= 5; a++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0 ; d <= 5; d++)
				{
					for (e = 0; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1)
							)
						{
							if(a*b*c*d*e==120)
							printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}



}