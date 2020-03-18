#include "holberton.h"
#include <stdlib.h>

/**
 * convert_to_hex_low - convert number to hex in lowercase
 * @args: the number to convert in decimal
 * Return: char * of converted int
 */

char *convert_to_hex_low(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *buff;
	int i, tmp = 0;
	int j;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));
	if (buff == NULL)
		return (NULL);
	if (num == 0)
	{
		free(buff);
		return ("0");
	}
	for (i = 0; num != 0;)
	{
		tmp = num % 16;
		if (tmp < 10)
		{
			buff[i] = tmp + 48;
			i++;
		}
		else
		{
			buff[i] = tmp + 87;
			i++;
		}
		num = num / 16;
	}
	i--;
	for (j = 0; j <= i; j++, i--)
	{
		tmp = buff[j];
		buff[j] = buff[i];
		buff[i] = tmp;
	}
	return (buff);
}
