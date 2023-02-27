#include <stdio.h>
#include "main.h"

/**
 * 1-swap.c - swaps the values of two integers.
 * @a: first int
 * @b: second int
 * Return: NULL
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
