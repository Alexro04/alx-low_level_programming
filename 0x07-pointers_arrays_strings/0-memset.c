#include "main.h"
/**
 * _memset - fills memory with constant byte
 *
 * @s: The string to be filled
 * @b: a character of constant byte
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
