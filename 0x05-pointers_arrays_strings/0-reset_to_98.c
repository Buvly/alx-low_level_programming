#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value of the pointer it points to to 98
 * @n: the value that which the pointer points to
 * @*n: pointer
 * Return: NULL
 */
void reset_to_98(int *n)
{
	*n = 98;
}
