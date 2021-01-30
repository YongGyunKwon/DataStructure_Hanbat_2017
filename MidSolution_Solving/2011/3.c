#include<stdio.h>
exchange(char *string, int i, int j)
{
	int lenth = strlen(string);
	char tmp;
	if (lenth < i || lenth < j)
		return 0;
	else {
		tmp = *(string + i);
		*(string + i) = *(string + j);
		*(string + j) = tmp;

		return 1;
	}
}
main() {
	char str[128];
	int ret;

	strcpy(str, "HelloThisIsTest");
	printf("%s\n", str);

	ret = exchange(str, 1, 4);
	printf("ret=%d [%s]\n", ret, str);
	
	strcpy(str, "HelloThisIsTest");
	ret = exchange(str, 1, 128);
	printf("ret=%d [%s]\n", ret, str);
}