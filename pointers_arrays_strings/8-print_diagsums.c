#include "main.h"

/**
 * print_uint int - Prints an unsigned int integer
 * @n: Number to print
 */
static void print_uint(unsigned int n)
{
	if (n > 9)
		print_uint(n / 10);

	_putchar('0' + (n % 10));
}

/**
 * print_number - Prints a signed integer
 * @n: Number to print
 */
static void print_number(int n)
{
	unsigned int value;

	if (n < 0)
	{
		_putchar('-');
		value = (unsigned int)(-(n + 1)) + 1;
	}
	else
	{
		value = (unsigned int)n;
	}

	print_uint(value);
}

/**
 * print_diagsums - Prints sums of two diagonals
 * @a: Square matrix
 * @size: Matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}
