#include <stdio.h>
#include "main.h"

/**
 * _islower - function prints only if  alphabet is in lowercase.
 * c is a single input letter
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

