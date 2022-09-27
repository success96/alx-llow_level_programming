#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: func para
 * @needle: second func para
 * Return: a pointer to the beginning of the located substring or NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
