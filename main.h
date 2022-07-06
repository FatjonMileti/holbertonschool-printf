#ifndef _MAIN_H
#define _MAIN_H

/**
 * *
 */
typedef struct print {
	char *op;
	int(*p)();
} print_t;

int_putchar(char c);

int _printf(const char *format, ...);
int p_char(va_list arg);
int p_string(va_list arg);
int p_int(va_list arg);
int p_float(va_list arg);
#endif
