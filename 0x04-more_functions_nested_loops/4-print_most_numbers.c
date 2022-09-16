#include "main.h"
/**
 * print_most_numbers - prints all numbers except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10;)
	{
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}


