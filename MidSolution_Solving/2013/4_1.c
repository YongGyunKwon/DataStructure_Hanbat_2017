#include<stdio.h>
#include<string.h>

int findStr(char *str, char *target) {
	int count = 0;
	int len = 0;
	int n = strlen(target);
	for (int i = 0; i < n;i++) {
		while (*str != 0) {
			len++;
			if (*str == *(target+i))
				count++;
			str++;
		}
		for (len;len>=0;len--)
			str--;
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