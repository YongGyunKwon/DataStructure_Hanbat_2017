#include<stdio.h>

int main() {
	int a[10], b[10];

	int i, j, high, index;

	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	for (j = 0; j < 10; j++) {
		for (i = 0,high=-1; i < 10; i++) 
			if (a[i] > high) {
				high = a[i];
				index = i;
			
		}
		b[j] = a[index];
		a[index] = -1;
	}

	for (i = 0; i < 10; i++)
		printf("%d   ", b[i]);

}