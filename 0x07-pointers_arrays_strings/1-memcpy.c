#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: function parameter
 * @src: second function parameter
 * @n: third function parameter
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
