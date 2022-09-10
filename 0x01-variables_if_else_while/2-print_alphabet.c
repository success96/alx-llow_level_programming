#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - main block
 * Dwscription: prints the alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		ptutchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
