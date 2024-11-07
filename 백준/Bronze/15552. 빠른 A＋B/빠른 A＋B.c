#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B, i;

	scanf("%d", &i);

	for (int j = 0; j < i; j++) {

		scanf("%d %d", &A, &B);

		int sum;
		sum = A + B;

		printf("%d \n", sum);
	}
	
		

	return 0;
}