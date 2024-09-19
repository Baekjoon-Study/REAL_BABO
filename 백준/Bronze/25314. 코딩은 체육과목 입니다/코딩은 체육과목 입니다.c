#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int i = 0;
	int j = 0;

	j = N/4;

	for (i = 1; i <= j; i++) {
		printf("long ");
	}

	printf("int");
	return 0;
}