#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: 0
 * Printinf the alphabets reversed
 */
int main(void)
{
	int r;

	for (r = 'z'; r >= 'a'; r--)
	{
		r = tolower(r);
		putchar(r);
	}
	putchar('\n');
	return (0);
}
