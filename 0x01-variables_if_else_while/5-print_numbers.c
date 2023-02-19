#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: single digit numbers starting from 0
 *
 * Return: Always 0; (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
