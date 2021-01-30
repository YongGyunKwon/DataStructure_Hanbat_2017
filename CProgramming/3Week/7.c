#include<stdio.h>

int main()
{
	int x, y;
	printf("정수를 입력하시오:");
	scanf("%d %d", &x, &y);


	if (y == 0)
		printf("Divide by 0");

	else
		printf("%d", x / y);
	
}