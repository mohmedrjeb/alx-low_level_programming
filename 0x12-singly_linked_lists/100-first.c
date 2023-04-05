#include <stdio.h>

void printfirst(void)__attribute__((constructor));

/**
 * printfirst - print string before main executed
 * Return: void
 */

void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
