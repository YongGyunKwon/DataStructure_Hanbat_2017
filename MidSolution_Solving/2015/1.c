#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int sum = 0;
	for (n; n <= m; n++)
		sum += n;

	printf("%d", sum);
}