#include<stdio.h>

int main()
{
	int n;

	printf("���ϴ� ������ �����Ͻÿ�.");

	scanf("%d", &n);

	switch (n) {
	case 1:
	{	int year;

	printf("���̸� �Է��Ͻÿ�:");
	scanf("%d", &year);

	if (1 <= year&&year <= 3)
		printf("����");
	else if (year >= 4 && year <= 7)
		printf("100��");
	else if (year >= 8 && year <= 12)
		printf("250��");
	else if (year >= 13 && year <= 18)
		printf("350��");
	else
		printf("500��");



	break;
	}
	case 2:
	{

		int x, y;

		printf("�μ��� �Է��Ͻÿ�:");
		scanf("%d %d", &x, &y);

		if (x > y)
			printf("%d", x);
		else
			printf("%d", y);


		break;
	}
	case 3:
	{

		int kor, eng, math;

		printf("������ ���� �Է�:");
		scanf("%d %d %d", &kor, &eng, &math);

		if (kor >= 60 && eng >= 60 && math >= 60 && ((kor + math + eng) / 3 >= 70))

			printf("�հ�");
		else
			printf("���հ�");

		break;
	}
	case 4:
	{
		int n;

		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &n);

		if (n % 2 == 0)
			printf("¦��");
		else
			printf("Ȧ��");

		break;
	}
	}
}