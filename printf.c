#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

void _strcpy(char *dest, char *src);
/**
 * _printf - prints a formatted buffer of vriable arguments and types
 * @format: String literal containing % before format specifier
 *
 * Return: Number of chars printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, j;
	char *buff = _calloc(sizeof(char) * 1024, sizeof(char));
	char *tmp;
	va_list args;

	i = j = 0;
	va_start(args, format);
	for (i = 0, j = 0; format[i]; i++, j++)
	{
		if (format[i] != '%')
		{
			buff[j] = format[i];
		}
		else
		{
			tmp = get_format(format + i, args);
			_strcpy(buff + j, tmp);
			j += _strlen(tmp) - 1;
			i++; /*replace later with dynamic check*/
		}
	}
	buff[j] = '\0';
	write('\0', buff, j);
	return (j);
}
/**
 * _strcpy - copies src string to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];

	}
}
