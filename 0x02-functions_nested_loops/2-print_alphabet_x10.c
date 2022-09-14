#include "main.h"
/**
 * print_alphabet_x10 - calls the print_alphabet function 10 times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int n;
int c;

	n = 0;
	while (n < 10)
	{
		for (c = 0; c < 26; c++)
		{
			_putchar(alphabet[c]);
		}
		n++;
		_putchar('\n');
	}
}
