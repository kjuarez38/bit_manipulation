#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		putchar(n + '0');
		return;
	}

	print_binary(n >> 1);
	putchar((n & 1) + '0');
}

