#include<stdio.h>

int main() {
	int n;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
			printf("+");
		printf("\n");
	}
}