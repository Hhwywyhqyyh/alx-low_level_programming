#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: numbers in ascending order and separated by comma
 *
 * Return: Always 0;
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar (d + '0');
		if (d < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
