#include<stdio.h>

int main() {
	int s[10];
	int avg=0,sum=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &s[i]);
		sum += s[i];
	}
	avg = sum / 10;
	printf("%d", avg);
}