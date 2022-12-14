#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the existing string
 * @str: a string argument
 *
 * Return: NULL if str=NULL or ponter to duplicated str
 */
char *_strdup(char *str)
{
	char *dup;
	char *ptr = str;
	int len_str = 0;
	int n = 0;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		len_str++;
		str++;
	}
	dup = malloc(sizeof(char) * len_str + 1);
	if (dup == NULL)
		return (NULL);
	while (n <= len_str)
	{
		dup[n] = ptr[n];
		n++;
	}
	dup[n] = str[n];
	return (dup);
}
