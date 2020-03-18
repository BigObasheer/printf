#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

void _strcpy(char *dest, char *src);
/**
 * _printf - prints a formatted buffer of variable arguments and types
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

	if (buff == NULL)
	{
		return (-1);
	}
	if (format == NULL)
	{
		free(buff);
		return (-1);
	}
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
			if (format[i + 1] == '\0' || (format[i + 1] == ' ' &&
						      format[i + 2] == '\0'))
			{
				return (-1);
			}
			tmp = get_format(format + i, args);
			if (tmp != NULL)
			{
				_strcpy(buff + j, tmp);
				j += _strlen(tmp) - 1;
				if (format[i + 1] == 'c' && tmp[0] == '\0')
				{
					j++;
				}
				if (format[i + 1] != 's' ||
				    format[i + 1] == 'R')
					free(tmp);
			}
			else
			{
				buff[j++] = format[i];
				buff[j] = format[i + 1];
			}
			i++; /*replace later with dynamic check*/
		}
	}
	buff[j] = '\0';
	write(1, buff, j);
	free(buff);
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
		if (src[i])
			dest[i] = src[i];
	}
}
