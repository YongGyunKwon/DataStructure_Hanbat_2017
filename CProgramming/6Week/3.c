#include<stdio.h>

main() {
	int n[10],max=0;
	
	for (int i = 0; i < 10; i++)
		scanf("%d", &n[i]);

	
	for (int i = 0; i < 10; i++)
		if (max < n[i])
			max = n[i];

	printf("Max=%d", max);
}