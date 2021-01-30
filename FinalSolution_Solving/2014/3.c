#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

	new->next = new->prev = 0;
	new->age = age;
	new->name = malloc(128);
	strcpy(new->name, name);

	if (!head) {
		head = new;
		return OK;
	}

	new->next= head;
	head->prev = new;
	head = new;
	return OK;
}
void printNodes() {
	struct mystr *ptr;

	for (ptr = head; ptr != 0; ptr = ptr->next)
		printf("%d\t%s\n", ptr->age, ptr->name);

}
void findAge(int age) {
	struct mystr *ptr;

	for(ptr=head;ptr!=0;ptr=ptr->next)
		if(ptr->age==age)
			printf("%d\t%s\n", ptr->age, ptr->name);


}
int swapNodes(int a, int b) {
	struct mystr *ptr1,*ptr2,*tmp;
	ptr1=ptr2=tmp = malloc(sizeof(struct mystr));
	
	int i;
	for (ptr1=head,i = 0; i < a; i++) {
		ptr1 = ptr1->next;
		if (!ptr1) {
			printf("error");
			return NOTOK;
		}
	}
	for (ptr2=head,i = 0; i < b; i++,ptr2=head) {
		ptr2 = ptr2->next;
		if (!ptr2) {
			printf("error");
			return NOTOK;
		}
	}
	tmp->age = ptr1->age;
	ptr1->age = ptr2->age;
	ptr2->age = tmp->age;
	
	tmp->name = malloc(128);
	tmp->name = ptr1->name;
	ptr1->name = ptr2->name;
	ptr2->name = tmp->name;
}
main() {
	addNode("kim", 21);
	
	addNode("park", 20);
	addNode("choi", 22);
	addNode("ahn", 21);

	printNodes();

	findAge(21);

	swapNodes(0, 3);
	printNodes();

	swapNodes(1, 2);
	printNodes();

	swapNodes(6, 10);
	
}