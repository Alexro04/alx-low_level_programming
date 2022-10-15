#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to the function
 *
 * @separator: string to be printed between the strings
 * @n: number of stings passed
 * @...: variable number of strings
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *word;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ap, char *);
		if (word != NULL)
		{
			printf("$s", word);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf('\n');
	va_end(ap);
}
