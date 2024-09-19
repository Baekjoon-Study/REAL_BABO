#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	int i = 0;
	int j = 0;
	int k = 0;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - i; j++) {

			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		} 
		printf("\n");
	}
}