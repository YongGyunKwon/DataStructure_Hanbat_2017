#include<stdio.h>

int main()
{
	int kor, eng, math;

	printf("������ ���� �Է�:");
	scanf("%d %d %d",&kor,&eng,&math);

	if (kor >= 60 && eng >= 60 && math >= 60 && ((kor + math + eng) / 3 >= 70))

		printf("�հ�");
	else
		printf("���հ�");

}