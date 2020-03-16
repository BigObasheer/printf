#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

char *rev_string(char *s)
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
	return (buff);
}
