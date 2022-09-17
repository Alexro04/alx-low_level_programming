#include "main.h"
/**
 * print_square - prints squares with #
 *
 * @size: argument of type int
 *
 * Return: 0
 */
void print_square(int size)
{
	int w;
	int l;


	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
