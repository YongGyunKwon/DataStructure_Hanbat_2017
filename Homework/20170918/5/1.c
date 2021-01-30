#include<stdio.h>

int main()
{
	int i;
	float sum=0, average;
	int student[10];

	for(i=0;i<10;i++)
	scanf("%d",&student[i]);

	for(i=0;i<10;i++)
	sum+=student[i];

	average=sum/10;

	printf("%f",average);
}
