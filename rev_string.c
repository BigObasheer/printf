#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @args: va_list with string s
 * Return: void
 */

char *rev_string(va_list args)
{
	char *s = va_arg(args, char *);
	int start = 0, end, temp;
	char *buff;

	if (s == NULL)
	{
		return (NULL);
	}
	end = (_strlen(s) - 1);
	buff = _calloc(sizeof(char) * (end + 1), sizeof(char));
	if (buff == NULL)
		return (NULL);
	while (start <= end)
	{
		temp = s[start];
		buff[start] = s[end];
		buff[end] = temp;
		start++;
		end--;
	}
	return (buff);
}
