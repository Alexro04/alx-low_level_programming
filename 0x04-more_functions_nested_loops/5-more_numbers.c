#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int num;
	int time;

	time = 0;
	while (time < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
		time++;
	}
}

