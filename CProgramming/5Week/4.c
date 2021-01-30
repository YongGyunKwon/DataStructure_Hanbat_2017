#include<stdio.h>

int main() {
	int a[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	int max=-1, min=-1;

	for (int i = 0; i < 10; i++)
		if (max < a[i])
			max = a[i];
	for (int i = 0; i < 10; i++)
		if (min <1/a[i])
			min = a[i];
	
	printf("%d %d", min, max);
}