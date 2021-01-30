#include<stdio.h>

int main()
{
	int year;

	printf("나이를 입력하시오:");
	scanf("%d", &year);

	if (1<=year&&year <= 3)
		printf("무료");
	else if (year >= 4 && year <= 7)
		printf("100원");
	else if (year >= 8 && year <= 12)
		printf("250원");
	else if (year >= 13 && year <= 18)
		printf("350원");
	else 
		printf("500원");
	
}