#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - change lowercase letter to uppercase
 * @str: func para
 * Return: upper
 */
char *string_toupper(char *str)
{
	int i;
	char *s = str;

	for (i = strlen(str); i > '\0'; i--)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (s);
}
