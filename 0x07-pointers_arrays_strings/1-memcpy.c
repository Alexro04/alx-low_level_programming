#include "main.h"
/**
 * _memcpy - copies the memory of src into dest
 * @dest: 
 * @src: the string to be copied
 * @n: 
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src;
	}

}
