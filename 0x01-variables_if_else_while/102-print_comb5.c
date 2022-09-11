#include <stdio.h>
/**
 * main - printing every two digit combination without rep
 *
 * Return: 0
 */
int main(void)
{
int x;
int y;
	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar('0' + x / 10);
				putchar('0' + x % 10);
				putchar(32);
				putchar('0' + y / 10);
				putchar('0' + y % 10);
				if (x != 98 || y != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
