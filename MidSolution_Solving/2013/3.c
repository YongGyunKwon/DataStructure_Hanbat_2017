#include<stdio.h>
int myStrncpy(char *dest, char *src, int len) {
	for (int i = 0; i < len; i++)
	{
		*dest = src[i];
		dest++;
		
	}
	*dest = 0;

}
main() {
	char s[128], d[128];
	strcpy(s, "Hello,World");
	
	myStrncpy(d, s, 5);
	printf("[%s]\n", d);
	myStrncpy(d, s, 7);
	printf("[%s]\n", d);
	myStrncpy(d, s, 100);
	printf("[%s]\n", d);
}