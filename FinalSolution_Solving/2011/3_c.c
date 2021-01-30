#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define OK 1 
#define NOTOK 0 

struct student {
	struct student *next, *prev;
	int age;
	char *name;
	char message[128];
};
struct student *head = 0;
print() {
	struct student *ptr = head;
	printf("-----print\n");
	while (ptr) {
		printf("\tname=[%s],age=[%d],message=[%s]", ptr->name, ptr->age, ptr->message);
		ptr = ptr->next;
	}
}
int add(int age, char *name, char *msg) {
	struct student *new, *last;
	if ((new = malloc(sizeof(struct student))) == 0)
		return NOTOK;
	new->prev = new->next = 0;
	new->age = age;
	new->name = malloc(10);
	strcpy(new->name, name);
	strcpy(new->message, msg);
	if (!head) {
		head = new;
		return OK;
	}
	for (last = head; last->next; last = last->next)
		;
	last->next = new;
	new->prev = last;
	return OK;
}
deleteOne(void) {
	struct student *ptr;
	for (ptr = head; ptr->next; ptr = ptr->next)
		;
	ptr->prev->next = 0;
	free(ptr);
}
void sort(void) {
	struct student *ptr, *src, *tmp;
	tmp = ptr=src=malloc(sizeof(struct student));
	

	for (ptr = head; ptr!=0; ptr = ptr->next) {
		for (src = ptr->next; src != 0; src = src->next) {
			if (ptr->age >src->age) {
				
				
				tmp ->age= ptr->age;
				tmp->name = ptr->name;
				strcpy(tmp->message ,ptr->message);
				
				ptr->age = src->age;
				ptr->name = src->name;
				strcpy(ptr->message,src->message);

				src->age = tmp->age;
				src->name = tmp->name;
				strcpy(src->message ,tmp->message);

			}
		}
	}
	
	
}
main() {
	add(23, "Hong", "hello");
	add(28, "Kim", "test");
	add(24, "a", "b");
	add(25, "choi", "world");
	add(21, "ho", "naldo");
	print();
	sort();
	print();
}