#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* arr1, void* arr2, int num)
{
	void* ret = arr1;
	assert(arr1 && arr2);
	while (num--)
	{
		*(char*)arr1 = *(char*)arr2;
		arr1 = (char*)arr1 + 1;
		arr2 = (char*)arr2 + 1;
		
	}	
	return ret;
}
int main()
{
	int arr1[20] = { 0 };
	int arr2[10]{ 1,2,3,4,5,6,7,8,9,0 };
	my_memcpy(arr1, arr2, 16);
	int n = 0;
	for (n=0;n<4;n++)
	{
		printf("%d",arr1[n]);
	}
	return 0;

}