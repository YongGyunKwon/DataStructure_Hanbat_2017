#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OK 1
#define NOTOK 0

struct mystr {
	struct mystr *next, *prev;
	int age;
	char *name;
};
struct mystr *head = 0;

int addNode(char *name, int age) {
	struct mystr *new;
	new = malloc(sizeof(struct mystr));
	new->prev = new->next = 0;

	new->age = age;
	new->name = malloc(128);
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
void changeName(char *name, int age) {
	struct mystr *ptr;
	for (ptr = head; ptr != 0; ptr = ptr->next) {
		if (ptr->age == age)
			ptr->name = name;
	}

}
int countNodes(int age){
	int count = 0;

	struct mystr *ptr;
	for (ptr = head; ptr != 0; ptr = ptr->next) {
		if (ptr->age == age)
			count++;
	}
	return count;
}
void print() {
	struct mystr *ptr;
	if (!head)
		printf("error");
	for (ptr = head; ptr != 0; ptr = ptr->next)
		printf("%d\t%s\n", ptr->age, ptr->name);

}
int removeAll() {
	struct mystr *ptr;
	for (ptr = head; ptr!=0; ptr = ptr->next) {
		head = ptr->next;
		head->prev = 0;
		head->next = ptr->next->next;
		free(ptr);
		ptr = head;
		if (!head)
			return OK;
	}
	ptr->prev = ptr->next = 0;
	free(ptr);
	head = 0;
	return OK;

}

int main() {
	addNode("kim", 20);
	addNode("park", 21);
	addNode("choi", 22);
	print();

	changeName("lee", 21);
	print();

	addNode("sun", 22);
	printf("the number of nodes= %d\n", countNodes(22));
	print();

	removeAll();
	print();
}