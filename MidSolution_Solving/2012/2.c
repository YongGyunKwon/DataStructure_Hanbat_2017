#include<stdio.h>
#include<string.h>

int strset(char *str, char ch, int n) {
	
	for (int i = 0; i < n; i++) {
		*(str + i) = ch;
		str++;
	}
	

}

main() {
	char s1[128];

	strcpy(s1, "HelloWorld");
	strset(s1, 'k', 3);
	printf("[%s]\n", s1);
	
	printf("[%s]\n", s1);
}