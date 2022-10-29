#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int a = 0;
    scanf("%d", &a);
    int b = a;
    int c = a;
    int d = 0;
    while (b)
    {
        a = b + 1;
        while (a)
        {
            printf("* ");
            a--;
        }
        printf("\n");
        b--;
    }
    printf("*\n");
    a = 2;
    while (c)
    {
    
        d = a;
        while (d)
        {
            printf("* ");
            d--;
        }
        printf("\n");
        c--;
        a++;
    }
    return 0;
}