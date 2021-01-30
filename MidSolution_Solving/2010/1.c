#include<stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	if (b == 0)
		printf("Divede by 0");
	else
		printf("a/b=%d", a / b);
}