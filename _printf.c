#include "main.h"
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
		{"i", p_int}
};
	int i;
	while (i < 4)
	{
		if (type[i].op == format)
		{
			return (type[i].p);
		}
		i++;
	}
	return (i);
}
