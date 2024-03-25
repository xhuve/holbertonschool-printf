#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* main - check code
*
* Return: 0
*/


int _printf(const char *format, ...)
{
	int i = 0, j;
	va_list list;

	print_list prints[] = {
		{ 'c', print_char },
		{ 's', print_string },
		{ '\0', '\0' }
	};

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (prints[j].specifier != '\0')
			{
				if (format[i + 1] == prints[j].specifier)
				{
					prints[j].print_func(list);
					i += 2;
					break;
				}
				j++;
			}
		}
		_putchar(format[i]);
	i++;
	}
	va_end(list);
	return (0);
}

