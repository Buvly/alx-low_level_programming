#include <stdio.h>
#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: The pointer string
 * @b : char to be printed
 * @n : number of memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
