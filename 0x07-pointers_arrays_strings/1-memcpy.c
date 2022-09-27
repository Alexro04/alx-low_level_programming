#include "main.h"
/**
 * _memcpy - copies the memory of src into dest
 * @dest: first string
 * @src: the string to be copied
 * @n: size of memory to be copied
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
