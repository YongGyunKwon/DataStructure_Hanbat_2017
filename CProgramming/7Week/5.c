#include<stdio.h>

int sum(int *array, int n) {

	int s = 0;

	for (int i = 0; i < n; i++)
		s += *(array + i);

	return s;
}

int main() {
	int array[5] = { 0,1,2,3,4 };
	printf("%d", sum(array, 5));
}