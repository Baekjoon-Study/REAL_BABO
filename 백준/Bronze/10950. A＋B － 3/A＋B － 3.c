#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, i;

	scanf("%d", &T);

	for (i = 1; i <= T; i++) {
		int A;
		int B;
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

}