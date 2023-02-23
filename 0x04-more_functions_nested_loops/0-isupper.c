#include "main.h"

/**
 *  _isupper - function that cheks uppercase
 *
 *  @c: parametr for uppercase
 *
 *  Return: to 1 if uppercase and to 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
