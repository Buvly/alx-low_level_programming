#include "main.h"

/**
 * factorial - calc the fact.
 * @n: integer
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
 	}

}
