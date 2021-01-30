#include<stdio.h>

int main()
{
     int a,b;

     printf("두수를 입력하시오:");
     scanf("%d %d",&a,&b);

     if(a>b)
     
      printf("큰수:%d",a);

     else
       printf("큰수: %d",b);

      return 0;
}
