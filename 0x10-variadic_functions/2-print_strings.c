#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed bby a new line
 * @separator: string to be printed
 * @n: number of strings passed
 * ...: elipses
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
