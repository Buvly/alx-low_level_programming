#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse integers of an array.
 * @a: array.
 * @n: number of elements in array.
 * Return: NULL.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	
	for (i = 0; i < n-1; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
