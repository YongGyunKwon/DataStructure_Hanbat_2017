#include<stdio.h>

struct mystr {
	char name[10]; int number; int korea; int english; int average;
};
void readData(struct mystr *ptr) {
	for (int i = 0; i < 3; i++) {
		scanf("%s", ptr->name);
		scanf("%d", &(ptr->number));
		scanf("%d", &(ptr->korea));
		scanf("%d", &(ptr->english));
		ptr++;
	}
}
void calAverage(struct mystr *ptr) {
	for (int i = 0; i < 3; i++) {
		ptr->average = ((ptr->korea + ptr->english)) / 2;
		ptr++;
	}
}
void printData(struct mystr *ptr) {
	
	for (int i = 0; i < 3; i++) {
		printf("%s    %d     %d      %d     %d\n", ptr->name, ptr->number, ptr->korea, ptr->english, ptr->average);
		ptr++;
	}
}
main() {
	struct mystr data[3];
	readData(data);
	calAverage(data);
	printData(data);
}