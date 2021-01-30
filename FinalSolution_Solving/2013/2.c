#include<stdio.h>

findChar(char *str, char ch) {
	int count = 0;
	for (; *str != 0; str++)
		count++;
	str--;
	count--;
	for (; *str>0; str--) {
		if (*str == ch)
			break;
		count--;
	}
	return count;
}
main() {
	printf("[%d]\n", findChar("Hello, world", 'o'));
}