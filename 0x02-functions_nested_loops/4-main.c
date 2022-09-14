#include "main.h"
/**
 * main - test _isalpha code
 *
 * Return: 0
 *
 */
int main(void)
{
	int t;

	t = _isalpha('S');
	_putchar(t + '0');
	t = _isalpha('t');
	_putchar(t + '0');
	t = _isalpha('0');
	_putchar(t + '0');
	t = _isalpha('p');
	_putchar(t + '0');
	_putchar('\n');
	return (0);
}
