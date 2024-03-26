#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* _printf - check code
*
* @format: char
*
* Return: size
*/
int _printf(const char *format, ...)
{
	int i, j, len, isConversion;
	va_list list;

	print_list prints[] = {
		{ "c", print_char },
		{ "s", print_string },
		{ NULL, NULL }
	};

	len = 0;
	i = 0;
	isConversion = 0;
	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (prints[j].specifier != NULL)
			{
				if (format[i + 1] == prints[j].specifier[0])
				{
					len += prints[j].print_func(list);
					i++;
					isConversion++;
				}
				if (format[i] == '%' && format[i + 1] == '\0')
					isConversion++;
				j++;
			}
			if (!isConversion)
			{
				_putchar(format[i]);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			len += 1;
			i++;
		}
		else
		{
			_putchar(format[i]);
			len += 1;
		}
		i++;
	}
	va_end(list);
	return (len);
}
