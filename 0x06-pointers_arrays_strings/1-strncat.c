#include "main.h"

/**
 * _strncat - function that concatenates tow strings
 * using the most n bytes from src
 * @dest: string
 * @src: string
 * @n: integer
 * Return: returnt dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
