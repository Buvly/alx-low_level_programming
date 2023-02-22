#include <stdio.h>
#include "main.h"

/**
 * add -  a function that prints the addition of 2 numbers
 * @n: natural numbers
 * Return: natural numbers from 0 to 98
 */
void print_to_98(int n)
{
	int i;
	
	if (i < 99)
	{

		for (i = n; i < 99; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 99; i--);
		{
			printf("%d, ", i);
		}
	}
	printf("\n");  
}

