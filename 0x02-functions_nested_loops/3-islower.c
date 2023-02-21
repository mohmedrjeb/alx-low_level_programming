#include "main.h"

/**
 * _islower - function that print loweercase
 *
 * @c: parametr that should be printed
 *
 *Return: to 1 if c lowercasr and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
