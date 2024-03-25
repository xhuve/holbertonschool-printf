#include "main.h"
#include <stdarg.h>

/**
* print_char - check code
*
* @ch: char va_list
*/
int print_char(va_list ch)
{
	_putchar(va_arg(ch, int));
	return (1);
}


/**
* print_string - check code
*
* @str: str va_list
*/
int print_string(va_list str)
{
	int i;
	char *string = va_arg(str, char *);

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
