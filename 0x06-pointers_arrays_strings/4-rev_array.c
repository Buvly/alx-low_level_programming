#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers.
 * @a: array.
 * @n: number of elements in array.
 * Return: NULL.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
