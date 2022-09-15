#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * positive_or_negative - Entry point, determine positive or negative number
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	/* your code goes there */
}
