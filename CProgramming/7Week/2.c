#include<stdio.h>

double square(int a) {
	return 3.14*a*a;
}

int main() {

	int i;
	scanf("%d", &i);

	printf("%f", square(i));
}