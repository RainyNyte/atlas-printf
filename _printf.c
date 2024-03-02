#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *_printf- simplified recreation of the standard library printf function
 *@format: the string to be printed
*
*Return: length of the string printed, or -1 if no valid string is supplied
*/

int _printf(const char *format, ...)
{
	size_t i, len = strlen(format);
	int final = 0;
	char *strarray;
	char specifier = '\0';
	va_list args;

	if (format == NULL)
		return (-1);
	strarray = malloc(sizeof(char) * (len + 1));
	if (strarray == NULL)
		return (-1);

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

			IdentifySpecifier(specifier, args, &final);
		}

	}

	va_end(args);
	free(strarray);
	return (final);
}

/**
 * String - Print a string or "(null)" if the string is NULL
 * @args: Variable argument list
 * @final: Pointer to the counter for characters printed
 *
 * Return: Always 0 (success)
 */

int *String(va_list args, int *final)
{
	char *tmps = va_arg(args, char*);

	if (tmps == NULL)
	{
		_printf("(null)");
		(*final) += 6;
	}
	else
	{
		while (*tmps)
		{
			_putchar(*tmps);
			tmps++;
			(*final)++;
		}
	}
	return (final);
}

/**
 * IdentifySpecifier - Identify and process format specifiers
 * @specifier: The format specifier character
 * @args: Variable argument list
 * @final: Pointer to the counter for characters printed
 *
 * Return: 0 on success, non-zero on error
 */

int *IdentifySpecifier(char specifier, va_list args, int *final)
{
	int tmp;

	if (specifier == 's')
		String(args, final);
	else if (specifier == 'c')
	{
		tmp = va_arg(args, int);
		_putchar(tmp);
		(*final)++;
	}
	else if (specifier == 'd' || specifier == 'i')
		Integer(args, final);
	else if (specifier == '%')
	{
		_putchar('%');
		(*final)++;
	}
	else if (specifier == '\0')
	{
		*final = -1;
		return (final);
	}
	else
	{
		_putchar('%');
		_putchar(specifier);
		(*final) += 2;
	}
	return (final);
}
/**
 * Integer - Print an integer
 * @args: Variable argument list
 * @final: Pointer to the counter for characters printed
 *
 * Return: Always 0 (success)
 */
int *Integer(va_list args, int *final)
{
	int num = va_arg(args, int);
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		(*final)++;
		num = -num;
	}

	while (num / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		_putchar(num / divisor + '0');
		(*final)++;
		num %= divisor;
		divisor /= 10;
	}

	return (final);
}
