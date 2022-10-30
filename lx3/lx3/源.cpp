#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main() {
    float a = 0;
    char b = 0;
    scanf("%f %c", &a, &b);
    if (a < 1)
    {
        a = 20;
    }
    else
    {
        a = 20 + (a - 1) * 1;
    }
    if (b == 'y')
    {
        a = a + 5;
    }
    int c = ceil(a);
    printf("%d", c);

    return 0;
}