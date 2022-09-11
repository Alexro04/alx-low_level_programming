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
	int b;

	for (a = 'A'; a <= 'z'; a++)
	{
		a = tolower(a);
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		a = toupper(b);
		putchar(b);
	}
	putchar('\n');
	return (0);
}

