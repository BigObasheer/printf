#include "holberton.h"
#include <stdlib.h>

/**
 * print_unumber - prints unsigned number
 * @args: va_list with num n
 * Return: void
 */
char *print_unumber(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int i, j = 1, k = 0;
	char *buff = _calloc((sizeof(char) * 21), sizeof(char));

	if (n == 0)
		buff[0] = ('0');
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
			buff[k] = ((n / j) + '0');
			n = n % j;
			j = j / 10;
			k++;
		}
	}
	return (buff);
}
