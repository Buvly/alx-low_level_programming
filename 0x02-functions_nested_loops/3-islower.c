#include <stdio.h>
#include "main.h"

/**
 * _islower - function prints only if  alphabet is in lowercase.
 * @c: is a single input letter
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

