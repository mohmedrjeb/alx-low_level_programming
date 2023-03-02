#include "main.h"

/**
 *  reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		z = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = z;
	}
}
