#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i;
	int x;
	scanf("%d", &n);
	scanf("%d", &x);
	int M = x;
	int m = x;
	
	
	for (i = 1; i < n; i++) {
		scanf("%d", &x);
		
		if (x > M) {
			M = x;
		}
		if (x < m) {
			m = x;
		}
	}
	printf("%d %d", m, M);

	
	return 0;
}