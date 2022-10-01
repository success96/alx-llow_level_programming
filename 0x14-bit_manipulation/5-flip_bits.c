#include "main.h"

/**
 * flip_bits - returns the no. of bits needed to flip to
 * get from one number to another
 * @n: num
 * @m: num to flip to
 * Return: number of bits to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
