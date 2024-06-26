#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* print_char - check code
*
* @char_list: char va_list
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
* @str_list: str va_list
* Return: length
*/
int print_string(va_list str_list)
{
	int i;
	char *string;

	string = va_arg(str_list, char *);
	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}


/**
* number_iteration - printing logic for numbers
*
* @n: int
* @count: int
* Return: length
*/
int number_iteration(long int n, int count)
{
	int new_count = 0;

	if (n < 0)
	{
		n = n * -1;
		count++;
		_putchar('-');
	}

	if (n == 0)
		return (count);
	new_count = number_iteration(n / 10, count + 1);

	_putchar((n % 10) + '0');
	return (new_count);
}


/**
* print_number - check code
*
* @nr_list: nr va_list
* Return: length
*/
int print_number(va_list nr_list)
{
	int length = 1;
	int number = va_arg(nr_list, int);

	if (number == 0)
		_putchar('0');
	else
		length = number_iteration(number, 0);

	return (length);
}


