#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* print_char - check code
*
* @ch: char va_list
* Return: 1.
*/
int print_char(va_list char_list)
{
	_putchar(va_arg(char_list, int));
	return (1);
}


/**
* print_string - check code
*
* @str: str va_list
* Return: length
*/
int print_string(va_list str)
{
	int i;
	char *string;

	string = va_arg(str, char *);
	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
