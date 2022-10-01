#include "variadic_functions.h"
#include <stdio.h>

/**
 * character - prints char
 * @arg: argument
 */
void character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * integer - prints int
 * @arg: argument
 */
void integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * real - prints float
 * @arg: argument
 */
void real(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * string - prints string
 * @arg: argument
 */
void string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of types of arg passed to func
 * ...: elipses
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list any;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", character},
		{"i", integer},
		{"f", real},
		{"s", string}
	};

	va_start(any, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(any);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(any);
}
