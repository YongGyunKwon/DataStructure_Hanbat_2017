#include<stdio.h>
#include<string.h>

myStrcat(char *dest, char *str1, char *str2) {
	for (; *str1 != 0; str1++) {
		*dest = *str1;
		dest++;
	}
	

	for (; *str2 != 0; str2++) {
		*dest = *str2;
		dest++;
	}
	*dest = 0;

}

main() {
	char dest[1024], str1[128], str2[128];

	strcpy(str1, "Hello");
	strcpy(str2, "World");
	myStrcat(dest, str1, str2);

	printf("[%s]\n", dest);
}