#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @str: string pointer
 * Return: return str
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
		return (str);
}
