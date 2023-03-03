#include "main.h"

/**
 * _strcat - concat 2 strings,
 * @dest: destination string.
 * @src: source string.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	c2 = 0;
	while (*(dest + c1) != '\0')
	{
		c1++;
	}
	while (c2 >= 0)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
		{
			break;
		}
		c1++;
		c2++;
	}
	return (dest);
}	
