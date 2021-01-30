#include<stdio.h>
deleteChar(char *string, char ch) {
	char *tmp;
	for (; *string != 0; string++) {
		if (*string == ch) {
			for (tmp = string; *tmp != 0; tmp++)
				*tmp = *(tmp + 1);
		}
	}
}
main() {
	char str[128];

	strcpy(str, "HelloWellSpecial");
	printf("%s\n", str);
	deleteChar(str, 'e');
	printf("%s\n", str);
}