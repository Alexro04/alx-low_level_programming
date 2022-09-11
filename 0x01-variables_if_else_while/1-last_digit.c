#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: Always 0
 * code to get the last digit of a random number
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lsd;

	lsd = n % 10;
	if (lsd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
	else if (lsd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lsd);
	else if (lsd < 6 && lsd != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
	/* your code goes there */
	return (0);
}
