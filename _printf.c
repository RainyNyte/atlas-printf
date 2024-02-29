#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	size_t i = 0, len = strlen(format);
	char strarray[len + 1];

	for (i; i < len; i++)
	{
		strarray[i] = format[i];
		_putchar(strarray[i]);
	}
}
