#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * convert_to_oct - convert number to oct
 * @args: the number to convert in decimal
 * Return: char * of converted int
 */

char *convert_to_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *buff;
	int i = 0, temp, j;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));
	if (buff == NULL)
		return (NULL);
	if (num == 0)
	{
		free(buff);
		return (NULL);
	}
	while (num)
	{
		buff[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}
	i--;
	j = 0;
	while (j <= i)
	{
		temp = buff[j];
		buff[j] = buff[i];
		buff[i] = temp;
		i--;
		j++;
	}
	return (buff);
}
