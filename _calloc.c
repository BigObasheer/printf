#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: byte size of the elements
 *
 * Return: Pointer to the allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return ((void *)arr);
}
