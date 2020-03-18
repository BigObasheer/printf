# _printf

## About / synopsis
An implementation of printf created as part of Holberton School Curriculum.

## Authorized functions and macros:
* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

## Built With

* [c] - Betty style formatting

## Built By:
* Osama Basheer
* Brett Davis

### Project contents

| File Name | Short Description |
| --- | --- |
|_calloc.c|Allocates memory for an array|
|_strlen|Gets the length of a string|
|convert_to_binary|Converts an int to binary|
|convert_to_hex|Convert number to hex|
|convert_to_hex_low|Convert number to hex in lowercase|
|convert_to_oct|Convert number to oct|
|get_format|Finds the format specifier and performs an action|
|print_number|Prints number to  buffer|
|printf.c|Prints a formatted buffer of variable arguments and types|
|rev_string|Function that reverses a string|
|rot13|Function that encodes a string using rot13|

### Example program for Printf.c

#include "holberton.h"

int main()

{

   char ch = 'H';

   char str[10] = "Holberton";

   int n = 150;

   _printf("Character is %c \n", ch);

   _printf("String is %s \n" , str);

   _printf("Integer value is %d\n" , n);

   _printf("Octal value is %o \n", n);

   _printf("Hexadecimal value is %x \n", n);

   return 0;

}

#### Output
Character is H

String is Holberton

Integer value is 150

Octal value is 226

Hexadecimal value is 96
