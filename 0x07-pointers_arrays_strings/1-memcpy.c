#include <stdio.h>
#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area
 * @dest: destination string
 * @src : source
 * @n : number of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
