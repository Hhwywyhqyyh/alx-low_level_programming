#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
/**
 * main - A program that prints the size of various computer types
 *
 * Return 0 (succes)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %zu byte(s)\n", (unsigned long)
			sizeof(a));
	printf("size of b int: %zu byte(s)\n", (unsigned long)
			sizeof(b));
	printf("size of c long int: %zu byte(s)\n", (unsigned long)
			sizeof(c));
	printf("size of d long long int: %zu byte(s)\n", (unsigned long)
			sizeof(d));
	printf("size of f float: %zu byte(s)\n", (unsigned long)
			sizeof(f));
	return (0);
}
