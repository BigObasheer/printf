#include "holberton.h"

/**
 * print_number - prints number using putchar
 * @n: number
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, j = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	else
	{
		i = n;
		while (i > 9)
		{
			i = i / 10;
			j = j * 10;
		}
		while (j >= 1)
		{
			_putchar((n / j) + '0');
			n = n % j;
			j = j / 10;
		}
	}
}
