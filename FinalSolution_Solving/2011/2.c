#include<stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char s;
	fp = fopen(argv[1], "w");

	if (fp == NULL)
		printf("File is not open");

	do {
		scanf("%c", &s);
		if (s == '.')
			break;
		fprintf(fp, "%c", s);
	} while (1);

	if (fclose(fp) == EOF)
		printf("Error");
}