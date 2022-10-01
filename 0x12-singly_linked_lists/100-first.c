#include "lists.h"
void __attribute__((constructor)) before(void);
/**
 * before - prints a string before the main function is executed
 * Return: 0
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

