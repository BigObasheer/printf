#include "holberton.h"
#include <stdlib.h>

char *convert_to_hex_long(va_list args);
/**
 * print_pointer - prints the address contained in a pointer
 * @args: list containing the address
 * Return: Char * of the string
 */
char *print_pointer(va_list args)
{
	char *tmp = convert_to_hex_long(args);
	char *buff = _calloc(sizeof(char) * 20, sizeof(char));
	int i, j;

	if (tmp == NULL)
		return (NULL);
	if (buff == NULL)
		return (NULL);
	buff[0] = '0';
	buff[1] = 'x';
	for (i = 0, j = 2; tmp[i]; i++, j++)
		buff[j] = tmp[i];
	return (buff);
}
/**
 * convert_to_hex_long - convert number to hex in lowercase
 * @args: the number to convert in decimal
 * Return: char * of converted int
 */

char *convert_to_hex_long(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
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
