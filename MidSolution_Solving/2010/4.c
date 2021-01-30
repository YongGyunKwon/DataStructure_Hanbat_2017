#include<stdio.h>

int sum(int *ia, int length) {

	int sum = 0;
	for (int i = 0; i < length ; i++)
		sum += ia[i];

	return sum;
}

main() {
	int array[5], total;
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	total =sum(array, 5);
	printf("%d\n", total);
}