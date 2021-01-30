#include<stdio.h>

int main() {
	int i=0,n,sum=0;

	scanf("%d", &n);

	
	do{
		sum += i;
		i++;
	} while (i < n);

	printf("%d",sum);
}