#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcode of its own function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int con, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	con = atoi(argv[1]);
	if (con < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < con; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (i == con - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
