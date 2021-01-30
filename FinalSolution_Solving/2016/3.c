#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OK 1
#define NOTOK 0

struct mystr {
	struct mystr *next;
	int age;
	char *name;
};
struct mystr *head = 0;
int addNode(char *name, int age) {
	struct mystr *new,*last;
	if ((new = malloc(sizeof(struct mystr))) == 0)
		return NOTOK;

	new->next = 0;
	new->age = age;
	new->name = malloc(128);
	strcpy(new->name, name);

	if (!head) {
		head=new;
		return NOTOK;
	}
	for (last = head; last->next; last = last->next)
		;
	last->next = new;
	return OK;
}
int countNodes() {
	struct mystr *ptr;
	int count = 0;
	for (ptr = head; ptr != 0; ptr = ptr->next)
		printf("1");
		count++;
	return count;
}
void print() {
	struct mystr *ptr;
	for (ptr = head; ptr != 0; ptr = ptr->next)
		printf("%d  %s\n", ptr->age, ptr->name);
}
int deleteNode(char *name) {
	struct mystr *ptr,*prev=0;
	for (ptr = head; ptr!=0; prev = ptr, ptr = ptr->next) {
		if (!strcmp(ptr->name, name)) {
			if (ptr == head) {
				head = ptr->next;
			}
			else {
				prev->next = ptr->next;
			}
			free(ptr);

			return OK;
		}
	}
	return NOTOK;
}
void sort() {
	struct mystr *ptr1, *ptr2,*tmp;
	
	tmp = malloc(sizeof(struct mystr));
	tmp->name = malloc(128);
	for (ptr1 = head; ptr1 != 0; ptr1 = ptr1->next) {
		for (ptr2 = ptr1->next; ptr2 != 0; ptr2 = ptr2->next) {
			if (ptr1->age > ptr2->age) {
				tmp->age = ptr2->age;
				ptr2->age = ptr1->age;
				ptr1->age = tmp->age;

				tmp->name = ptr2->name;
				ptr2->name = ptr1->name;
				ptr1->name = tmp->name;

				
			}
		}

	}
}
int main() {
	addNode("hong", 25);
	addNode("kim", 23);
	addNode("choi", 24);
	
	print();

	printf("%d\n", countNodes());

	deleteNode("choi");
	print();

	deleteNode("hong");
	print();

	addNode("park", 21);
	addNode("lee", 28);


	sort();
	print();
}