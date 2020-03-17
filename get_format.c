#include "holberton.h"
#define NULL ((void *)0)
char *ret_str(va_list args);
char *char_to_str(va_list args);
/**
 * get_format - finds the format specifier and performs an action
 * format: contains a pointer to the format specifier
 * args: contains the va_list holding the args
 *
 * Return: formatted string
 */
char *get_format(const char *format, va_list args)
{
	const char *p;
	unsigned int i;
	char *s = _calloc(sizeof(char) * 1024, sizeof(char));
	convs_t form[] = {
		{'d', &print_number},
		{'i', &print_number},
		{'c', char_to_str},
	        {'s', ret_str},
		{'%', char_to_str},
		{'r', rev_string},
		{'R', rot13},
		{'b', convert_to_binary},
		{'\0', NULL}
	};
	if (s == NULL)
		return (NULL);
	p = format;
	p++;
	for (i = 0; form[i].spec; i++)
	{
		if (form[i].spec == *p)
		{
			s = form[i].f(args);
			return (s);
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

	s[0] = a;
	return (s);
}
