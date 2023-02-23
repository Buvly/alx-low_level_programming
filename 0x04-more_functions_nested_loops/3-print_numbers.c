#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers from 0 to 9 followed by new line.
* Return: Null.
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchat(i);
	}
	_putchar('\n');
}

