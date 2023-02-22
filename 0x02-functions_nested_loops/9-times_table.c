#include <stdio.h>
#include "main.h"

/**
 * times_table - function prints time table from 0 to 9.
 * i = first numver, j = second number, result = result of multiplication.
 * Return: time table.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar(result);
		}
		_putchar('\n');
	}
}

