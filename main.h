#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stddef.h>

/**
 * *
 */
typedef struct print
{
	char *op;
	int (*p)(va_list arg);
} print_t;

int _putchar(char c);

int _printf(const char *format, ...);
int p_char(va_list arg);
int p_string(va_list arg);
int p_int(va_list arg);
int p_float(va_list arg);
#endif
