#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]) {
	FILE *fp;
	char str;
	int ret;

	fp = fopen(argv[1], "w");

	if (fp == NULL)
		printf("File is not opend");
	
	do {
		scanf("%c", &str);
		
		fprintf(fp,"%c",str);

			if (str== '.')
				break;
		
	} while (1);
	if (fclose(fp) == EOF)
		printf("Error");
}