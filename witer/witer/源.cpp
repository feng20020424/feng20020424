#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float h, r;
    scanf("%f%f", &h, &r);
    float l = 3.14 * h * r * r;
    int n = 0;
    for (n = 0; l * n < 10000; n++)
    {

    }
    printf("%d", n);
    return 0;
}