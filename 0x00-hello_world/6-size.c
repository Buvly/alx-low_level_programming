#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char a;
	printf("the size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("the size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("the size of a char is: %lu.\n", (unsigned long)sizeof(a));
	return(0);
}

