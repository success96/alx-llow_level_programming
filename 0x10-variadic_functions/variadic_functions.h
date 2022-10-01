#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - define a new type
 * @symbol: data type
 * @print: func pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void character(va_list arg);
void integer(va_list arg);
void real(va_list arg);
void string(va_list arg);

#endif
