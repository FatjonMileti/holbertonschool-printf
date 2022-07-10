#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * p_char - called from _printf
 * @arg: char
 * Return: int
 */
int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
/**
 * p_string - called from _printf
 * @arg: string
 * Return: int
 */
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
/**
 * p_int - called from _printf
 * @arg: int
 * Return: int
 */
int p_int(va_list arg)
{
	long n = va_arg(arg, int), i = 0, j, length = 0;
	int arr[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		length++;
	}
	if (n == 0)
	{
		_putchar('0');
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
}
