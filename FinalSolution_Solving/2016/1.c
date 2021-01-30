#include<stdio.h>
#include<string.h>
encrypt(char *str, char *cmd) {
	int n = strlen(str);
	if (cmd == "one") {
		for (int i = 0; i < n; i++) {
			str[i] = str[i]+1;
			if (str[i] > 'Z')
				str[i] = str[i] - 26;
		}
		
	}
	else if (cmd == "two") {
		for (int i = 0; i < n; i++) {
			str[i] = str[i]+2;
			if (str[i] > 'Z')
				str[i] = str[i] - 26;
		}
		
	}
	printf("%s\n", str);

}
int main() {
	char str[512];
	strcpy(str, "ABDEFGHXYZA");
	encrypt(str, "one");
	strcpy(str, "ABDEFGHXYZA");
	encrypt(str, "two");
}