#include<stdio.h>

int main() {
	int i, n;
	char c;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i % 7 == 0)
			printf("%d  ", i);
		if (i % 100 == 0) {
			printf("continue(y/n)?");
			scanf(" %c", &c);
			if (c == 'n') break;
			else if (c == 'y') continue;
		}
	}
}