#include "main.h"
/**
 * _puts_recursion - prints a stirng using recursion
 *
 * @s: The string to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (!*s)
		_putchar('\n');
}
