#include<stdio.h>

int main()
{
	int i,index,outcount;
	int high;
	int a[10];
	int out[10];

	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	
	printf("\n\n");

	for(outcount=0;outcount<10;outcount++)
	{
		for(i=0,high=-1;i<10;i++)
	{	if(a[i]>high)
		{	high=a[i];
			index=i;
		}
	}
	out[outcount]=a[index];
	a[index]=-1;
	}

	for(i=0;i<10;i++)
		printf("%d\n",out[i]);
}
