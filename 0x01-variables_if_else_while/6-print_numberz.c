#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 * printing 1-9
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
