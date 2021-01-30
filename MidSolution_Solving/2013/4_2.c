#include<stdio.h>

int findStr(char *str, char *target) {
	int count = 0;
	
	
	for (; *target != 0; target++) {
		for (; *str != 0; str++) {
			if (*target == *str)
				count++;
		}
		for (; *str >= 0; str--)
			;
	}
	
	return count;
}
main() {
	char s[128];
	strcpy(s, "Hello,World");

	printf("[%d]\n", findStr(s, "Ho"));
	printf("[%d]\n", findStr(s, "ld"));
	printf("[%d]\n", findStr(s, "lod"));
}