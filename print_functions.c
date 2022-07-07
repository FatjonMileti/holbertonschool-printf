#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *
 */
int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

int p_string(va_list arg)
{
	char *s;
	int i;

	s = va_arg(arg, char*);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/** int p_int(va_list arg)
{
	return (1);
}

int p_float(va_list arg)
{
	return (1);
}
*/
