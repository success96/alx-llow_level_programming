#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenates two stringss
 * @s1: first parameter to concatenate
 * @s2: second parameter to concatenate
 * Return: NULL or pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len, len1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len]; len++)
		;
	for (len1 = 0; s2[len1]; len1++)
		;
	str = malloc(len + len1 + 1);
	if (str == NULL)
		return (str);
	for (i = 0; i < len; i++)
		str[i] = s1[i];
	for (j = 0; i < len1 + len; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
