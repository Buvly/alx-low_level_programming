#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabets in lowercase 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}

