#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function prints last digit of a number.
 * @n: is a single input number.
 * Return: last digit in number n.
 */
int print_last_digit(int n)
{
	int l;

	l = (n % 10);
	if (l < 0)
	{
		l = (-l);
	}
	_putchar(l + '0');
	return (l);
}

