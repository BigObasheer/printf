#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int start, end, temp;

	end = (_strlen(s) - 1);
	while (start <= end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
