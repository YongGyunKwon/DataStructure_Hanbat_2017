#include<stdio.h>
#include<string.h>

ChangeCase(char *str) {
	for (; *str != 0; str++) {
		if (isupper(*str) == 0)
			*str = toupper(*str);
		else
			*str = tolower(*str);
	}

}
main() {
	char str[128];

	strcpy(str, "Hello, world");
	printf("%s\n", str);
	ChangeCase(str);
	printf("%s\n", str);
}