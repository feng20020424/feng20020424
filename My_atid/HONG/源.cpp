#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define PRINTF
//int main()
//{
//#ifdef PRINTF
//	printf("牛逼");
//#endif
//
//#ifndef NB
//	printf("牛逼");
//#endif
//	return 0;
//}
#include<ctype.h>
#include<limits.h>
enum state
{
	INVALID,
	VALID
};
enum state state = INVALID;

int my_atid(const char* p)
{
	int flag = 1;
	if (p == NULL)
	{
		return 0;
	}
	if (*p == '\0')
	{
		return 0;
	}
	while (isspace(*p))
	{
		p++;
	}
	if (*p == '+')
	{
		flag = 1;
		p++;
	}
	else if (*p == '-')
	{
		flag = -1;
		p++;
	}
	long long n = 0;
	while (isdigit(*p))
	{
		n = n * 10 + flag*(*p - '0');
		if (n > INT_MAX || n < INT_MIN) 
		{
			return 0;
		}
		p++;
		
	}
	if (*p == '\0')
	{
		state = VALID;
		return (int)n;
	}
	else
	{
		return (int)n;
	}
}
int main()
{
	const char* p = "-1341457";
	int ret=my_atid(p);
	if (state == VALID)
	{
		printf("合法的转换%d", ret);
	}
	else
	{
		printf("非法的转换%d", ret);
	}
	return 0;
}