#include "main.h"

/**
 * _strlen - function that return the length of strings
 *
 * @s: string to be return it length
 *
 * Return: return the length of the string
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
