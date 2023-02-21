#include "main.h"

/**
 * print_sign - function that print sign
 *
 * @n: parametr
 *
 * Return: return to 1 if n+ to if n=0 to -1 if n-
 */

int print_sign(int n)
{
	if (n > 0)
	{

		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{

		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{

		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
