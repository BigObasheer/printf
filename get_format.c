#include "holberton.h"
#include <stdio.h>
#define NULL ((void *)0)
char *ret_perc(va_list args);
char *ret_str(va_list args);
char *char_to_str(va_list args);
/**
 * get_format - finds the format specifier and performs an action
 * @format: contains a pointer to the format specifier
 * @args: contains the va_list holding the args
 *
 * Return: formatted string
 */
char *get_format(const char *format, va_list args)
{
	const char *p;
	unsigned int i;
	convs_t form[] = {
		{'d', print_number},
		{'i', print_number},
		{'c', char_to_str},
		{'s', ret_str},
		{'%', ret_perc},
		{'r', rev_string},
		{'R', rot13},
		{'b', convert_to_binary},
		{'X', convert_to_hex},
		{'x', convert_to_hex_low},
		{'o', convert_to_oct},
		{'p', print_pointer},
		{'u', print_unumber},
		{'\0', NULL}
	};
	p = format;
	p++;
	for (i = 0; form[i].spec != '\0'; i++)
	{
		if (form[i].spec == *p)
		{
			return (form[i].f(args));
		}
	}
	return (NULL);
}
/**
 * ret_str - returns a string passed to it
 * @args: list containing the string to return
 *
 * Return: string passed to it
 */
char *ret_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	return (s);
}
/**
 * char_to_str - returns a single character as a string
 * @args: list containing the character to modify
 *
 * Return: Null terminated string
 */
char *char_to_str(va_list args)
{
	char a = va_arg(args, int);
	char *s = _calloc(sizeof(char) * 2, sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = a;
	return (s);
}
/**
 * ret_perc - returns % as a string
 * @args: contains the va_list holding the args
 *
 * Return: string
 */
char *ret_perc(va_list args __attribute__((unused)))
{
	char *s = _calloc(sizeof(char) * 2, sizeof(char));

	s[0] = '%';
	return (s);
}
