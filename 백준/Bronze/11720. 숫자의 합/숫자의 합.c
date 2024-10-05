#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int a, b = 0;
    char c[100] = "";

    scanf("%d", &a);
    scanf("%s", c);

    for (int i = 0; i < a; i++) {
        b += c[i] - '0';
    }

    printf("%d", b);
    return 0;
}