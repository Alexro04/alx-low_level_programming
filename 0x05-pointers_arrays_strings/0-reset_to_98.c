#include "main.h"
/**
 * reset_to_98 - updates value to 98
 *
 * @*n: argument pointer
 * Return: 0
 */
void reset_to_98(int *n)
{
	int *p;

	*p = &n;
	*p = 98;
	return (*p);
}
