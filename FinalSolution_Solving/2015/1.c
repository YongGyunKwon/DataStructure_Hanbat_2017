#include<stdio.h>

changeChar(char *str, char *ptr) {
	if (ptr == "even") {
		for (int i = 0; *str != 0;str++,i++)
			if (i % 2 == 0)
				*str = 'X';
	}
	else if (ptr == "odd") {
		for (int i = 0; *str != 0;str++, i++)
			if (i % 2 == 1)
				*str = 'X';
	}
	//���⼭ printf �ǵ��� �ϱ�
	printf("%s\n", str);
}
main() {
	char str[512];
	strcpy(str, "Hello, World");
	changeChar(str, "even");
	printf("%s\n", str);//�����
	strcpy(str, "Hello, World");
	changeChar(str, "odd");
	printf("%s\n", str);//�����
}