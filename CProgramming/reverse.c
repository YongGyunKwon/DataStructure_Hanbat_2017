#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define NOTOK 0

struct mystr {
	struct mystr *next, *prev;
	int age;
	char name[64];
	char *message;
} *head;


void print() {
	struct mystr *ptr;
	for(ptr=head; ptr; ptr = ptr->next){
		printf("%d ", ptr->age);
		printf("%s ", ptr->name);
		printf("%s\n\n", ptr->message);
	}
}


int add(int age, char *name, char *msg){
	struct mystr *new, *last;

	if((new=malloc(sizeof(struct mystr))) == 0)
		return NOTOK;

	new->next = new->prev = 0;
	new->age = age;
	strcpy(new->name, name);
	new->message = malloc(sizeof(8));
	strcpy(new->message, msg);

	if(!head){
		head = new;
		return OK;
	}

	for(last=head; last->next; last=last->next);

	last->next = new;
	new->prev = last;
	return OK;
}

void reverse() {
	struct mystr *last; // 앞으로 보낼 노드
	struct mystr *flast; // 원래 마지막 노드... 마지막에 head로 지정용
	struct mystr *pre = 0;
	
	for(flast = head; flast->next; flast = flast->next);

	for(last = head; last;pre = last, last = last->next){
		if (last->next == 0) {
			last->next = head; // 마지막 노드의 next는 head;
			if (last == flast) {// 만약 마지막 노드가 원래 마지막 노드면 reverse 후 맨 처음 노드가 되니
				last->prev = 0; // prev = 0;
				pre->next = 0;
				head->prev = flast;
			}
			else if (last == head) { //만약 마지막 노드가 헤드면 다 돌았으니
				last->next = 0;
				head = flast; //마지막 노드는 원래 마지막노드 즉, 현재 맨 앞 노드를 가리키고
				break;
			}
			else {
				last->prev = head->prev;
				head->prev->next = last;
				head->prev = last;
				pre->next = 0;
			}
		}
	}
}	

int main() {
	add(20, "a", "a");
	add(21, "b", "b");
	add(22, "c", "c");
	add(23, "d", "d");
	print();

	reverse();

	print();
}
