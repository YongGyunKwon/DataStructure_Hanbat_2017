#include<stdio.h>

int main()
{
	int year;

	printf("���̸� �Է��Ͻÿ�:");
	scanf("%d", &year);

	if (1<=year&&year <= 3)
		printf("����");
	else if (year >= 4 && year <= 7)
		printf("100��");
	else if (year >= 8 && year <= 12)
		printf("250��");
	else if (year >= 13 && year <= 18)
		printf("350��");
	else 
		printf("500��");
	
}