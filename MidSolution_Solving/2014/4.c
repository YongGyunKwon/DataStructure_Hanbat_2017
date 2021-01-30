#include<stdio.h>
void swapChar(char *str, int n) {
	
	int len = 0, count = 0;
	
	char *a[10];
	char *b[10];
	int i, j;
	for (; *str!=0; str++) {
		len++;
		count++;
	}
	
	for (; count > 0; count--)
		*str--;
	
	if(n * 2 < len){
		for (i = 0; i < n; i++) {
			*(a+i) =str[i];
			}
		*(a+i) = '\0';
		

		for (i = 0, j = len-n; j < len; i++,j++) 
			*(b+i) = str[j];
		*(b+i) = '\0';
	

		for (i = 0; i < n; i++) 
			*(str + i) = b[i];
			
		for (; *str!=0; str++)
			;
		for (i=0; i<n; i++)
			str--;
		for (j=0; *str != 0; str++,j++)
			*str = a[j];
	}
	

}
main() {
	char str1[128];
	strcpy(str1, "Hello World");
	swapChar(str1, 5);
	printf("str1:[%s]\n", str1);
	swapChar(str1, 5);
	printf("str1:[%s]\n", str1);
	swapChar(str1, 6);
	printf("str1:[%s]\n", str1);
}