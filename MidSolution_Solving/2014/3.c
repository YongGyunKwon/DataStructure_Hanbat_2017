#include<stdio.h>

int mypow(int a, int b) {
	int c=1;
	if (b == 0)
		return 1;
	else if (b < 0)
		return -1;
	else {
		for (int i = 1; i <= b; i++)
			c = c*a ;
	}
	return c;
}

main() {
	int a, b, ret;

	scanf("%d %d", &a, &b);

	ret = mypow(a, b);
	printf("%d\n", ret);
}