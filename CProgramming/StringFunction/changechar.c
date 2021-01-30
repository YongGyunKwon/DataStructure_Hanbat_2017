#include<stdio.h>
#include<string.h>

int changeChar(char *src, int i, char ch) {
	int count=0;
	char *prc;
		
	prc= src;
	
	while (*src != 0) {
		*src++;
		count++;
	}
	if (count < i)
		return -1;
	else {
		*(prc + i) = ch;
		return 1;
	}
}

int main() {
	char str[128];
	int ret;

	strcpy(str, "Hello, world");
	ret = changeChar(str, 2, 'k');
	if (ret == 1)
		printf("[%s]\n", str);
	else
		printf("can't change.\n");
}