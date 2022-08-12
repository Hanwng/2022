#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	b1.price = 15;
	strcpy(b1.name, "明朝那些事");
	/*printf("%s\n", b1.name);
	printf("%d\n", b1.price);*/
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	return 0;


}