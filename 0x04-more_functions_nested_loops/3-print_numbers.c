#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers from 0 to 9 followed by new line.
* Return: No return.
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

