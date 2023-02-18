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

		if (c != 'e' && c != 'q')

		{
			putchar(c);
		}

		c++;

		} while (c <= 'z');

	putchar('\n');

	return (0);

}

