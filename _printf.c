#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	size_t i, len = strlen(format);
	char *strarray;
	struct spec spec;

	strarray = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
	{
		strarray[i] = format[i];
		if (strarray[i] != '%')
		{
			_putchar(strarray[i]);
		}
		else
		{
			spec.specifier = strarray[i+1];
			if (spec.specifier == 's')
			{
				printf("this is a string\n"); /*check to see if the format detection is working*/
			}
			if (spec.specifier == 'c')
			{
				printf("this is a characrer\n"); /*check to see if the format detection is working*/
			}


		}

	}

	free(strarray);
	return (len);
}
