#include<stdio.h>

int main()
{
	int won = 100;
	float sum = 0;
	int x, y;

	float p;

	printf("이율 입력");
	scanf("%f", &p);
	for (x = 0; x <=30; x++) {
		for (y = 0; y <= 12; y++)
			sum = (1+p)*won*x*y;
	}
	printf("%f", sum);
}