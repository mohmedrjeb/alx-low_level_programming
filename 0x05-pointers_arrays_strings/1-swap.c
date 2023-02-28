#include "main.h"

/**
 * swap_int - function that swap the value of tow integer
 *
 * @a: integer
 *
 * @b: integer
 *
 */

void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;

	*b = k;
}
