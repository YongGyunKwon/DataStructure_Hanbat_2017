#include<stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "w");

	if (fp1 == NULL)
		printf("failed");

	char s;
	while (fscanf(fp1, "%c", &s) != EOF) {
		if (s == 'A')
			;
		else

		fprintf(fp2, "%c", s);
	}

	return 0;
}