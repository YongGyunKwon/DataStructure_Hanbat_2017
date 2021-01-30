#include<stdio.h>

int main()
{
	int i;
	int a[10];
	int high,low;

	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	for(i=0,high=-1;i<10;i++)
		if(a[i]>high)
			high=a[i];
	for(i=0,low=-1;i<10;i++)
		if(1/a[i]>low)
			low=a[i];

	printf("High number:%d,low number:%d",high,low);


}
