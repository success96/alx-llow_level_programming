#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: func para
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int num;
	int i;

	if ((len % 2) == 0)
	{
		num = len / 2;
	}
	else
	{
		num = (len + 1) / 2;
	}
	for (i = num; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
