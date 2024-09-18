#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int score = 0;

    if (A == B && B == C) {
        score = 10000 + 1000 * A;  
    }
    else if (A == B || A == C) { 
        score = 1000 + 100 * A;
    }
    else if (B == C) { 
        score = 1000 + 100 * B;
    }
    else { 
        if (A >= B && A >= C) {
            score = 100 * A;
        }
        else if (B >= A && B >= C) {
            score = 100 * B;
        }
        else {
            score = 100 * C;
        }
    }

    printf("%d\n", score); 
    return 0;
}
