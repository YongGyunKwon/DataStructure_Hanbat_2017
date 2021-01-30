#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NOTOK 0;
#define OK 1;
struct student {
	struct student *next, *prev;
	int age;
	char *name;
	char message[128];
};
struct student *head = 0;
int add(int age, char *name, char *msg) {
	struct student *new, *last;

	if ((new = malloc(sizeof(struct student)))==0 )
		return NOTOK;
	new->prev = new->next = 0;
	new->age = age;
	new->name = malloc(sizeof(8));
	strcpy(new->name, name);
	strcpy(new->message, msg);

	new->next = head;
	new->prev = 0;
	head = new;
	return OK;
}
void print() {
	struct student *ptr;
	for (ptr = head; ptr != 0; ptr = ptr->next) {
		printf("%d\t", ptr->age);
		printf("%s\t", ptr->name);
		printf("%s\n", ptr->message);

	}
}
main() {
	add(23, "hong", "hello");
	add(28, "kim", "test");
	print();
}