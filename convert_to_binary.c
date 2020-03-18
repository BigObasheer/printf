#include "holberton.h"
#include <stdlib.h>
char *_rev_string(char *s);
/**
 * convert_to_binary - converts an int to binary
 * @args: va_list containing number to convert in decimal
 * Return: char * of converted int
 */
char *convert_to_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *buff;
	int i = 0;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));
	if (buff == NULL)
		return (NULL);
	if (num == 0)
	{
		free(buff);
		return ("0");
	}
	for (; num > 0; i++)
	{
		buff[i] = (num % 2) + '0';
		num = num / 2;
	}
	return (_rev_string(buff));
}
/**
 * _rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

char *_rev_string(char *s)
{
	int start = 0, end, temp;
	char *buff;

	end = (_strlen(s) - 1);
	buff = _calloc(sizeof(char) * (end + 1), sizeof(char));
	while (start <= end)
	{
		temp = s[start];
		buff[start] = s[end];
		buff[end] = temp;
		start++;
		end--;
	}
	free(s);
	return (buff);
}
