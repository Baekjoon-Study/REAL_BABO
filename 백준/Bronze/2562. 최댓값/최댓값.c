#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int M = 0;
	int S = 0;
	for (int j = 0; j < 9; j++) {
		if (arr[j] > M) {
			M = arr[j];
			S = 1 + j;
		}
	}
	printf("%d\n", M);
	printf("%d\n", S);
	return 0;
}