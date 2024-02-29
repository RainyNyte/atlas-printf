#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	size_t i, len = strlen(format);
	char *strarray;
	struct spec spec;
	char specifier;

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
			i++;
			specifier = format[i];
			printf("%c\n", specifier);

			if (specifier == 's')
			{
				printf("this is a string"); /*check to see if the format detection is working*/
			}
			if (specifier == 'c')
			{
				printf("this is a characrer"); /*check to see if the format detection is working*/
			}


		}

	}

	free(strarray);
	return (len);
}
