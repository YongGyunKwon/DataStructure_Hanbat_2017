#include<stdio.h>
#include<string.h>
reverse(char *cp) {
	int i;
	char *start, tmpChar[1024];

	for (start = cp; *cp != 0; cp++)
		;
	cp--;

	for (i = 0; cp != start; i++, cp--)
		tmpChar[i] = *cp;

	tmpChar[i] = *cp;
	tmpChar[i + 1] = 0;

	strcpy(start, tmpChar);
}
main() {
	char str[128];

	strcpy(str, "This");
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
}