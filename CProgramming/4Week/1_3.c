#include<stdio.h>

int main()
{
	int n;

	int i, sum=0;

	printf("�����Է�:");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
		sum =sum+i;

	printf("���� %d", sum);
}