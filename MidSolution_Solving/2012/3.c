#include<stdio.h>


strset(char *str, char ch, int n) {

	for (int i = 0; i < n; i++) {
		*(str + i) = ch;
		
	}


}

main() {
	char s1[128];

	strcpy(s1, "HelloWorld");
	strset(s1, 'k', 3);
	printf("[%s]\n", s1);
	strset(s1 + 5, 'A', 2);
	printf("[%s]\n", s1);
}
