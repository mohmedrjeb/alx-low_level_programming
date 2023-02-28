#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0;
	char p = s[0];
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		p = s[i];
		s[i] = s[len];
		s[len] = p;
	}

}
