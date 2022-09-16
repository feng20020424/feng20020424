#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{	//sizeof的功能是求大小，strlen的功能是求字符串长度
	//指针大小在32位机里为4个字节，64位机器里面为8个字节

	//int a[] = {1,2,3,4};//花括号里面是没有\0的，sizeof会计算\0

	//printf("%d\n",sizeof(a));//16,求的数组a的大小，即4个整形类型数的大小
	//printf("%d\n",sizeof(a+0));//4或8，求a[0]地址的大小
	//printf("%d\n",sizeof(*a));//4，求a[0]的大小，即整形类型的数字1的大小
	//printf("%d\n",sizeof(a+1));//4或8，求a[1]地址的大小
	//printf("%d\n",sizeof(a[1]));//4，求a[1]的大小，即整形类型的数字2的大小
	//printf("%d\n",sizeof(&a));//4或8，求的数组a的地址大小
	//printf("%d\n",sizeof(*&a));//16，求的数组a的大小
	//printf("%d\n",sizeof(&a+1));//4或8，求的另一个数组的地址大小
	//printf("%d\n",sizeof(&a[0]));//4或8，求的a[0]的地址大小
	//printf("%d\n",sizeof(&a[0] + 1));//4或8，求的a[1]的地址大小

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6，求的数组arr的大小
	//printf("%d\n", sizeof(arr+0));//4或8，求的a的地址大小
	//printf("%d\n", sizeof(*arr));//1，求的a的大小，a为字符类型
	//printf("%d\n", sizeof(arr[1]));//1，求的b的大小，b为字符类型
	//printf("%d\n", sizeof(&arr));//4或8，求的数组arr的地址大小
	//printf("%d\n", sizeof(&arr+1));//4或8，求的下一个数组的地址大小
	//printf("%d\n", sizeof(&arr[0]+1));//4或8，求的b的地址大小

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//随机值，求的数组arr中的字符数，strlen会计算到\0，{}中没有\0
	//printf("%d\n", strlen(arr+0));//随机值，求的数组arr中的字符数，strlen会计算到\0，{}中没有\0
	//printf("%d\n", strlen(*arr));//报错，传给strlen的参数是字符a
	//printf("%d\n", strlen(arr[1]));//报错，传给strlen的参数是字符b
	//printf("%d\n", strlen(&arr));//随机值，求的数组arr中的字符数，strlen会计算到\0，{}中没有\0
	//printf("%d\n", strlen(&arr+1));//随机值-6，求的另一个数组中的字符数，strlen会计算到\0，{}中没有\0
	//printf("%d\n", strlen(&arr[0]+1));//随机值-1，求的数组arr中的字符数，strlen会计算到\0，{}中没有\0


	//char arr[] = "abcdef";
	////arr[]里面实际的字符为  a b c d e f \0
	////sizeof会计算\0的大小
	//printf("%d\n", sizeof(arr));//7，求的数组arr的大小
	//printf("%d\n", sizeof(arr+0));//4或8，求的a的地址大小
	//printf("%d\n", sizeof(*arr));//1，求的a的大小，a为字符类型
	//printf("%d\n", sizeof(arr[1]));//1，求的b的大小，b为字符类型
	//printf("%d\n", sizeof(&arr));//4或8，求的数组arr的地址大小
	//printf("%d\n", sizeof(&arr+1));//4或8，求的下一个数组的地址大小
	//printf("%d\n", sizeof(&arr[0]+1));//4或8，求的b的地址大小


	//char arr[] = "abcdef";
	////arr里面实际为 a b c d e f \0
	////strlen计算到\0前面的数的多少
	//printf("%d\n", strlen(arr));//6，计算的arr里面的数
	//printf("%d\n", strlen(arr+0));//6，计算的arr里面的数
	//printf("%d\n", strlen(*arr));//报错，传给strlen的参数是字符a
	//printf("%d\n", strlen(arr[1]));//报错，传给strlen的参数是字符b
	//printf("%d\n", strlen(&arr));//6，计算的arr里面的数
	//printf("%d\n", strlen(&arr+1));//随机值，计算的是下一个数组里面的数
	//printf("%d\n", strlen(&arr[0]+1));//5，从arr[1]开始计算


	//const char *p = "abcdef";
	////p指向的是a的地址
	////里面实际的字符为  a b c d e f \0
	////sizeof会计算\0的大小
	//printf("%d\n", sizeof(p));//4或8,计算a的地址大小
	//printf("%d\n", sizeof(p+1));//4或8，计算b的地址大小
	//printf("%d\n", sizeof(*p));//1，求的a的大小，a为字符类型
	//printf("%d\n", sizeof(p[0]));//1，p[0]等价于*(p+0),求的a的大小，a为字符类型
	//printf("%d\n", sizeof(&p));//4或8，求的p的地址大小
	//printf("%d\n", sizeof(&p+1));//4或8，求的p+1的地址大小
	//printf("%d\n", sizeof(&p[0]+1));//4或8，求的b的地址大小


	//const char* p = "abcdef";
	////p指向的是a的地址
	////里面实际的字符为  a b c d e f \0
	////strlen计算到\0前面的数的多少
	//printf("%d\n", strlen(p));//6,从a开始计算到\0
	//printf("%d\n", strlen(p + 1));//5，从b计算到\0
	//printf("%d\n", strlen(*p));//报错，字符a当作参数传给了strlen
	//printf("%d\n", strlen(p[0]));//报错，p[0]等价于*(p+0)，字符a当作参数传给了strlen
	//printf("%d\n", strlen(&p));//报错
	//printf("%d\n", strlen(&p + 1));//报错
	//printf("%d\n", strlen(&p[0] + 1)); //5,从b计算到\0


	//int a[3][4] = { 0 };
	////二维数组的首元素地址为第一行的地址
	//printf("%d\n", sizeof(a));//48，求二维数组a的大小
	//printf("%d\n", sizeof(a[0][0]));//4，求第一行第一个元素的大小
	//printf("%d\n", sizeof(a[0]));//16，求二维数组a第一行的大小
	//printf("%d\n", sizeof(a[0]+1));//4或8，求二维数组a第二行地址的大小
	//printf("%d\n", sizeof(*a[0]+1));//4，求的二维数组第一行第二个元素的大小
	//printf("%d\n", sizeof(a+1));//4或8，求二维数组a第二行地址的大小
	//printf("%d\n", sizeof(*(a+1)));//16，求二维数组a第二行的大小
	//printf("%d\n", sizeof(&a[0]+1));//4或8，求二维数组a第二行地址的大小
	//printf("%d\n", sizeof(*(&a[0]+1)));//16，求二维数组a第二行的大小
	//printf("%d\n", sizeof(*a));//16，求二维数组a第一行的大小
	//printf("%d\n", sizeof(a[3]));//16，求二维数组第四行的大小（其实并不存在），sizeof()内部的表达式是不计算的
	////其实并不存在，也能通过类型推断计算其大小

	return 0;
}