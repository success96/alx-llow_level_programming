#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: function para
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > '\0'; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
