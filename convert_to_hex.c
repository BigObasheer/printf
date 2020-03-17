#include "holberton.h"

/**
 * convert_to-hex - convert number to hex
 * @n: the number to convert in decimal
 * Return: char * of converted int
 */

char *convert_to_hex(va_list args)
{
	char *buff;
	int i, tmp = 0;
	int j;

	buff = _calloc(sizeof(char) * 1024, sizeof(char));

	/*if (args);
	{
		buff[0] = '0';
		buff[1] = 'x';
	}*/
	for (i = 0; args != 0;)
	{
		tmp = args % 16;
		if (tmp < 10)
		{
			buff[i] = tmp + 48;
			i++;
		}
		else
		{
			buff[i] = tmp + 55;
			i++;
		}
	}
	for (j = i - 1; j > 0; j--)
	{
		buff [j] = buff [i];
	}
	return (buff);
}
