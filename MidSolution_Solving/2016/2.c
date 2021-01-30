#include<stdio.h>

int sum_of_square(int n)
{
	int sqr = 0;
	int i;
	for (i = 1; i <= n; i++)
		sqr = sqr + (i*i);
	return sqr;
}
void main()
{
	int sum;
	sum = sum_of_square(4);
	printf("sum=%d", sum);
}
