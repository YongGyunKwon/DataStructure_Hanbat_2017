#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OK 1
#define NOTOK 0

struct node {
	struct node *next, *prev;
	int age;
	char name[128];
};
struct node *head;


int add(int age, char *name) {
	struct node *new,*last;

	if ((new = malloc(sizeof(struct node))) == 0)
		return NOTOK;
	new->next = new->prev = 0;
	new->age = age;
	strcpy(new->name, name);
	if (!head) {
		head = new;
		return OK;
	}
	new->next = head;
	head->prev = new;
	head = new;

	return OK;
}


int delete(char *name) {
	struct node *ptr;
	for (ptr = head; ptr->next; ptr = ptr->next)
		;
	for (; ptr != 0; ptr = ptr->prev) {
		if (!strcmp(name, ptr->name)) {
			if (ptr->prev == 0) {
				head = ptr->next;
				if (head)
					head->prev = 0;

			}
			else {
				ptr->prev->next = ptr->next;
				
				if (ptr->next)
					ptr->next->prev = ptr->prev;
			}
			free(ptr->age);
			free(ptr);
			return 1;
		}
	}
	return -1;

}
void print() {
	struct node *ptr;
	for (ptr = head; ptr->next; ptr = ptr->next)
		;
	for (; ptr != 0; ptr = ptr->prev) {
		printf("%d\t", ptr->age);
		printf("%s\n", ptr->name);
	}
}

int main() {
	add(20, "Hong");
	add(30, "Park");
	add(40, "Kim");

	print();

	delete("Hong");
	print();

	add(25, "Kim");
	delete("Kim");

	print();
}