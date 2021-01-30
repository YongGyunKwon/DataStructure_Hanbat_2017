#include<stdio.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	int n;
	for (int i = 1; i < argc; i++) {
		n = atoi(argv[i]);
		sum += n;
	}
	printf("%d", sum);
}