#include<stdio.h>

int main()
{
	int n;

	printf("원하는 문제를 선택하시오.");

	scanf("%d", &n);

	switch (n) {
	case 1:
	{	int year;

	printf("나이를 입력하시오:");
	scanf("%d", &year);

	if (1 <= year&&year <= 3)
		printf("무료");
	else if (year >= 4 && year <= 7)
		printf("100원");
	else if (year >= 8 && year <= 12)
		printf("250원");
	else if (year >= 13 && year <= 18)
		printf("350원");
	else
		printf("500원");



	break;
	}
	case 2:
	{

		int x, y;

		printf("두수를 입력하시오:");
		scanf("%d %d", &x, &y);

		if (x > y)
			printf("%d", x);
		else
			printf("%d", y);


		break;
	}
	case 3:
	{

		int kor, eng, math;

		printf("국영수 점수 입력:");
		scanf("%d %d %d", &kor, &eng, &math);

		if (kor >= 60 && eng >= 60 && math >= 60 && ((kor + math + eng) / 3 >= 70))

			printf("합격");
		else
			printf("불합격");

		break;
	}
	case 4:
	{
		int n;

		printf("정수를 입력하시오:");
		scanf("%d", &n);

		if (n % 2 == 0)
			printf("짝수");
		else
			printf("홀수");

		break;
	}
	}
}