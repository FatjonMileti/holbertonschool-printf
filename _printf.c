#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	print_t type[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL}
};
	va_list arg;
	int i, j;
	
	va_start (arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			else
			{
				for (j = 0; j < 4; j++)
					if (format[i + 1] == *type[j].op)
						type[j].p(arg);
			}
		}
		else 
		{
			_putchar(format[i]);
		}
	}
	va_end(arg);
	return (i);
}
