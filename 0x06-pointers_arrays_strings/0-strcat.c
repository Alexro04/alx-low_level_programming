#include "main.h"
/**
 * _strcat - concatnates 2 strings
 *
 * @dest: first string
 * @src: second string appended to first
 *
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
