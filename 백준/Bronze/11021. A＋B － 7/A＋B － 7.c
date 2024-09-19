#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B;

	scanf("%d", &T);
	


	int i = 0;
	int j = 0;

	for (i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A+B);
	}

	
	return 0;
}