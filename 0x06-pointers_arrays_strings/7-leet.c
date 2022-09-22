#include "main.h"

/**
 * leet - encodes a string into 1337
 * @lt: func para
 * Return: result
 */
char *leet(char *lt)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int i;
	char *r = lt;

	while (*lt)
	{
		for (i = 0; i < 5; i++)
		{
			if (*lt == a[i] || *lt == a[i] - 32)
			{
				*lt = num[i] + '0';
			}
		}
		lt++;
	}
	return (r);
}
