#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: function parameter
 * @b: second function parameter
 * @n: third function parameter
 * Return: pointer to memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
