#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc,char *argv[]) {
	
	int i;

	for (int i = argc; argc > 0; i--)
	{
		if (islower(argv[i]))
		{
			argv[i] = toupper(argv[i]);
		}
		else if (isupper(argv[i])) {
			argv[i] = toupper(argv[i]);
		}
	}
}//¼öÁ¤!!!! 