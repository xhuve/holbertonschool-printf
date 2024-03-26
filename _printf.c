#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* print_logic - check code
*
* @format: char
* @list: list
* @prints: struc
*
* Return: size
*/

int print_logic(const char *format, va_list list, print_list *prints)
{
	int i = 0, j = 0, isConversion = 0, len = 0;

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
				j++;
			}
			if (!isConversion)
			{
				_putchar(format[i]);
				len++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len++;
		}
		else
		{
			len++;
			_putchar(format[i]);
		}
		i++;
	}
	return (len);
}
/**
* _printf - check code
*
* @format: char
*
* Return: size
*/
int _printf(const char *format, ...)
{
	va_list list;
	int length;

	print_list prints[] = {
		{ "c", print_char },
		{ "s", print_string },
		{ NULL, NULL }
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

		length = print_logic(format, list, prints);

	va_end(list);
	return (length);
}
