#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "NB666WDBB";
	char arr2[10] = "NBWDBB";
	//����2��1��
	strncpy(arr1, arr2, 7);

	//��1�������2
	/*strncat(arr1, arr2, 6);*/


	//�Ƚ��ַ��������ڷ������������ڷ���0��С�ڷ��ظ���
	strncmp(arr1, arr2, 6);
	printf("%s", arr1);

	return 0;
}