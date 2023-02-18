#include <unistd.h>

/**
 * main - starting point for program execution
 *
 * Return: return to 1
 */

int main(void)

{
	char message[] = "and that piece of art is useful\" - Dora korpar,"
		"2015-10-19\n";

	write(STDERR_FILENO, message, sizeof(message) - 1);

	return (1);
}

