#include "main.h"

/**
 * process_specifier - Determines and handles format specifiers.
 * @sp: The format specifier character after '%'.
 * @args: The variadic argument list.
 * @printed: Pointer to count of printed characters.
 *
 * Handles:
 *   %c - character
 *   %s - string
 *   %% - percent
 *   %d, %i - integer
 * Prints unknown specifiers literally (e.g., %q).
 *
 * Return:
 *   0 if handled by helper function,
 *   2 if printed as literal (e.g., "%x"),
 *  -1 if an error occurs.
 */
static int process_specifier(char sp, va_list args, int *printed)
{
	int res;

	switch (sp)
	{
		case 'c':
			res = print_char((char)va_arg(args, int));
			break;
		case 's':
			res = print_string(va_arg(args, char *));
			break;
		case '%':
			res = print_percent();
			break;
		case 'd':
		case 'i':
			res = print_integer(va_arg(args, int));
			break;
		case '\0':
			return (-1);
		default:
			if (write(1, "%", 1) == -1 || write(1, &sp, 1) == -1)
				return (-1);
			return (2);
	}

	*printed = res;
	return (res < 0 ? -1 : 0);
}

/**
 * _printf - Reimplementation of printf for formatted output.
 * @format: The format string containing characters and tokens.
 *
 * Description:
 *   Prints to standard output using a simplified version of printf.
 *   Supports %c, %s, %%, %d, and %i.
 *
 * Return: Total number of characters printed, or -1 on failure.
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *ptr;
	int total = 0, printed = 0, out;

	if (!format)
		return (-1);

	va_start(args, format);
	ptr = format;

	while (*ptr)
	{
		if (*ptr != '%')
		{
			if (write(1, ptr, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			total++;
			ptr++;
			continue;
		}

		ptr++; /* Move past '%' */
		printed = 0;
		out = process_specifier(*ptr, args, &printed);
		if (out == -1)
		{
			va_end(args);
			return (-1);
		}
		total += out + printed;
		ptr++;
	}

	va_end(args);
	return (total);
}

