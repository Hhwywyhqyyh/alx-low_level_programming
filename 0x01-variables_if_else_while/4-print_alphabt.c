#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabets in lowercase
 *
 * description- print all lowercase except 'q' and 'e'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while
		(ch <= 'z')
		{
			if ((ch != 'q' || ch != 'e') && ch <= 'z')
				putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}









