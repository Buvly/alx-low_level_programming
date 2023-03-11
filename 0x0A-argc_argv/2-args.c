#include <stdio.h>

/**
 * main - prints its name.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arguments.
 * Return: 0 in case of success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
