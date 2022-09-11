#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: 0
 * Printing all the alphabets in small letters
 */
int main(void)
{
	int a;

	for (a = 'A'; a <= 'z'; a++)
	{
		a = tolower(a);
		putchar(a);
	}
	putchar('\n');
	return (0);
}
