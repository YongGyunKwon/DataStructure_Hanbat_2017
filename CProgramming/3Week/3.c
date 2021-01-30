#include<stdio.h>

int main()
{
	int kor, eng, math;

	printf("국영수 점수 입력:");
	scanf("%d %d %d",&kor,&eng,&math);

	if (kor >= 60 && eng >= 60 && math >= 60 && ((kor + math + eng) / 3 >= 70))

		printf("합격");
	else
		printf("불합격");

}