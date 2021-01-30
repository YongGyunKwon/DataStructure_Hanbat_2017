#include<stdio.h>

int main() {
	char str[1024],*last;
	scanf("%s", str);

	for (last=str; *last!= 0;last++ )
		printf("%c",str);
	last--;
	for (; last != str; last--) {
		printf("%c", *last);
	}
	
	printf("%c", *last);
	

}