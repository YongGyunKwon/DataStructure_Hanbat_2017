#include<stdio.h>

int main()
{
	int x, y;

	printf("두수를 입력하시오:");
	scanf("%d %d", &x, &y);

	if (x > y)
		printf("%d", x);
	else
		printf("%d", y);
}