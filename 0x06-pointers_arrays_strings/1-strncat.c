#include "main.h"
/**
 * _strncat - concatnates 2 strings using at most n bytes from src
 *
 * @dest: first string
 * @src: second string
 * @n: maximun number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
