#include<stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {

	int i, j;

	scanf("%d %d", &i, &j);

	printf("%d", sum(i, j));
}