#include<stdio.h>

int sec(int h, int m, int s) {
	return (3600 * h + 60 * m + s);
}

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d sec", sec(a,b,c));
}