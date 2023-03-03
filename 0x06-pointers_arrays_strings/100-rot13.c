#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: string pointer
 * Return: returb str
 */

char *rot13(char *str)
{
	int i;
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}
	return (str);
}
