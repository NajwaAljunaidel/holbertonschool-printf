#include "main.h"

/**
 * handle_format - Processes a format specifier after '%'.
 * @specifier: Format character to interpret.
 * @args: List of variadic arguments.
 * @printed: Pointer to an integer to store printed character count.
 *
 * Supported specifiers:
 *   'c' - character
 *   's' - string
 *   '%' - percent symbol
 *   'd', 'i' - signed integer
 * Unrecognized: prints "%<specifier>" literally
 *
 * Return: 
 *   0 if handled successfully,
 *   2 if printed as literal (e.g., %x),
 *  -1 on failure.
 */
static int handle_format(char specifier, va_list args, int *printed)
{
	int result;

	switch (specifier)
	{
	case 'c':
		result = print_char((char)va_arg(args, int));
		break;
	case 's':
		result = print_string(va_arg(args, char *));
		break;
	case '%':
		result = print_percent();
		break;
	case 'd':
	case 'i':
		result = print_integer(va_arg(args, int));
		break;
	case '\0':
		return (-1);
	default:
		if (write(1, "%", 1) == -1 || write(1, &specifier, 1) == -1)
			return (-1);
		return (2);
	}

	*printed = result;
	return (result < 0 ? -1 : 0);
}

/**
 * _printf - Custom formatted output function.
 * @format: Input format string with optional specifiers.
 *
 * Functionality:
 *   Parses @format, processes tokens, and prints characters accordingly.
 *   Supports %c, %s, %d, %i, and %%.
 *
 * Return: Number of characters printed (excluding null byte), or -1 on error.
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *cursor;
	int count = 0, chars_printed = 0, result;

	if (!format)
		return (-1);

	va_start(args, format);
	cursor = format;

	while (*cursor)
	{
		if (*cursor != '%')
		{
			if (write(1, cursor, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			count++;
			cursor++;
			continue;
		}

		cursor++;  /* Skip '%' */
		chars_printed = 0;
		result = handle_format(*cursor, args, &chars_printed);
		if (result == -1)
		{
			va_end(args);
			return (-1);
		}
		count += result + chars_printed;
		cursor++;
	}

	va_end(args);
	return (count);
}

