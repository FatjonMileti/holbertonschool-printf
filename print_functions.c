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
<<<<<<< HEAD
int p_int(va_list arg)
{
	int n = va_arg(arg, int), i = 0, j, length = 0;
	int arr[10] = {};

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		length++;
	}
	while (n != 0)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
	}
	length += i;
	return (length);
=======

int p_int(va_list arg)
{
	int i, length;
	
	i = va_arg(arg, int);
	for (length = 0; i != 0; length++)
	{
		_putchar(i % 10);
		i = i / 10;
	}
	return (length);
}
/**
int p_float(va_list arg)
{
	return (1);
>>>>>>> 144cb0bee9e406fe673f5c5d08537815e252e0ec
}
