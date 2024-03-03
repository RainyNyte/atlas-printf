#include <stdarg.h>
#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

struct spec
{
	char specifier;
};
int _putchar(char c);
int _printf(const char *format, ...);
int *String(va_list args, int *final);
int *IdentifySpecifier(char specifier, va_list args, int *final);
int *Integer(va_list args, int *final);
char *int10_to_string(int num, char *str);
int numDigits(int num);

#endif /* MY_HEADER_FILE_H */

