#include<stdio.h>

char score(int s){

	if(s>=80) return 'A';
	else if(s<80 && s>=60) return 'B';
	else if(s<60 && s>=50) return 'C';
	else return 'D';


}

main(){
	
	int a;
	scanf("%d",&a);

	printf("%c",score(a));
}
