#include "main.h"
/**
 * _strlen - returns length of a str
 *
 * @s: string argument
 * Return: length of s
 */
int _strlen(char *s)
{
int counter = 0;
while (*s != 0)
{
	counter++;
	s++;
}
return (counter);
}

