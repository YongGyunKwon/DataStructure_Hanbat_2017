#include<stdio.h>
#include<string.h>

int main(){
	char str[1024],*last;
	
	scanf("%s",str);

	for(last=str;*last!=0;last++)
	;
	last--;

	for(;last!=str;last--){
		printf("%c",*last);
	}
	printf("%c",*last);
	
}
