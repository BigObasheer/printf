#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @args: va_list containing string s
 *
 * Return: rot13 encoded string
 */

char *rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j, len;
	char lett[60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[60] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *buff;

	if (s == NULL)
	{
		return (NULL);
	}
	len = _strlen(s);
	buff = _calloc(sizeof(char) * len, sizeof(char));
	if (buff == NULL)
	{
		return (NULL):
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
