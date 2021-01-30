#include<stdio.h>
int findMin(int *ia) {
	int min = *ia;
	for (int i = 0; i < 10; i++)
		if (*(ia + i) < min)
			min = *(ia + i);

	return min;

}

main() {
	int i, array[10];

	for (i = 0; i < 10; i++)
		scanf("%d\n",&array[i]);

	i = findMin(array);
	printf("Smallest number is %d\n", i);
}