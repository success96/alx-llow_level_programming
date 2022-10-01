#include "main.h"
#include <stdlib.h>

/**
 * wordcount - count words
 * @str: string to count word from
 * Return: number of words
 */
int wordcount(char *str)
{
	int i, words = 0, f = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			f = 0;
		}
		else if (!f)
		{
			f = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - splits two strings
 * @str: string to be splitted
 * Return: NULL or pointer
 */
char **strtow(char *str)
{
	int i, r = 0, words;
	char **chr;

	if (str == NULL)
		return (NULL);
	words = wordcount(str);
	if (!words)
		return (NULL);
	chr = malloc((words + 1) * sizeof(*chr));
	if (chr == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ')
		{
			str += 1;
			continue;
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			;
		chr[r] = malloc(i + 1);
		if (chr[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(chr[i]);
			free(chr);
			return (NULL);
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			chr[r][i] = str[i];
		chr[r][i] = '\0';
		r++;
		str += i;
	}
	chr[r] = NULL;
	return (chr);
}
