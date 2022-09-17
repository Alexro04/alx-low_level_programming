#include "main.h"
/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: the number of times the character should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int spc;
	int times;
	int loop;

	loop = 0;
	spc = 0;
	for (times = 0; times < n; times++)
	{
		while (spc < loop && times < n)
		{
			_putchar(' ');
			spc++;
		}
		_putchar('\\');
		_putchar('\n');
		loop++;
		spc = 0;
	}
}
