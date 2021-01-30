#include<stdio.h>

struct mystr {
	char name[20];
	char snumber[10];
	int score;
	char grade;
};
readData(struct mystr *ptr) {
	scanf("%s", ptr->name);
	scanf("%s", ptr->snumber);
	scanf("%d", &ptr->score);
	
}
calGrade(struct mystr *ptr) {
	if ((*ptr).score >= 90 && (*ptr).score <= 100) (ptr->grade)= 'A';
	else if ((*ptr).score >= 80 && (*ptr).score <=89) (ptr->grade)='B';
	else if ((*ptr).score >= 70 && (*ptr).score <= 79) (ptr->grade) = 'C';
	else if ((*ptr).score >= 60 && (*ptr).score <= 69) (ptr->grade) = 'D';
	else return 'F';
}
printData(struct mystr ptr) {
	printf("%s\t", ptr.name);
	printf("%s\t", ptr.snumber);
	printf("%d\t", ptr.score);
	printf("%c\n", ptr.grade);
	
}
main() {
	struct mystr var;

	readData(&var);
	calGrade(&var);
	printData(var);
}
