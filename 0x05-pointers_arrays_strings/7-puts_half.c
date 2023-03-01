#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{

	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
		else if (len % 2 != 0)
		{
			for (i = len - 1 / 2; str[i]; i++)
			{
				_putchar(str[i]);
			}
			_putchar('\n');
		}
}
