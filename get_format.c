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
	unsigned int i;
	char *s = _calloc(sizeof(char) * 1024, sizeof(char));
	/* char a = '\0';*/
	convs_t form[] = {
		{'d', &print_number},
		{'i', &print_number},
		/*{'c', char_to_str},
		  {'s', ret_str},
		  {'%', ret_perc},
		{'r', rev_string},
		{'R', rot13},
		{'b', convert_to_binary},*/
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
