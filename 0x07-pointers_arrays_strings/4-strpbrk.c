#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: function parameter
 * @accept: second function parameter
 * Return: pointer to the byte in (s)
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
