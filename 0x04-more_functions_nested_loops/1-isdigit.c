#include "main.h"

/**
 * _isdigit - function that check digit between 0 and 9
 *
 * @c: parmetr
 *
 * Return: to 0 or 1
 */

int _isdigit(int c)
{
	if (c >='0' && c <= '9')
		return (1);
	else
		return (0);
}
