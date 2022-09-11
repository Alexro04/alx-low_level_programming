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

	for (a = 'A'; a <= 'z';)
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		a = tolower(a);
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

