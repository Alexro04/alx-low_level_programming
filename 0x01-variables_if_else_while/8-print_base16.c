#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 * letters and alphabets
 */
int main(void)
{
	int n;
	int l;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}

