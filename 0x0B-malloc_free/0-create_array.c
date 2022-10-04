#include "main.h"
/**
 * create_array - creates an array and initializes it with char c
 * @size: size of the array
 * @c: character argument
 * Return: NULL is size=0 or  pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	arr[0] = c;
	return (arr);
}
