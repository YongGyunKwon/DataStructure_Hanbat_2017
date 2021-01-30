#include <stdio.h> 

int main()
{
	int num[12] = { 0 };
	int i, input, temp, max = 0, index;

	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 숫자를 입력:", i);
		scanf("%d", &input);
		num[input]++;
		
	}

	
	for (i = 0; i < 12; i++) {

		if (max < num[i]) {
			max = num[i];
			index = i;
		}
	}
		

	printf("%d", index);
}