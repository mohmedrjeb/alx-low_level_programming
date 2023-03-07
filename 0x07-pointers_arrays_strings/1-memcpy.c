#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory
 *@src: memory
 *@n: number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
