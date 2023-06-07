#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers01.
 * @a: input array
 * @n: number of  elements
 * Return: NULL
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
