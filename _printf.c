#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	size_t i, final = 0, len = strlen(format);
	char *strarray, *tmps;
	char specifier;
	int tmp;
	va_list args;

	strarray = malloc(sizeof(char) * (len + 1));

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		strarray[i] = format[i];
		if (strarray[i] != '%')
		{
			_putchar(strarray[i]);
			final++;
		}
		else
		{
			i++;
			specifier = format[i];

			if (specifier == 's')
			{
				tmps = va_arg(args, char*);
				if (tmps == NULL)
				{
					_printf("(null)");
					final +=6;
				}
				else
				{
					while (*tmps)
					{
						_putchar(*tmps);
						tmps++;
						final++;
					}
				}
			}
			if (specifier == 'c')
			{
				tmp = va_arg(args, int);
				_putchar(tmp);
				final++;
			}
			if (specifier == '%')
			{
				_putchar('%');
				final++;
			}


		}

	}

	va_end(args);
	free(strarray);
	return (final);
}
