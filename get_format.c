#include "holberton.h"

int get_format(const char *format, va_list args)
{
	const char *p;
	unsigned int i;
	int j;
	char *s;

	for (p = format; *p != '\0'; p++)
	{
		switch (*p)
		{
		case 'c':
			i = va_arg(args, int);
			return (i);
		case 's':
			s = va_arg(args, char *);
			return (s);
		case '%':
			return ('%');
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
			return (-1);
		default:
			return (*p);
		}
	}
}
