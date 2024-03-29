#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	/* printf("%s vs %s:\n", "main.c", "*.c"); */
	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "m*a*i*n*.*c*"); */
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "main.c"); */
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "m*c"); */
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "ma********************************c"); */
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "*"); */
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "***"); */
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "m.*c"); */
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main.c", "**.*c"); */
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main-main.c", "ma*in.c"); */
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "main", "main*d"); */
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	/* printf("%s vs %s:\n", "abc", "*b"); */
	r = wildcmp("abc", "*b");
	printf("%d\n", r);
	return (0);
}
