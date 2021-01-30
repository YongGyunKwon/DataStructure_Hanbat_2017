#include<stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	int ret;
	int count = 0;
	fp = fopen(argv[1], "r");
	if (fp ==NULL) {
		printf("Error\n");
	}
	do {
		ret = fscanf(fp, "%c", &ch);
		if (ret == EOF)
			break;
		printf("%c", ch);
		count++;
		if (ch == ' ')
			count--;
	} while (1);
	printf("Count:%d", count);

	return 0;
}