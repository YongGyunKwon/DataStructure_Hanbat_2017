#include<stdio.h>

int main()
{

     int kor,eng,math;
     double avg;

     printf("국어점수:");
     scanf("%d",&kor);

     printf("영어점수:");
     scanf("%d",&eng);
     
     printf("수학점수:");
     scanf("%d",&math);

     avg = (kor+eng+math)/3;

     if(kor>=60 && eng >= 60 && math >= 60 && avg >= 70)
        printf("합격입니다.");

     else
       printf("불합격입니다.");


     return 0;
}
