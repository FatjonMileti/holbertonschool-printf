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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				length++;
			}
			else
			{
				for (j = 0; j < 4; j++)
					if (format[i + 1] == *type[j].op)
					{
						length += type[j].p(arg);
					}	
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
