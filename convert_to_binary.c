#include "holberton.h"
#include <stdio.h>
/**
 * convert_to_binary - converts an int to binary
 * @num: number to convert in decimal
 * Return: char * of converted int
 */
char *convert_to_binary(int num)
{
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
	return (rev_string(buff));
}
