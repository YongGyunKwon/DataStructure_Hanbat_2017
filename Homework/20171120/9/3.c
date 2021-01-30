#include<stdio.h>

int main(int argc,char *argv[]){

	int ret;
	char str[128];
	FILE *fp;
	fp=fopen(argv[1],"r");

	if((fp=fopen(argv[1],"r"))==NULL){
		printf("This file is not opend");
	}
	
	do{
		ret=fscanf(fp,"%s",str);
		if(ret==EOF)
			break;
		printf("%s\n",str);
	}while(1);

	if(fclose(fp)==EOF){
		printf("Error closing");
	}
	return 0;
}
