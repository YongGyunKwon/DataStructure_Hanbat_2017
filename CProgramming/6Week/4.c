#include<stdio.h>

int main() {
	char s[100], *str;

	scanf("%s", s);


	for (str = s; *str != 0; str++) {
		if (*str == 'q' || *str == 'Q') {
			printf("Á¾·á");
			return 0;
		}
		else if (isupper(*str))
			printf("%c", tolower(*str));
		else if (islower(*str))
			printf("%c", toupper(*str));
	}
}
