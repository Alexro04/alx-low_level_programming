#include "main.h"
/**
 * print_last_digit - prints the last digit of an int
 *
 * @i: argument passed
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	return (r < 0 ? -r : r);
}
