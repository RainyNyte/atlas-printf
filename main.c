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
	char c;
	char *s;

	len = _printf("Let's try to printf a simple sentence.\n");
	printf("_printf returns: %d\n", len);
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("printf returns: %d\n", len2);

	len = _printf("%c", 'S');
	printf(" | _printf(\"%%c\") returns: %d\n", len);
	len2 = printf("%c", 'S');
	printf(" | printf(\"%%c\") returns: %d\n", len2);

	len = _printf("%");
	printf(" | _printf(\"%\") returns: %d\n", len);
	len2  = printf("%");
	printf(" | printf(\"%\") returns: %d\n", len2);

	len = _printf("%!\n");
	printf("_printf(\"%!\\n\") returns: %d\n", len);
	len2  = printf("%!\n");
	printf(" | printf(\"%!\\n\") returns: %d\n", len2);

	len = _printf("%K\n");
	printf("_printf(\"%K\\n\") returns: %d\n", len);
	len2  = printf("%K\n");
	printf("printf(\"%K\\n\") returns: %d\n", len2);

	c = 'C';
	_printf("this is a character: %c\n", c);
	s = "this is a string";
	_printf("what's this: %s\n", s);
	_printf("this is a percent sign: %%\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("%d", INT_MIN);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));


/**
====Currently Unimplemented WIP====
   unsigned int ui;
   void *addr;
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
*/
	return (0);
}
