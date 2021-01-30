#include<stdio.h>

main(int argc, char *argv) {

	int i, j;

	for (i = 1; i < argc; i++) {
		j = atoi(argv[i]);
		printf("%x       ", j);
	}


}