#include "main.h"
/**
 * _islower - tests if a letter is lowercase using ASCII values
 *
 * c - integar type
 * Return: 0 for not lowercase, or 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
