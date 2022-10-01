#include <stdio.h>

/**
 * main - prints all command line arguments as it receives it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n = argc;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
