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

	n = 0;
	for (; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
