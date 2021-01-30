#include<stdio.h>

struct inf {
	char name[20];
	char grade[3];
};

int main() {
	struct inf s[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s", s[i].name);
		scanf("%s", s[i].grade);
	}

	printf("Reading\n");

	for (int i = 0; i < 3; i++) {
		printf("%s ", s[i].name);
		printf("%s\n", s[i].grade);
	}
}