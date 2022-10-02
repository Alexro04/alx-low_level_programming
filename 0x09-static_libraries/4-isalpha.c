#include "main.h"
/**
 * _isalpha - test if a character is alphabetic usimg ASCII value
 *
 * @c: argument
 *
 * Return: 1 0r 0
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
