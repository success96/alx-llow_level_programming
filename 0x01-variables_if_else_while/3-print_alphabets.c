#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main – main block
 *Description: print alphabets in lower case then in upper case
 *Return: 0
 */
int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);

}
