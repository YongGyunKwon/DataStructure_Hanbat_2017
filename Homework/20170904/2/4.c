#include<stdio.h>

int main()
{
    int mon,hour,min,sec;

    printf("write month");
    scanf("%d",&mon);

    hour = mon * 30 * 24;
    min = hour * 60;
    sec = min * 60;

    printf("%dmonth  is %d hour, %d minute, %d second.",mon,hour,min,sec);

}

