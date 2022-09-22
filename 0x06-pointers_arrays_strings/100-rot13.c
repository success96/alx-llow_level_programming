#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @rot: func para
 * Return: encrypted text
 */
char *rot13(char *rot)
{
	char store;
	char *r = rot;

	while (*rot)
	{
		store = (*rot & 32) + 65;
		if ((*rot >= 'a' && *rot <= 'z') || (*rot >= 'A' && *rot <= 'Z'))
		{
			*rot = (*rot - store + 13) % 26 + store;
		}
		rot++;
	}
	return (r);
}
