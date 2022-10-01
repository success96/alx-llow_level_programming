#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to strings of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num += 1;
	}
	return (num);

}
