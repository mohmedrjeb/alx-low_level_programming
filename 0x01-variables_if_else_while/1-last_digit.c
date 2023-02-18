#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point
 *
 * Return: return to 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("the last digit of %d is ", n);

	if (n < 0)
	{
		n = -n;
	}
	n %= 10;

	if (n > 5)
	{
		printf("%d is grater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	return (0);
}
