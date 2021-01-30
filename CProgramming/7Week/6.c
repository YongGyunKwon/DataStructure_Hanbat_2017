#include<stdio.h>

int sort(int *array, int n) {
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (array[j] < array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

			}
}

int main() {
	int a[6] = { 123,44,3,100,45345346,3654737};

	

	for (int i = 0; i < 6; i++)
		printf("%d", a[i]);
}