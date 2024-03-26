#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
* struct print_list - check code
*
* @specifier: char
* @print_func: func pointer
*/
typedef struct print_list
{
	char *specifier;
	int (*print_func)(va_list list);
} print_list;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list char_list);
int print_string(va_list str_list);


#endif
