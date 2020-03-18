#include "holberton.h"
#include <stdlib.h>

/**
 * convert_to_oct - convert number to oct
 * @args: the number to convert in decimal
 * Return: char * of converted int
 */

char *convert_to_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *buff;
	int i, result, dig, temp;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));
	if (buff == NULL)
		return (NULL);
	if (num == 0)
	{
		free(buff);
		return ("0");
	}
	while (num)
	{
		result += (num % 8) * dig;
		dig /= 8;
		dig *= 10;
		i++;
	}
	temp = i;
	dig /= 10;
	for (i = 0 ; i < temp; i++)
	{
		buff[i] = ((result / dig) % 10) + '0';
		dig /= 10;
	}
	return (buff);
}
