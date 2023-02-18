#include <stdio.h>

/**
 * main - starting point
 *
 * Return: return to 0
 */

int main(void)

{
	char c = 'a';

	do {
		putchar(c);

		c++;

	} while (c <= 'z');

	c = 'A';

	do {
		putchar(c);

		c++;
	} while (c <= 'Z');

	putchar('\n');

	return (0);

}
