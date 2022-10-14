#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints all the number arguments
 *
 * @separator: stirng printed inbetween
 * @n: number of undefined arguments
 * @...: varying arguments
 *
 * Return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(ap);
}
