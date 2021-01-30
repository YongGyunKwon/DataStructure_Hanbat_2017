#include<stdio.h>

int main(int argc,char *argv[]) {
	FILE *fp;
	fp = fopen(argv[1], "r");
	int ret;
	char ch;
	if (fp == 0)
		printf("File open failed");
	while(1)
	{
		ret = fscanf(fp, "%c", &ch);
		if(ret==1)
		printf("%c", ch);
	}
	
	if (fclose(fp) == EOF) {
		printf("Error Closing");
	}
	return 0;
}