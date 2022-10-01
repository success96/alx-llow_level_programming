#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: function parameter
 * Return: NULL or a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
