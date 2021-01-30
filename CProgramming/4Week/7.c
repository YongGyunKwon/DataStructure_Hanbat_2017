#include<stdio.h>

int main()
{
	int i;
	char c;

	for (i = 1; i < 1000; i++){
		if (i % 7 == 0) 
			printf("%d  ", i);
			
		if (i % 100 == 0) {
			printf("Continue(y/n)?");
			scanf("%c", &c);


			if (c == 'n')
				break;
			else if (c == 'y')

				continue;
		}
			
			}
}