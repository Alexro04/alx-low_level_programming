#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	char *first_str = s1;
	char *second_str = s2;
	int total_len = 0;
	int i = 0;
	int j = 0;

	while (*s1)
	{
		s1++;
		total_len++;
	}
	while(*s2)
	{
		s2++;
		total_len++;
	}

	final = malloc(sizeof(char) * (total_len + 1));
	
	while (first_str[i] != '\0')
	{
		final[i] = first_str[i];
		i++;
	}
	while(second_str[j] != '\0')
	{
		final[i] = second_str[j];
		i++;
		j++;
	}

	final[i] = '\0';
	return (final);
}
