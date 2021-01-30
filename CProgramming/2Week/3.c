#include<stdio.h>

int main()
{
	int a, b, c;
	printf("볼펜 1자루의 값");
	scanf("%d",&a);
	printf("사려는 볼펜의 수");
	scanf("%d",&b);
	printf("입금한 액수");
	scanf("%d",&c);

	printf("거스름돈 %d", c - (a*b));
}