#include<stdio.h>

int main()
{
	int won = 100;
	int sum = 0;
	int x, y;
	for (x = 0; x <=30; x++) {
		for (y = 0; y <= 12; y++)
			sum = won*x*y;
	}
	printf("%d", sum);
}