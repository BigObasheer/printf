#include "holberton.h"

int get_format(const char *format, va_list args)
{
	const char *p;
	unsigned int i;
	int j;
	char *s;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p;
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c':
			i = va_arg(args, int);
			return(i);
			break;
		case 's':
			s = va_arg(args, char *);
			return(s);
			break;
		case '%':
			return('%');
			break;
		case 'd':
			j = va_arg(args, int);
			return_print_number(j);
			break;
		case 'i':
			j = va_arg(args, int);
			return_print_number(j);
			break;
		case 'r':
			s = va_arg(args, char *);
			return_rev_string(s);
			break;
		case 'b':
			i = va_arg(args, int);
			return_print_binary(i);
			break;
		case 'R':
			s = va_arg(args, char *);
			return_rot13(s);
			break;
		case '\0':
			return (-1);
		default:
			_putchar('%');
			_putchar(*p);
		}
	}
}
