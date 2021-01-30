#include<stdio.h>

int main()
{
	int n;

	int i, sum=0;

	printf("숫자입력:");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
		sum =sum+i;

	printf("합은 %d", sum);
}