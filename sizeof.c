#include <stdio.h>

int main(void)
{
	/* Question: what does " %d " represent? what about " %lu " ? */

	printf("char: %lu\n", sizeof(char));
	printf("short: %lu\n", sizeof(short));
	printf("int: %lu\n", sizeof(int));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));
	printf("long: %lu\n", sizeof(long));
	printf("long long: %lu\n", sizeof(long long));

	return 0;
}