// #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct book
{
	char title[32];
	short price;
};

int main()
{
	struct book textbook = {"The C programming Language", 55};

	struct book *ptr_book = &textbook;

	printf("%s: ", textbook.title);
	printf("%d$\n", textbook.price);

	printf("%s: ", ptr_book->title);
	printf("%d$\n", ptr_book->price);

	return 0;
}