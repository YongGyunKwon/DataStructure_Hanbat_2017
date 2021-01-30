#include<stdio.h>
delchars(char *str, char ch) {
	char *tmp=str;
	for (; *str != 0; str++) {
		if (*str == ch) {
			for (; *str != 0; str++) {
				*str = *(str + 1);
			}
			str = tmp;
		}
	}

}
main() {
	char s1[128];

	strcpy(s1, "HelloWorld");
	delchars(s1, 'l');
	printf("[%s]\n", s1);
	delchars(s1, 'W');
	printf("[%s]\n", s1);
}