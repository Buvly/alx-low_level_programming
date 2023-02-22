#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function prints only if  alphabet is in lowercase.
 * @c: is a single input letter
 * Return: 1 if c is alphabet lower and uper and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

