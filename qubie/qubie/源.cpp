#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{	//sizeof�Ĺ��������С��strlen�Ĺ��������ַ�������
	//ָ���С��32λ����Ϊ4���ֽڣ�64λ��������Ϊ8���ֽ�

	//int a[] = {1,2,3,4};//������������û��\0�ģ�sizeof�����\0

	//printf("%d\n",sizeof(a));//16,�������a�Ĵ�С����4�������������Ĵ�С
	//printf("%d\n",sizeof(a+0));//4��8����a[0]��ַ�Ĵ�С
	//printf("%d\n",sizeof(*a));//4����a[0]�Ĵ�С�����������͵�����1�Ĵ�С
	//printf("%d\n",sizeof(a+1));//4��8����a[1]��ַ�Ĵ�С
	//printf("%d\n",sizeof(a[1]));//4����a[1]�Ĵ�С�����������͵�����2�Ĵ�С
	//printf("%d\n",sizeof(&a));//4��8���������a�ĵ�ַ��С
	//printf("%d\n",sizeof(*&a));//16���������a�Ĵ�С
	//printf("%d\n",sizeof(&a+1));//4��8�������һ������ĵ�ַ��С
	//printf("%d\n",sizeof(&a[0]));//4��8�����a[0]�ĵ�ַ��С
	//printf("%d\n",sizeof(&a[0] + 1));//4��8�����a[1]�ĵ�ַ��С

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6���������arr�Ĵ�С
	//printf("%d\n", sizeof(arr+0));//4��8�����a�ĵ�ַ��С
	//printf("%d\n", sizeof(*arr));//1�����a�Ĵ�С��aΪ�ַ�����
	//printf("%d\n", sizeof(arr[1]));//1�����b�Ĵ�С��bΪ�ַ�����
	//printf("%d\n", sizeof(&arr));//4��8���������arr�ĵ�ַ��С
	//printf("%d\n", sizeof(&arr+1));//4��8�������һ������ĵ�ַ��С
	//printf("%d\n", sizeof(&arr[0]+1));//4��8�����b�ĵ�ַ��С

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//���ֵ���������arr�е��ַ�����strlen����㵽\0��{}��û��\0
	//printf("%d\n", strlen(arr+0));//���ֵ���������arr�е��ַ�����strlen����㵽\0��{}��û��\0
	//printf("%d\n", strlen(*arr));//��������strlen�Ĳ������ַ�a
	//printf("%d\n", strlen(arr[1]));//��������strlen�Ĳ������ַ�b
	//printf("%d\n", strlen(&arr));//���ֵ���������arr�е��ַ�����strlen����㵽\0��{}��û��\0
	//printf("%d\n", strlen(&arr+1));//���ֵ-6�������һ�������е��ַ�����strlen����㵽\0��{}��û��\0
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ-1���������arr�е��ַ�����strlen����㵽\0��{}��û��\0


	//char arr[] = "abcdef";
	////arr[]����ʵ�ʵ��ַ�Ϊ  a b c d e f \0
	////sizeof�����\0�Ĵ�С
	//printf("%d\n", sizeof(arr));//7���������arr�Ĵ�С
	//printf("%d\n", sizeof(arr+0));//4��8�����a�ĵ�ַ��С
	//printf("%d\n", sizeof(*arr));//1�����a�Ĵ�С��aΪ�ַ�����
	//printf("%d\n", sizeof(arr[1]));//1�����b�Ĵ�С��bΪ�ַ�����
	//printf("%d\n", sizeof(&arr));//4��8���������arr�ĵ�ַ��С
	//printf("%d\n", sizeof(&arr+1));//4��8�������һ������ĵ�ַ��С
	//printf("%d\n", sizeof(&arr[0]+1));//4��8�����b�ĵ�ַ��С


	//char arr[] = "abcdef";
	////arr����ʵ��Ϊ a b c d e f \0
	////strlen���㵽\0ǰ������Ķ���
	//printf("%d\n", strlen(arr));//6�������arr�������
	//printf("%d\n", strlen(arr+0));//6�������arr�������
	//printf("%d\n", strlen(*arr));//��������strlen�Ĳ������ַ�a
	//printf("%d\n", strlen(arr[1]));//��������strlen�Ĳ������ַ�b
	//printf("%d\n", strlen(&arr));//6�������arr�������
	//printf("%d\n", strlen(&arr+1));//���ֵ�����������һ�������������
	//printf("%d\n", strlen(&arr[0]+1));//5����arr[1]��ʼ����


	//const char *p = "abcdef";
	////pָ�����a�ĵ�ַ
	////����ʵ�ʵ��ַ�Ϊ  a b c d e f \0
	////sizeof�����\0�Ĵ�С
	//printf("%d\n", sizeof(p));//4��8,����a�ĵ�ַ��С
	//printf("%d\n", sizeof(p+1));//4��8������b�ĵ�ַ��С
	//printf("%d\n", sizeof(*p));//1�����a�Ĵ�С��aΪ�ַ�����
	//printf("%d\n", sizeof(p[0]));//1��p[0]�ȼ���*(p+0),���a�Ĵ�С��aΪ�ַ�����
	//printf("%d\n", sizeof(&p));//4��8�����p�ĵ�ַ��С
	//printf("%d\n", sizeof(&p+1));//4��8�����p+1�ĵ�ַ��С
	//printf("%d\n", sizeof(&p[0]+1));//4��8�����b�ĵ�ַ��С


	//const char* p = "abcdef";
	////pָ�����a�ĵ�ַ
	////����ʵ�ʵ��ַ�Ϊ  a b c d e f \0
	////strlen���㵽\0ǰ������Ķ���
	//printf("%d\n", strlen(p));//6,��a��ʼ���㵽\0
	//printf("%d\n", strlen(p + 1));//5����b���㵽\0
	//printf("%d\n", strlen(*p));//�����ַ�a��������������strlen
	//printf("%d\n", strlen(p[0]));//����p[0]�ȼ���*(p+0)���ַ�a��������������strlen
	//printf("%d\n", strlen(&p));//����
	//printf("%d\n", strlen(&p + 1));//����
	//printf("%d\n", strlen(&p[0] + 1)); //5,��b���㵽\0


	//int a[3][4] = { 0 };
	////��ά�������Ԫ�ص�ַΪ��һ�еĵ�ַ
	//printf("%d\n", sizeof(a));//48�����ά����a�Ĵ�С
	//printf("%d\n", sizeof(a[0][0]));//4�����һ�е�һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(a[0]));//16�����ά����a��һ�еĴ�С
	//printf("%d\n", sizeof(a[0]+1));//4��8�����ά����a�ڶ��е�ַ�Ĵ�С
	//printf("%d\n", sizeof(*a[0]+1));//4����Ķ�ά�����һ�еڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(a+1));//4��8�����ά����a�ڶ��е�ַ�Ĵ�С
	//printf("%d\n", sizeof(*(a+1)));//16�����ά����a�ڶ��еĴ�С
	//printf("%d\n", sizeof(&a[0]+1));//4��8�����ά����a�ڶ��е�ַ�Ĵ�С
	//printf("%d\n", sizeof(*(&a[0]+1)));//16�����ά����a�ڶ��еĴ�С
	//printf("%d\n", sizeof(*a));//16�����ά����a��һ�еĴ�С
	//printf("%d\n", sizeof(a[3]));//16�����ά��������еĴ�С����ʵ�������ڣ���sizeof()�ڲ��ı��ʽ�ǲ������
	////��ʵ�������ڣ�Ҳ��ͨ�������ƶϼ������С

	return 0;
}