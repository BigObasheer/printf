#include "holberton.h"
#include <stdlib.h>

/**
 * rot13 - function that encodes a string using rot13
 * @args: va_list containing string s
 *
 * Return: rot13 encoded string
 */

char *rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j;
	char lett[60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[60] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *buff = _calloc(sizeof(char) * 1024, sizeof(char));

	if (s == NULL)
	{
		if (buff != NULL)
			free(buff);
		return (NULL);
	}
	if (buff == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
			if (s[i] == lett[j])
			{
				buff[i] = rot[j];
				break;
			}
	}
	return (buff);
}
