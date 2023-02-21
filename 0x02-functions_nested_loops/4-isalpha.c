#include "main.h"

/**
 * _isalpha - function that check alphabet
 *
 * @c: parametr
 *
 * Return: return to 1 if c alphabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
