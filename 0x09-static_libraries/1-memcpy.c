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
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr);

}
