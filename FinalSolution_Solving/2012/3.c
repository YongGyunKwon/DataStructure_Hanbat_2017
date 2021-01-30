#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct mystr {
	struct mystr *next, *prev;
	int age;
	char *name;
};
struct mystr *head = 0;

int countNode() {
	struct mystr *ptr;
	int count = 0;
	for (ptr = head; ptr != 0; ptr = ptr->next)
		count++;
	return count;
}
delNode(int position) {
	struct mystr *ptr;
	int i;
	
	for (i = 0, ptr = head; i < position; i++, ptr = ptr->next) {
		if (ptr->prev == 0) {
			head = ptr->next;
		}
		else {
			ptr->prev->next = ptr->next;
			if(ptr->next)
			ptr->next->prev = ptr->prev;

		}
		free(ptr);
		return OK;

	}
	return NOTOK;
}
delNodes(int age) { ... }
addNode(char *name, int age) { ... }
printNode(int position) { ... }
printNodes() { ... }
reverseLink() { ... }

main() {
	addNode(¡°kim¡±, 23);
	addNode(¡°park¡±, 25);
	addNode(¡°lee¡±, 22);
	//printf(¡°node count = [%d]\n¡±, countNode()); // 3
	delNode(1);
	//printNodes(); // kim 23
				  // lee 22
	//addNode(¡°cho¡±, 22);
	//delNodes(22);
	//printNodes(); // kim 23
	//addNode(¡°shin¡±, 22);
	//printNode(1); // shin 22
	//printNodes(); // kim 23
				  // shin 22
	//reverseLink();
	//printNodes(); // shin 22
				  // kim 23
}