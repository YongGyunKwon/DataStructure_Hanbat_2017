#include<stdio.h>

int main() {
	char c;
	int i, x;

	printf("���ڸ� �Է��϶�.");
	scanf("%c", &c);
	printf("���ڸ� �Է��Ͽ���");
	scanf("%d", &x);

	if (c == 'q')
		printf("����");
	else
		for (i = 0; i < x; i++)
			printf("%c", c);

	
}