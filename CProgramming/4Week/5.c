#include<stdio.h>

int main() {
	char c;
	int i, x;

	printf("문자를 입력하라.");
	scanf("%c", &c);
	printf("숫자를 입력하여라");
	scanf("%d", &x);

	if (c == 'q')
		printf("종료");
	else
		for (i = 0; i < x; i++)
			printf("%c", c);

	
}