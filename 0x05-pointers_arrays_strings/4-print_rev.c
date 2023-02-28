#include "main.h"

/**
 * print_rev - functiion that print string reversibl
 *
 *
 * @s: string
 */

void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	p--;

	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
