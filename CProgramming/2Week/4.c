#include<stdio.h>

int main()
{
	int month,day=0,hour=0,minute=0,sec=0;

	scanf("%d", &month);

	day = 30 * month;
	hour = day*24;
	minute = day * 60;
	sec = minute * 60;

	printf("%d �ð� %d �� %d ��", hour, minute, sec);
	

}