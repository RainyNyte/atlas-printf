#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	size_t i, len = strlen(format);
       char *strarray;
       char specifier;
       int tmp;
       char *tmps;
       va_list args;

	strarray = malloc(sizeof(char) * (len + 1));

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		strarray[i] = format[i];
		if (strarray[i] != '%')
		{
			_putchar(strarray[i]);
		}
		else
		{
			i++;
			specifier = format[i];

			if (specifier == 's')
			{
				tmps = va_arg(args, char*);
				while (*tmps)
				{
					_putchar(*tmps);
					tmps++;
				}
			}
			if (specifier == 'c')
			{
				tmp = va_arg(args, int);
				_putchar(tmp);
			}


		}

	}

	free(strarray);
	return (len);
}
