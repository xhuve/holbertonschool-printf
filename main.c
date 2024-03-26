#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("len:[%d]\n", len);
    printf("len2:[%d]\n", len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%c", 'S');
	_printf("%c", 'S');
	printf("\n");
	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");
    return (0);
}
