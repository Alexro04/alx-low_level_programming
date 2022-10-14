#include <stdarg.h>
#include <stdio.h>
#include "variadic_function.h"
/**
 * sum_them_all - sums up all the arguments passed to the function
 * @n: number of arguments
 * @...: variable arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	_putchar('\n');
	va_end(ap);
	return (sum);
}
