#include <stdio.h>
#include "main.h"

/**
 * add -  a function that prints the addition of 2 numbers
 * @n: natural numbers
 * Return: natural numbers from 0 to 98
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		printf("%d, ", n);
	}
	printf("\n");  
}

