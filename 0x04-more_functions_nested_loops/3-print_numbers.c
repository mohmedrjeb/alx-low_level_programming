#include "main.h"

/**
 * print_numbers - function that print numbers from 0 to 9 followed by newline
 *
 * Return: return to void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
