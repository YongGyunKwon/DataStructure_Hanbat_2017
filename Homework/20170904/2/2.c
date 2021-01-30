#include<stdio.h>

int main()
{
    int mid,final,avg;

    printf("Mid Exam Score:");
    scanf("%d",&mid);

    printf("Final Exam Score:");
    scanf("%d",&final);
    
    avg = (mid + final) / 2; 

    printf("Average Score:%d",avg);
}
