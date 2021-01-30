
#include<stdio.h>

sum(int *ip, int count) {
	int s=0;
	for (int i = 0; i < count; i++)
		s += *(ip+i);

	return s;
}
main() {
	int ia[10] = { 0,1,2,3,4,5,6,7,8,9 };

	printf("%d\n", sum(ia, 3));
	printf("%d\n", sum(ia, 5));
	printf("%d\n", sum(ia+3, 2));
	printf("%d\n", sum(ia+2, 3));
}