#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 *
 * Return: rot13 encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
			if (s[i] == letters[j])
			{
				s[i] = rot[j];
				break;
			}
	}
	return (s);
}
