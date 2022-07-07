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
	int i, j, length = 0;
	
	va_start (arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				length++;
			}
			else if (format[i + 1] != '%')
			{
				for (j = 0; j < 5; j++)
					if (format[i + 1] == *type[j].op)
					{
						length += type[j].p(arg);
					}
			}
			else
			{
				length++;
			}
			i++;

		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}
	va_end(arg);
	return (length);
}
