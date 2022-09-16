#include "main.h"
/**
 * print_line - draw a straignt line in terminal
 * @n: number of times the line should be printed
 * Return: 0
 */
void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
