#include "holberton.h"
#include <stdio.h>
char *_rev_string(char *s);
/**
 * convert_to_binary - converts an int to binary
 * @num: number to convert in decimal
 * Return: char * of converted int
 */
char *convert_to_binary(va_list args)
{
	int num = va_arg(args, int);
	char *buff;
	int i = 0, tmp = num;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));
	for (; num > 0; i++)
	{
		buff[i] = (num % 2) + '0';
		num = num / 2;
	}
	if (tmp < 0)
		buff[i] = '1';
	else
		buff[i] = '0';
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
	return (buff);
}
