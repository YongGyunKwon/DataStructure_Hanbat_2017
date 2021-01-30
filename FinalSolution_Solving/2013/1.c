#include<stdio.h>
struct mystr {
	char name[20]; int age; char adress[10];

};
myread(struct mystr *ptr) {
	scanf("%s", ptr->name);
	scanf("%d", &ptr->age);
	scanf("%s", &ptr->adress);
}
myprint(struct mystr ptr) {
	printf("%s\n", ptr.name);
	printf("%d\n", ptr.age);
	printf("%s\n", ptr.adress);

}
main() {
	struct mystr var1;

	myread(&var1);
	myprint(var1);
}