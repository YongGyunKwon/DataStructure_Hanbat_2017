#include<stdio.h>
#include<string.h>

int main(int argc,int *argv[]){
	FILE *fp;
	char str[128];
	int contain;
	
	fp=fopen(argv[1],"r");
	contain=0;
	while(fscanf(fp,"%s",str)!=EOF){
		if(strcmp(argv[2],str)){
			contain =1;
			break;
		}
	}
	if(contain==1)
		printf("%s exist.\n",argv[2]);
	else
		printf("%s does not exist.\n",argv[2]);
}
