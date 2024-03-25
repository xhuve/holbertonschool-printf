#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
*
*
*
*/
typedef struct print_list
{
	char specifier;
	int (*print_func)(va_list);
} print_list;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list ch);
int print_string(va_list str);


#endif
