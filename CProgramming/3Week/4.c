#include<stdio.h>

int main()
{
	int n;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("짝수");
	else
		printf("홀수");
}