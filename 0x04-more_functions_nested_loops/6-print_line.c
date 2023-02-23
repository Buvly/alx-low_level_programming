#include "main.h"

/**
* print_line - draws a straight line.
* @n :  number of times the characted _ .
* Return: No return.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

