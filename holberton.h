#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
typedef char *(*operation)(va_list args);
/**
 * struct convs - info on conversion cases and the address of the correct func
 * @spec: format specifier
 * @f: Address of correct function
 *
 */
typedef struct convs
{
	char spec;
	operation f;
} convs_t;

int _putchar(char c);

int _printf(const char *format, ...);

void *_calloc(unsigned int nmemb, unsigned int size);

void print_all(const char * const format, ...);

int _strlen(char *s);

char *get_format(const char *format, va_list args);

char *rot13(va_list args);

char *print_number(va_list args);

char *rev_string(va_list args);

char *convert_to_binary(va_list args);

#endif
