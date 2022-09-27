#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: func para
 * Return: cap
 */
char *cap_string(char *str)
{
	int k, n = 1;
	char *cap = str;
	char a[] = " \t\n,.!?\"(){}";

	while (*str)
	{
		if (n && *str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		n = 0;
		for (k = 0; k < 12; k++)
		{
			if (*str == a[k])
			{
				n = 1;
			}
		}
		str++;
	}
	return (cap);
}
