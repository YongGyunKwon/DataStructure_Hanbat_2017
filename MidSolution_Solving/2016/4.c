#include<stdio.h>
#include<string.h>
extern int findChar(char *, char);
void main() {
	int i;
	char ch, str[128];

	strcpy(str, "This is test");
	i = findChar(str, 'i');
	printf("[%d]\n", i);
}
int findChar(char *str, char ch) {
	int count = 0,found=0;
	while (*str != 0) {
		if (*str == ch) {
			found = 1;
			break;
		}
		else {
			*str++;
			count++;
		}
		}
	if(found==1) return count;
	else return -1;
}