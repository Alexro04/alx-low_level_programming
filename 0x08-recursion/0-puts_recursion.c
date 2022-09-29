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
	if (*s == '\0')
		_putchar('\n');
	if (!s)
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
