#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - print 0-99 taking multiples of 3&5 into consideration
 * 
 * main - test code
 *
 * @n: argument
 * Return: 0
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');
}

int main(void)
{
	fizz_buzz();
	return (0);
}
