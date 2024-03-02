#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

struct spec
{
	char specifier;
};
int _putchar(char c);
int _printf(const char *format, ...);
void String(va_list args, size_t *final);
int IdentifySpecifier(char specifier, va_list args, size_t *final);

#endif /* MY_HEADER_FILE_H */

