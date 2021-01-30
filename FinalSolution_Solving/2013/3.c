#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OK 1
#define NOTOK 0

struct mystr {
	struct mystr *next, *prev;
	int age;
	char *name;	// ÃÖ´ë 128 char
};
struct mystr *head = 0;

countNode() { 
	struct mystr *ptr;
	int count = 0;
	for (ptr = head; ptr != 0; ptr = ptr->next)
		count++;

	return count;
}
addNode(char *name, int age) { 
	struct mystr *new;
	new = malloc(sizeof(struct mystr));

	new->next = new->prev = 0;
	new->age = age;
	new->name = malloc(128);
	strcpy(new->name,name);

	if (!head) {
		head = new;
		return OK;
	}

	new->next= head;
	head->prev = new;
	head = new;
	return OK;
}
changeAge(char *name, int age) {
	struct mystr *ptr;
	for (ptr = head; ptr != 0; ptr = ptr->next) {
		if (!strcmp(ptr->name, name)) {
			ptr->age = age;
		}
	}
}
int insertNode(struct mystr *sptr, char *name, int age) {
	struct mystr *ptr;
	ptr = malloc(sizeof(struct mystr));
	ptr->prev = ptr->next = 0;

	ptr->age = age;
	ptr->name = malloc(128);
	strcpy(ptr->name, name);

	
	
	sptr->next = ptr;
	ptr = sptr->next;
	sptr->next->prev = ptr;

	return OK;
}
void printNodes() {
	struct mystr *ptr;
	for (ptr = head; ptr!=0; ptr = ptr->next)
		printf("%d \t %s\n", ptr->age, ptr->name);
}
saveNodes(char *fileName) { 
	char *s;
	s = malloc(128);
	int n;
	FILE *fp;
	fp = fopen(fileName, "w");
	
	struct mystr *ptr;
	
	for (ptr = head; ptr != 0; ptr = ptr->next) {
		n = ptr->age;
		s = ptr->name;
		fprintf(fp, "%d\t%s\n", n,s);
	}
}
main() {
	addNode("kim", 21);
	insertNode(head, "hong", 23);
	printNodes();	// kim 	21
					// hong	23


	addNode("park", 20);
	printNodes();	// park	20
					// kim 	21
					// hong	23

	printf("[%d]\n", countNode());	// 3
	
	changeAge("kim", 22);
	printNodes();	// park	20
					// kim 	22
					// hong	23

	saveNodes("output.txt");
}
