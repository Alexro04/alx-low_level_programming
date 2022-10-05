#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it with char c
 * @size: size of the array
 * @c: character argument
 * Return: NULL is size=0 or  pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
		return (NULL);
	else
	{
		arr = malloc(sizeof(*arr) * size);
		for (n = 0; n < size; n++)
		{
			arr[n] = c;
		}
	}
	return (arr);
}
