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
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
