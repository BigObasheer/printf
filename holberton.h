#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

void *_calloc(unsigned int nmemb, unsigned int size);

void print_all(const char * const format, ...);

int _strlen(char *s);

char *get_format(const char *format, va_list args);

char *rot13(char *s);

char *print_number(int n);

char *rev_string(char *s);

char *convert_to_binary(int num);

#endif
