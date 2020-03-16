#include "holberton.h"

int get_format(const char *format, ...)
{
	const char *p;
	unsigned int i;
	int j;
	va_list args;
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
			_putchar(*p, &k);
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c':
			i = va_arg(args, int);
			_putchar(i);
			break;
		case 's':
			s = va_arg(args, char *);
			_puts(s);
			break;
		case '%':
			_putchar('%');
			break;
		case 'd':
			j = va_arg(args, int);
			_print_number(j);
			break;
		case 'i':
			j = va_arg(args, int);
			_print_number(j);
			break;
		case 'r':
			s = va_arg(args, char *);
			_rev_string(s);
			break;
		case 'b':
			i = va_arg(args, int);
			_print_binary(i);
			break;
		case 'R':
			s = va_arg(args, char *);
			_rot13(s);
			break;
		case '\0':
			return (-1);
		default:
			_putchar('%');
			_putchar(*p);
		}
	}
	va_end(args);
}
