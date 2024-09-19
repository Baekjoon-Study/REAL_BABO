#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X;
	int N;
	int i;
	int a, b;
	int T = 0;
	scanf("%d", &X);
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		scanf("%d %d", &a, &b);
		T += (a*b);
	}

	if (X == T) {
		printf("Yes");
	}
	else if (X != T) {
		printf("No");
	}
	return 0;

}