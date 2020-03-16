#include "holberton.h"

char *get_format(const char *format, va_list args)
{
	const char *p;
	unsigned int i;
	int j;
	char *s = '\0';

	for (p = format; *p != '\0'; p++)
	{
		switch (*p)
		{
		case 'c':
			*s = va_arg(args, int);
			return (s);
		case 's':
			s = va_arg(args, char *);
			return (s);
		case '%':
		{
			s = "%";
			return (s);
		}
		case 'd':
			j = va_arg(args, int);
			return (print_number(j));
		case 'i':
			j = va_arg(args, int);
			return (print_number(j));
		case 'r':
			s = va_arg(args, char *);
			return (rev_string(s));
		case 'b':
			i = va_arg(args, int);
			return (print_binary(i));
		case 'R':
			s = va_arg(args, char *);
			return (rot13(s));
		case '\0':
			return (s);
		default:
			return (s);
		}
	}
	return (s);
}
