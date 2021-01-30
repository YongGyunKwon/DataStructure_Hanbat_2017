#include<stdio.h>
sort(int count, int *array[]) {
	
	int i, j, tmp, least;
	
	for (i = 0; i < count - 1; i++)
	{
		least = i;
		for (j = i + 1; j < count; j++)
			if (array[j] < array[least])
				least = j;
		tmp = array[i];
		array[i] = array[least];
		array[least] = tmp;
	}
		
}
void main() {
	int ia[4] = { 12,6,5,8 },i;
	for (i = 0; i < 4; i++)
		printf("%d  ", ia[i]);

	printf("\n");
	sort(4, ia);
	for (i = 0; i < 4; i++)
		printf("%d  ", ia[i]);
}