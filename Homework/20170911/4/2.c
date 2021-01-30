#include<stdio.h>

int main()
{
     int i=100;
     int mon,year,sum=0;
     
     
	for(year=1; year<=30; year++)
    	{
		 for(mon=0;mon<12;mon++)
     			sum = sum+i;
       

         
     }
       
       printf("총액은 %d입니다.",sum);
     
     return 0;
}
