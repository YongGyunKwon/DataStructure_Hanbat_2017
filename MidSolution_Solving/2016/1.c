#include<stdio.h>

int main()
{
	int i, n;
	int sum = 0;

	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		if (i % 7 == 0)
			sum = sum + i;
	}