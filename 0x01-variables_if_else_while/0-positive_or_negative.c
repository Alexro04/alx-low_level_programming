#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point, determine positive or negative number
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number is positive");
	else if (n == 0)
		printf("The number is zero");
	else
		printf("The number is negative");
	/* your code goes there */
	return (0);
}
