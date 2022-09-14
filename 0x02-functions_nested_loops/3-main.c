#include "main.h"
/**
 * main - chect the _islower code
 *
 * Return: 0
 */
int main(void)
{
	int t;

	t = _islower('T');
	_putchar(t + '0');
	t = _islower('o');
	_putchar(t + '0');
	t = _islower('M');
	_putchar(t + '0');
	t = _islower('I');
	_putchar(t + '0');
	_putchar('\n');
	return (0);
}
