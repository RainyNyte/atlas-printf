#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_printf.h"

int _printf(const char *format, ...)
{
	size_t i, len = strlen(format);
       char *strarray;

       strarray = malloc(sizeof(char) * (len + 1));

       for (i = 0; i < len; i++)
       {
	       strarray[i] = format[i];
	       _putchar(strarray[i]);
       }

       free(strarray);
       return (len);
}
