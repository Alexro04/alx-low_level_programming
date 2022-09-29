include "main.h"
/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: The string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (!*s)
		return;
	len = 1;
	return(len + _strlen_recursion(s + 1));
}
