#include "main.h"
/**
 * print_alphabet - prints all the letters of the alphabets using _putchar
 *
 * Return: 0
 */
void print_alphabet(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int b;
	for (b = 0; b < 26; b++)
	{
		_putchar(alphabet[b]);
	}
_putchar('\n');
}
