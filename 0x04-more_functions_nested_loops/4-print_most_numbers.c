#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers from 0 to 9 except 2 and 4 followed by new line.
* Return: No return.
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

