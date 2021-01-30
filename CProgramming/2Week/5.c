#include<stdio.h>

int main()
{
	int money, score;
	printf("학점 당 수업료");
	scanf("%d", &money);

	printf("자신이 전체 신청할 학점");
	scanf("%d", &score);
	

	printf("%d원", money*score);
	

}