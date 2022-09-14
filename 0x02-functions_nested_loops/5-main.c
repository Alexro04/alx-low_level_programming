#include "main.h"
/**
 * main - tests print_sign function
 *
 * Return: 0
 */
int main(void)
{
	int t;

	t = print_sign(75);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	return (0);
}



