#include "main.h"
#include <stdio.h>

/**
* main -  prints numbers from 1 to 100 and for multiples of 3 prints Fizz and multiples of 5 prints Buzz if both prints FizzBuzz.
* Return: No return.
*/
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}

