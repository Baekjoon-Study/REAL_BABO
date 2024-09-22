#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int arr[101];
	int v;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int res = 0;
	scanf("%d", &v);
	for (i = 0; i < n; i++) {
		if (v == arr[i]) {
			res += 1;
		}
	}
	
	printf("%d", res);
}