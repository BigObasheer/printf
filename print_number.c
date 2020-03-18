#include "holberton.h"
#include <stdlib.h>
/**
 * print_number - prints number using putchar
 * @args: va_list with num n
 * Return: void
 */
char *print_number(va_list args)
{
	int n = va_arg(args, int);
	unsigned int i, j = 1, k = 0;
	char *buff = _calloc((sizeof(char) * 21), sizeof(char));

	if (buff == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		buff[0] = ('-');
		k++;
	}
	if (n == 0)
	{
		free(buff);
		return ("0");
	}
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
