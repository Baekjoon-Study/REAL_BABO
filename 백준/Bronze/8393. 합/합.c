#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	int A = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		A += i;
	}

	printf("%d", A);
	return 0;

}