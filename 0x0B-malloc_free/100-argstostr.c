#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: integer para
 * @av: char para
 * Return: NULL or pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, p = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		len += j + 1;
	}
	str = malloc(len + 1);
	if (str != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++, p++)
				str[p] = av[i][j];
			str[p++] = '\n';
		}
		str[p] = '\0';
	}
	return (str);
}
