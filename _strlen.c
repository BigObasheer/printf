#include "holberton.h"

/**
 * _strlen - gets the length of a string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
