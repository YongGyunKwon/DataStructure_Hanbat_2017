#include<stdio.h>

int main() {

	int a[10];
	for(int i=0;i<10;i++)
	scanf("%d", &a[i]);

	double sum = 0;
	for (int i = 0; i < 10; i++)
		sum += a[i];

	int max=-1;
	for (int i = 0; i < 10; i++)
		if (max < a[i])
			max = a[i];

	int min=0;
	for (int i = 0; i < 10; i++)
		if (min < 1 / a[i])
			min = a[i];

	double avg;
	avg = sum / 10;

	printf("%d %d %f", max, min,avg);
		
}