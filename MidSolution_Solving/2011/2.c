#include<stdio.h>
verify(int a, int b, int c, int d);

main() {
	printf("[%d]\n", verify(95, 85, 90, 71));
	printf("[%d]\n", verify(90, 85, 90, 65));
	printf("[%d]\n", verify(71, 75, 74, 85));
}

verify(int a, int b, int c, int d) {
	if (a>70 && b>70 && c>70 && d>70 && (a + b + c + d) / 4 >  80)
		return 1;
	else
		return 0;
}