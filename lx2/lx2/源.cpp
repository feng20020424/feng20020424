#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long d = a, e = b;
    long long c = a;
    while (1)
    {
        if (d % e == 0)
        {
            break;
        }
        c = (d % e);
        d = e;
        e = c;
    }
    printf("%lld", c + (a * b) / c);
    return 0;
}