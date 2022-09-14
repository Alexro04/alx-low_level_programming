#include "main.h"
#include <stdio.h>
/**
 * main - test print_last_digit function
 *
 * Return: 0
 */
int main(void)
{
	int r;
	
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	printf("%d\n", r);
	return (0);
}
