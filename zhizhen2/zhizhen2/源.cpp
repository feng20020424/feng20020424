#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	//arr[2]=2[arr]=p[2]=2[p]=*(p+2)=*(arr+2)
	printf("%d\n", 6[p]);
	//����ָ�룬�༶ָ��
	int a = 55;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;
	printf("%d\n" ,***pppa);
	//ָ������
	int* parr[4];
	return 0;
}