#include<stdio.h>

void sum(int *i,int *j,int *sum){

	*sum=*i+*j;
	printf("%d %d %d",*i,*j,*sum);
}
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	sum(&a,&b,&c);
}

