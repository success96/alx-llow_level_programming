#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = argc;
	int digit1, digit2, digit3;

	if (num != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		digit1 = atoi(argv[1]);
		digit2 = atoi(argv[2]);
		digit3 = digit1 * digit2;

		printf("%d\n", digit3);
		return (0);
	}
	return (0);
}
