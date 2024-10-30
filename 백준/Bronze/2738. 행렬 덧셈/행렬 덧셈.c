#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[100][100];
	int arr1[100][100];

	int A = 0;
	int B = 0;

	scanf("%d %d", &A, &B);

	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			scanf("%d", &arr[i][j]);

		}
	}
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			scanf("%d", &arr1[i][j]);

		}
	}
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			arr[i][j] += arr1[i][j];
		}
	}
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}