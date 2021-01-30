#include<stdio.h>

char score(int i) {
	if (i >= 90) return 'A';
	else if (i < 90 && i >= 70) return 'B';
	else return 'C';
}
int main() {

	int i;
	scanf("%d", &i);

	printf("%c", score(i));
}