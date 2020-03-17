#include "holberton.h"
#define NULL ((void *)0)

/**
 * get_format - format specifier for print f
 * @format
 * Return: string
 */

char *get_format(const char *format, va_list args)
{
	const char *p;
	/*unsigned int i;*/
	int j;
	char *s = _calloc(sizeof(char) * 1024, sizeof(char));
	char a = '\0';

	if (s == NULL)
		return (NULL);
	p = format;
	p++;
		switch (*p)
		{
		case 'c':
			a = va_arg(args, int);
			s[0] = a;
			return (s);
		case 's':
			s = va_arg(args, char *);
			return (s);
		case '%':
			s = "%";
			return (s);
			j = va_arg(args, int);
			return (print_number(j));
		case 'i':
			j = va_arg(args, int);
			return (print_number(j));
		case 'r':
			s = va_arg(args, char *);
			return (rev_string(s));
			/*
			 *case 'b':
			 *i = va_arg(args, int);
			 *return (print_binary(i));
			 */
		case 'R':
			s = va_arg(args, char *);
			return (rot13(s));
		case '\0':
			return (s);
		default:
			return (s);
		}
		return (s);
}
