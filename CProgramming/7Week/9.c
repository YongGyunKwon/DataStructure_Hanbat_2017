#include<stdio.h>
#include<ctype.h>
void main(int argc, char *argv[]) {
	char *cp;

	for (int i = 3; i>0; i--) {
		cp = argv[i];
		
		for (; *cp != 0;) {
			if (isupper(*cp)) {
				*cp = tolower(*cp);
				printf("%c", *cp);
			}
			else if (islower(*cp)) {
				*cp = toupper(*cp);
				printf("%c", *cp);
			}
			cp++;
			
		}
		printf("\t");
	}
}